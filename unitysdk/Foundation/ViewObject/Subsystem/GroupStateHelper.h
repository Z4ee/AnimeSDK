#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Tuple_2.h"
#include "unitysdk/Foundation/ViewObject/Subsystem/GroupStateChangeData.h"
#include "unitysdk/Foundation/ViewObject/Subsystem/GroupStateChangeListenEntry.h"
#include "unitysdk/System/Object.h"

class Class_3_620977F55CD7E401_5;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T1, typename T2> class Class_1_19F8D0BF0A8C8F12;

#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_ADDLISTENER_OFFSET UNITYSDK_OFFSET(0x13816530)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_CACHESTATE_OFFSET UNITYSDK_OFFSET(0x138169F0)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_CLEAR_OFFSET UNITYSDK_OFFSET(0x13816400)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_GET_INS_OFFSET UNITYSDK_OFFSET(0x13816300)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_NOTIFYGROUPSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x13816AD0)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_ONGETALLGROUPSTATE_OFFSET UNITYSDK_OFFSET(0x138167F0)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_REMOVELISTENER_OFFSET UNITYSDK_OFFSET(0x138166C0)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_TRYGETSTATEVALUE_OFFSET UNITYSDK_OFFSET(0x13816FC0)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x13817070)

namespace Foundation::ViewObject::Subsystem
{
	inline static constexpr unsigned int GroupStateHelper_TypeDefinitionIndex = 63847;

	class GroupStateHelper : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::Foundation::Tuple_2<::System::UInt32, ::System::String*>, ::System::Int32>* GroupStateValueCache; // 0x10
		::Class_1_19F8D0BF0A8C8F12<::Foundation::Tuple_2<::System::UInt32, ::System::String*>, ::Foundation::ViewObject::Subsystem::GroupStateChangeListenEntry>* _groupStateChangeListenEntries; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER__CTOR_OFFSET))(this);
		}

		static ::Foundation::ViewObject::Subsystem::GroupStateHelper* get_Ins()
		{
			return ((::Foundation::ViewObject::Subsystem::GroupStateHelper*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_GET_INS_OFFSET))();
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_CLEAR_OFFSET))(this);
		}

		::System::Void AddListener(::Foundation::ViewObject::Subsystem::GroupStateChangeListenEntry entry)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Subsystem::GroupStateChangeListenEntry))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_ADDLISTENER_OFFSET))(this, entry);
		}

		::System::Void RemoveListener(::Foundation::ViewObject::Subsystem::GroupStateChangeListenEntry entry)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Subsystem::GroupStateChangeListenEntry))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_REMOVELISTENER_OFFSET))(this, entry);
		}

		::System::Void OnGetAllGroupState(::System::UInt32 groupId, ::Class_3_620977F55CD7E401_5* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_3_620977F55CD7E401_5*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_ONGETALLGROUPSTATE_OFFSET))(this, groupId, rsp);
		}

		::System::Void NotifyGroupStateChange(::Foundation::ViewObject::Subsystem::GroupStateChangeData data)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Subsystem::GroupStateChangeData))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_NOTIFYGROUPSTATECHANGE_OFFSET))(this, data);
		}

		::System::Void CacheState(::Foundation::Tuple_2<::System::UInt32, ::System::String*> key, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Tuple_2<::System::UInt32, ::System::String*>, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_CACHESTATE_OFFSET))(this, key, value);
		}

		::System::Boolean TryGetStateValue(::Foundation::Tuple_2<::System::UInt32, ::System::String*> key, ::System::Int32& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Tuple_2<::System::UInt32, ::System::String*>, ::System::Int32&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_TRYGETSTATEVALUE_OFFSET))(this, key, value);
		}
	};
}

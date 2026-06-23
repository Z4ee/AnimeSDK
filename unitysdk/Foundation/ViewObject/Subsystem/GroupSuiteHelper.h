#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/Subsystem/GroupSuiteChangeListenEntry.h"
#include "unitysdk/Foundation/ViewObject/SuiteInfo.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T1, typename T2> class Class_1_534AF681CC2BD5FD_255;

#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSUITEHELPER_ADDLISTENER_OFFSET UNITYSDK_OFFSET(0x12E6CEE0)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSUITEHELPER_CLEAR_OFFSET UNITYSDK_OFFSET(0x12E6CDB0)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSUITEHELPER_GET_INS_OFFSET UNITYSDK_OFFSET(0x12E6CCB0)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSUITEHELPER_NOTIFYSUITECHANGE_OFFSET UNITYSDK_OFFSET(0x12E6CFD0)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSUITEHELPER_REMOVELISTENER_OFFSET UNITYSDK_OFFSET(0x12E6CF50)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSUITEHELPER_TRYGETCURRENTSUITE_OFFSET UNITYSDK_OFFSET(0x12E6D580)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSUITEHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x12E6D630)

namespace Foundation::ViewObject::Subsystem
{
	inline static constexpr unsigned int GroupSuiteHelper_TypeDefinitionIndex = 43022;

	class GroupSuiteHelper : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Foundation::ViewObject::SuiteInfo>* _suiteCache; // 0x10
		::Class_1_534AF681CC2BD5FD_255<::System::UInt32, ::Foundation::ViewObject::Subsystem::GroupSuiteChangeListenEntry>* _listeners; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSUITEHELPER__CTOR_OFFSET))(this);
		}

		static ::Foundation::ViewObject::Subsystem::GroupSuiteHelper* get_Ins()
		{
			return ((::Foundation::ViewObject::Subsystem::GroupSuiteHelper*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSUITEHELPER_GET_INS_OFFSET))();
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSUITEHELPER_CLEAR_OFFSET))(this);
		}

		::System::Void AddListener(::Foundation::ViewObject::Subsystem::GroupSuiteChangeListenEntry entry)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Subsystem::GroupSuiteChangeListenEntry))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSUITEHELPER_ADDLISTENER_OFFSET))(this, entry);
		}

		::System::Void RemoveListener(::Foundation::ViewObject::Subsystem::GroupSuiteChangeListenEntry entry)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Subsystem::GroupSuiteChangeListenEntry))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSUITEHELPER_REMOVELISTENER_OFFSET))(this, entry);
		}

		::System::Void NotifySuiteChange(::System::UInt32 groupId, ::Foundation::ViewObject::SuiteInfo oldSuiteInfo, ::Foundation::ViewObject::SuiteInfo newSuiteInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Foundation::ViewObject::SuiteInfo, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSUITEHELPER_NOTIFYSUITECHANGE_OFFSET))(this, groupId, oldSuiteInfo, newSuiteInfo);
		}

		::System::Boolean TryGetCurrentSuite(::System::UInt32 groupId, ::Foundation::ViewObject::SuiteInfo& suiteInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Foundation::ViewObject::SuiteInfo&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSUITEHELPER_TRYGETCURRENTSUITE_OFFSET))(this, groupId, suiteInfo);
		}
	};
}

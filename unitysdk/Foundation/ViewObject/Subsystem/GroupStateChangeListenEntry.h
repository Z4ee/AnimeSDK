#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_28F0414D4F296993;
namespace System { class Object; }
namespace System { class String; }

#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATECHANGELISTENENTRY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x85AD60)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATECHANGELISTENENTRY_EQUALS_OFFSET UNITYSDK_OFFSET(0x85AC90)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATECHANGELISTENENTRY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x85AD70)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATECHANGELISTENENTRY_GETSTATEID_OFFSET UNITYSDK_OFFSET(0x85ADD0)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATECHANGELISTENENTRY_NOTIFY_OFFSET UNITYSDK_OFFSET(0x85AC60)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATECHANGELISTENENTRY___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x85AE50)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATECHANGELISTENENTRY___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x85AEC0)

namespace Foundation::ViewObject::Subsystem
{
	inline static constexpr unsigned int GroupStateChangeListenEntry_TypeDefinitionIndex = 71313;

	struct alignas(8) GroupStateChangeListenEntry
	{
		::System::Int32 NodeID; // 0x10
		::System::UInt32 GroupId; // 0x14
		::System::String* StateName; // 0x18
		::System::Int32 TargetStateValue; // 0x20
		::Class_1_28F0414D4F296993* Script; // 0x28

		/*
		::System::Boolean Notify(::Foundation::ViewObject::Subsystem::GroupStateChangeData data)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Subsystem::GroupStateChangeData))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATECHANGELISTENENTRY_NOTIFY_OFFSET))(this, data);
		}
		*/

		::System::Boolean Equals(::Foundation::ViewObject::Subsystem::GroupStateChangeListenEntry other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Subsystem::GroupStateChangeListenEntry))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATECHANGELISTENENTRY_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATECHANGELISTENENTRY_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATECHANGELISTENENTRY_GETHASHCODE_OFFSET))(this);
		}

		/*
		::Foundation::Tuple_2<::System::UInt32, ::System::String*> GetStateId()
		{
			return ((::Foundation::Tuple_2<::System::UInt32, ::System::String*>(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATECHANGELISTENENTRY_GETSTATEID_OFFSET))(this);
		}
		*/

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATECHANGELISTENENTRY___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATECHANGELISTENENTRY___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}

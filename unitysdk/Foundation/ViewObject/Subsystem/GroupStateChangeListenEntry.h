#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_3BC6FFBFA6077E08;
namespace System { class Object; }
namespace System { class String; }

#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATECHANGELISTENENTRY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x717480)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATECHANGELISTENENTRY_EQUALS_OFFSET UNITYSDK_OFFSET(0x7173B0)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATECHANGELISTENENTRY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x717490)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATECHANGELISTENENTRY_GETSTATEID_OFFSET UNITYSDK_OFFSET(0x7174F0)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATECHANGELISTENENTRY_NOTIFY_OFFSET UNITYSDK_OFFSET(0x717380)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATECHANGELISTENENTRY___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x717570)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATECHANGELISTENENTRY___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7175E0)

namespace Foundation::ViewObject::Subsystem
{
	inline static constexpr unsigned int GroupStateChangeListenEntry_TypeDefinitionIndex = 68963;

	struct alignas(8) GroupStateChangeListenEntry
	{
		::System::Int32 NodeID; // 0x10
		::System::UInt32 GroupId; // 0x14
		::System::String* StateName; // 0x18
		::System::Int32 TargetStateValue; // 0x20
		::Class_1_3BC6FFBFA6077E08* Script; // 0x28

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

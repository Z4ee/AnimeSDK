#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::ViewObject::Subsystem { class IGroupSuiteChangeListener; }
namespace System { class Object; }

#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSUITECHANGELISTENENTRY_CREATE_OFFSET UNITYSDK_OFFSET(0x10838BB0)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSUITECHANGELISTENENTRY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x6CAF20)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSUITECHANGELISTENENTRY_EQUALS_OFFSET UNITYSDK_OFFSET(0x6CAEA0)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSUITECHANGELISTENENTRY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6CAF30)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSUITECHANGELISTENENTRY___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x6CAFB0)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSUITECHANGELISTENENTRY___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6CB020)

namespace Foundation::ViewObject::Subsystem
{
	inline static constexpr unsigned int GroupSuiteChangeListenEntry_TypeDefinitionIndex = 61745;

	struct alignas(8) GroupSuiteChangeListenEntry
	{
		::System::UInt32 GroupId; // 0x10
		::Foundation::ViewObject::Subsystem::IGroupSuiteChangeListener* Listener; // 0x18

		static ::Foundation::ViewObject::Subsystem::GroupSuiteChangeListenEntry Create(::System::UInt32 groupId, ::Foundation::ViewObject::Subsystem::IGroupSuiteChangeListener* listener)
		{
			return ((::Foundation::ViewObject::Subsystem::GroupSuiteChangeListenEntry(*)(::System::UInt32, ::Foundation::ViewObject::Subsystem::IGroupSuiteChangeListener*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSUITECHANGELISTENENTRY_CREATE_OFFSET))(groupId, listener);
		}

		::System::Boolean Equals(::Foundation::ViewObject::Subsystem::GroupSuiteChangeListenEntry other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Subsystem::GroupSuiteChangeListenEntry))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSUITECHANGELISTENENTRY_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSUITECHANGELISTENENTRY_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSUITECHANGELISTENENTRY_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSUITECHANGELISTENENTRY___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSUITECHANGELISTENENTRY___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}

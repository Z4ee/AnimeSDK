#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define FOUNDATION_VIEWOBJECT_CONTAINER_MAPHANDLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7790B0)
#define FOUNDATION_VIEWOBJECT_CONTAINER_MAPHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x779060)
#define FOUNDATION_VIEWOBJECT_CONTAINER_MAPHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7790C0)
#define FOUNDATION_VIEWOBJECT_CONTAINER_MAPHANDLE_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x1401EEA0)
#define FOUNDATION_VIEWOBJECT_CONTAINER_MAPHANDLE_ISVALID_OFFSET UNITYSDK_OFFSET(0x779010)
#define FOUNDATION_VIEWOBJECT_CONTAINER_MAPHANDLE___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x779110)
#define FOUNDATION_VIEWOBJECT_CONTAINER_MAPHANDLE___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x779170)

namespace Foundation::ViewObject::Container
{
	inline static constexpr unsigned int MapHandle_TypeDefinitionIndex = 57089;

	struct alignas(4) MapHandle
	{
		::System::UInt32 Key; // 0x10

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_CONTAINER_MAPHANDLE_ISVALID_OFFSET))(this);
		}

		static ::Foundation::ViewObject::Container::MapHandle get_Empty()
		{
			return ((::Foundation::ViewObject::Container::MapHandle(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_CONTAINER_MAPHANDLE_GET_EMPTY_OFFSET))();
		}

		::System::Boolean Equals(::Foundation::ViewObject::Container::MapHandle other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Container::MapHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_CONTAINER_MAPHANDLE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_CONTAINER_MAPHANDLE_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_CONTAINER_MAPHANDLE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_CONTAINER_MAPHANDLE___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_CONTAINER_MAPHANDLE___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}

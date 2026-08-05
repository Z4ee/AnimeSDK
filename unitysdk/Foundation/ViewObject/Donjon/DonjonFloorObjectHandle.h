#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::ViewObject::Donjon { class DonjonFloorObject; }
namespace System { class Object; }

#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x783050)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x782FD0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x783060)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE_GET_DUNGEONID_OFFSET UNITYSDK_OFFSET(0x782F50)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE_GET_EMPTYHANDLE_OFFSET UNITYSDK_OFFSET(0x11EAF330)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x782F60)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE_GET_OFFSET UNITYSDK_OFFSET(0x782F70)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE_ISVALID_OFFSET UNITYSDK_OFFSET(0x782F40)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11EB05D0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11EB0690)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x782F20)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x782EE0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x7830B0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x783120)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int DonjonFloorObjectHandle_TypeDefinitionIndex = 65513;

	struct alignas(8) DonjonFloorObjectHandle
	{
		::System::UInt32 _runtimeID; // 0x10
		::Foundation::ViewObject::Donjon::DonjonFloorObject* _cachedObject; // 0x18

		::System::Void _ctor(::System::Int32 floorID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE__CTOR_OFFSET))(this, floorID);
		}

		::System::Void _ctor_1(::Foundation::ViewObject::Donjon::DonjonFloorObject* floorObject)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObject*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE__CTOR_1_OFFSET))(this, floorObject);
		}

		static ::Foundation::ViewObject::Donjon::DonjonFloorObjectHandle get_EmptyHandle()
		{
			return ((::Foundation::ViewObject::Donjon::DonjonFloorObjectHandle(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE_GET_EMPTYHANDLE_OFFSET))();
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE_ISVALID_OFFSET))(this);
		}

		::System::Int32 get_DungeonID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE_GET_DUNGEONID_OFFSET))(this);
		}

		::System::Int32 get_FloorID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE_GET_FLOORID_OFFSET))(this);
		}

		::Foundation::ViewObject::Donjon::DonjonFloorObject* Get()
		{
			return ((::Foundation::ViewObject::Donjon::DonjonFloorObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE_GET_OFFSET))(this);
		}

		::System::Boolean Equals(::Foundation::ViewObject::Donjon::DonjonFloorObjectHandle other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::Foundation::ViewObject::Donjon::DonjonFloorObjectHandle left, ::Foundation::ViewObject::Donjon::DonjonFloorObjectHandle right)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::Donjon::DonjonFloorObjectHandle, ::Foundation::ViewObject::Donjon::DonjonFloorObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::Foundation::ViewObject::Donjon::DonjonFloorObjectHandle left, ::Foundation::ViewObject::Donjon::DonjonFloorObjectHandle right)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::Donjon::DonjonFloorObjectHandle, ::Foundation::ViewObject::Donjon::DonjonFloorObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}

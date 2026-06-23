#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::ViewObject::Donjon { class DonjonFloorObject; }
namespace System { class Object; }

#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x79F0B0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x79F030)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x79F0C0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE_GET_DUNGEONID_OFFSET UNITYSDK_OFFSET(0x79EFB0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE_GET_EMPTYHANDLE_OFFSET UNITYSDK_OFFSET(0x12E6B250)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x79EFC0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE_GET_OFFSET UNITYSDK_OFFSET(0x79EFD0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE_ISVALID_OFFSET UNITYSDK_OFFSET(0x79EFA0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x12E6C4B0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x12E6C570)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x79EF80)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x79EF40)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x79F110)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTHANDLE___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x79F180)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int DonjonFloorObjectHandle_TypeDefinitionIndex = 66156;

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

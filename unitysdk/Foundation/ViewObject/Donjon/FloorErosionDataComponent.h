#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/Donjon/DonjonFloorComponent_1.h"

#define FOUNDATION_VIEWOBJECT_DONJON_FLOOREROSIONDATACOMPONENT_GET_EROSIONID_OFFSET UNITYSDK_OFFSET(0x1271A420)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOOREROSIONDATACOMPONENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1271A490)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOOREROSIONDATACOMPONENT_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1271A440)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOOREROSIONDATACOMPONENT_SET_EROSIONID_OFFSET UNITYSDK_OFFSET(0x1271A430)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOOREROSIONDATACOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1271A6B0)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOOREROSIONDATACOMPONENT___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1271A6D0)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int FloorErosionDataComponent_TypeDefinitionIndex = 61864;

	class FloorErosionDataComponent : public ::Foundation::ViewObject::Donjon::DonjonFloorComponent_1<::Foundation::ViewObject::Donjon::FloorErosionDataComponent*>
	{
	public:
		::System::UInt32 _ErosionID_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOOREROSIONDATACOMPONENT__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ErosionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOOREROSIONDATACOMPONENT_GET_EROSIONID_OFFSET))(this);
		}

		::System::Void set_ErosionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOOREROSIONDATACOMPONENT_SET_EROSIONID_OFFSET))(this, value);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOOREROSIONDATACOMPONENT_ONRECYCLE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOOREROSIONDATACOMPONENT_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOOREROSIONDATACOMPONENT___BASE_ONENABLE_OFFSET))(this);
		}
	};
}

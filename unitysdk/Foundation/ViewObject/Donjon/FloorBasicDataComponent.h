#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/Donjon/DonjonFloorComponent_1.h"

namespace System { class String; }

#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICDATACOMPONENT_GET_GUIDESTRATEGYKEY_OFFSET UNITYSDK_OFFSET(0x113EDCB0)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICDATACOMPONENT_GET_TARGETMAINROBOTBUDDYID_OFFSET UNITYSDK_OFFSET(0x113EDCD0)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICDATACOMPONENT_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x113EDCF0)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICDATACOMPONENT_SET_GUIDESTRATEGYKEY_OFFSET UNITYSDK_OFFSET(0x113EDCC0)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICDATACOMPONENT_SET_TARGETMAINROBOTBUDDYID_OFFSET UNITYSDK_OFFSET(0x113EDCE0)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICDATACOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x113EDD40)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int FloorBasicDataComponent_TypeDefinitionIndex = 71968;

	class FloorBasicDataComponent : public ::Foundation::ViewObject::Donjon::DonjonFloorComponent_1<::Foundation::ViewObject::Donjon::FloorBasicDataComponent*>
	{
	public:
		::System::String* _GuideStrategyKey_k__BackingField; // 0x20
		::System::UInt32 _TargetMainRobotBuddyId_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICDATACOMPONENT__CTOR_OFFSET))(this);
		}

		::System::String* get_GuideStrategyKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICDATACOMPONENT_GET_GUIDESTRATEGYKEY_OFFSET))(this);
		}

		::System::Void set_GuideStrategyKey(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICDATACOMPONENT_SET_GUIDESTRATEGYKEY_OFFSET))(this, value);
		}

		::System::UInt32 get_TargetMainRobotBuddyId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICDATACOMPONENT_GET_TARGETMAINROBOTBUDDYID_OFFSET))(this);
		}

		::System::Void set_TargetMainRobotBuddyId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICDATACOMPONENT_SET_TARGETMAINROBOTBUDDYID_OFFSET))(this, value);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICDATACOMPONENT_ONRECYCLE_OFFSET))(this);
		}
	};
}

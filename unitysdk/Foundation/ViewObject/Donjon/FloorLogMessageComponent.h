#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/Donjon/DonjonFloorComponent_1.h"

namespace System { class String; }

#define FOUNDATION_VIEWOBJECT_DONJON_FLOORLOGMESSAGECOMPONENT_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x10837530)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORLOGMESSAGECOMPONENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10837550)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORLOGMESSAGECOMPONENT_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x10837590)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORLOGMESSAGECOMPONENT_SET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x10837540)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORLOGMESSAGECOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x108375E0)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORLOGMESSAGECOMPONENT___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10837600)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int FloorLogMessageComponent_TypeDefinitionIndex = 46303;

	class FloorLogMessageComponent : public ::Foundation::ViewObject::Donjon::DonjonFloorComponent_1<::Foundation::ViewObject::Donjon::FloorLogMessageComponent*>
	{
	public:
		::System::String* _Message_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORLOGMESSAGECOMPONENT__CTOR_OFFSET))(this);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORLOGMESSAGECOMPONENT_GET_MESSAGE_OFFSET))(this);
		}

		::System::Void set_Message(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORLOGMESSAGECOMPONENT_SET_MESSAGE_OFFSET))(this, value);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORLOGMESSAGECOMPONENT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORLOGMESSAGECOMPONENT_ONRECYCLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORLOGMESSAGECOMPONENT___BASE_ONENABLE_OFFSET))(this);
		}
	};
}

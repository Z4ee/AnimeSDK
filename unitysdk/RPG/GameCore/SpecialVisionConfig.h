#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PuppySearchPropData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SPECIALVISIONCONFIG_METHOD_2_CA78A002337EB670_OFFSET UNITYSDK_OFFSET(0x1D54BFC0)
#define RPG_GAMECORE_SPECIALVISIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D54C330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialVisionConfig_TypeDefinitionIndex = 17378;

	class SpecialVisionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* SpecialVisionTypeEffectMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* SpecialVisionCameraEffectMap; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* SpecialVisionOnSoundEventMap; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* SpecialVisionOffSoundEventMap; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* SpecialVisionStopSoundEventMap; // 0x30
		::System::String* SpecialVisionOnEvent; // 0x38
		::System::String* SpecialVisionCloseEvent; // 0x40
		::System::String* UIClickSpecialVisionOnEvent; // 0x48
		::RPG::GameCore::PuppySearchPropData* PuppySearchPropConfig; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALVISIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CA78A002337EB670(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SpecialVisionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpecialVisionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALVISIONCONFIG_METHOD_2_CA78A002337EB670_OFFSET))(a1, a2);
		}
	};
}

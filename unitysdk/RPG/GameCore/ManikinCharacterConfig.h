#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureCharacterMouthTalkType.h"
#include "unitysdk/RPG/GameCore/BodySize.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MANIKINCHARACTERCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BCDC720)
#define RPG_GAMECORE_MANIKINCHARACTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCDCCA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ManikinCharacterConfig_TypeDefinitionIndex = 16774;

	class ManikinCharacterConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsHero; // 0x10
		::RPG::GameCore::BodySize CharacterBodySize; // 0x14
		::System::String* FreeStyleCharacterID; // 0x18
		::System::String* FreeStyleCharacterConfigPath; // 0x20
		::System::String* TalkEmotionAssetPath; // 0x28
		::Il2CppArray<::System::String*>* AnimEventConfigList; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::MVector3>* PositionsByName; // 0x38
		::System::Boolean EnableIdleShow; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::MVector3>* RotationsByIndex; // 0x48
		::RPG::MVector3 EidolonPosition; // 0x50
		::RPG::GameCore::AdventureCharacterMouthTalkType MouthTalkType; // 0x5C
		::System::String* ResidentEffectKey; // 0x60
		::System::String* ResidentPossessionKey; // 0x68
		::System::String* CharacterReplaceMaterialConfigPath; // 0x70
		::System::String* DressVCameraPath; // 0x78
		::System::UInt32 DressVCameraBlendID; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANIKINCHARACTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ManikinCharacterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ManikinCharacterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANIKINCHARACTERCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

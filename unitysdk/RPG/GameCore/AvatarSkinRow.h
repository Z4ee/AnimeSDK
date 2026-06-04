#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarSkinType.h"
#include "unitysdk/RPG/GameCore/PersonalizeShowType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AVATARSKINROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x194B2A40)
#define RPG_GAMECORE_AVATARSKINROW__CTOR_OFFSET UNITYSDK_OFFSET(0x194B3A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarSkinRow_TypeDefinitionIndex = 12103;

	class AvatarSkinRow : public ::System::Object
	{
	public:
		::System::String* ActionAvatarHeadIconPath; // 0x10
		::Il2CppArray<::System::Single>* AssistOffset; // 0x18
		::System::String* UIAvatarModelPath; // 0x20
		::System::String* DressIconPath; // 0x28
		::System::String* GachaResultImgPath; // 0x30
		::System::String* AvatarSideIconPath; // 0x38
		::System::String* SkinConfigPath; // 0x40
		::System::String* DefaultAvatarHeadIconPath; // 0x48
		::System::String* AvatarMiniIconPath; // 0x50
		::System::String* FreeStyleCharacterID; // 0x58
		::System::String* AdventureDefaultAvatarHeadIconPath; // 0x60
		::System::String* ShopBgPath; // 0x68
		::Il2CppArray<::System::Single>* AvatarSelfShowOffset; // 0x70
		::Il2CppArray<::System::Single>* AvatarDropOffset; // 0x78
		::System::String* UltraSkillCutInPrefabPath; // 0x80
		::System::String* AdventureCharacterConfigOverrideJsonPath; // 0x88
		::System::String* SideAvatarHeadIconPath; // 0x90
		::System::String* PlayerPrefabPath; // 0x98
		::System::String* AvatarCutinBgImgPath; // 0xA0
		::System::String* ShopRecommendTabBgPath; // 0xA8
		::System::String* AudioEventTag; // 0xB0
		::System::String* AvatarCutinImgPath; // 0xB8
		::System::String* DefaultAvatarModelPath; // 0xC0
		::System::String* AvatarCutinFrontImgPath; // 0xC8
		::System::String* WaitingAvatarHeadIconPath; // 0xD0
		::RPG::Client::TextID AvatarSkinSynopsis; // 0xD8
		::System::UInt32 ID; // 0xE8
		::RPG::GameCore::PersonalizeShowType ShowType; // 0xEC
		::RPG::Client::TextID ActivitySkinName; // 0xF0
		::RPG::GameCore::AvatarSkinType Type; // 0x100
		::System::UInt32 IntroDataID; // 0x104
		::System::UInt32 ActivityIntroDataID; // 0x108
		::System::UInt32 PlayerCardID; // 0x10C
		::System::UInt32 AvatarID; // 0x110
		::System::UInt32 ShowParam; // 0x114
		::System::UInt32 VideoID; // 0x118
		::System::UInt32 PanelID; // 0x11C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKINROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarSkinRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarSkinRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKINROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarSkinType.h"
#include "unitysdk/RPG/GameCore/PersonalizeShowType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AVATARSKINROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FBB9D0)
#define RPG_GAMECORE_AVATARSKINROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16FBCB20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarSkinRow_TypeDefinitionIndex = 11599;

	class AvatarSkinRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* AvatarSelfShowOffset; // 0x10
		::Il2CppArray<::System::Single>* AvatarDropOffset; // 0x18
		::System::String* AvatarCutinBgImgPath; // 0x20
		::System::String* AdventureCharacterConfigOverrideJsonPath; // 0x28
		::System::String* AdventureDefaultAvatarHeadIconPath; // 0x30
		::System::String* DefaultAvatarHeadIconPath; // 0x38
		::System::String* SkinConfigPath; // 0x40
		::System::String* AvatarMiniIconPath; // 0x48
		::System::String* PlayerPrefabPath; // 0x50
		::System::String* AvatarCutinFrontImgPath; // 0x58
		::System::String* DefaultAvatarModelPath; // 0x60
		::System::String* AvatarSideIconPath; // 0x68
		::System::String* WaitingAvatarHeadIconPath; // 0x70
		::Il2CppArray<::System::Single>* AssistOffset; // 0x78
		::System::String* SideAvatarHeadIconPath; // 0x80
		::System::String* ActionAvatarHeadIconPath; // 0x88
		::System::String* UltraSkillCutInPrefabPath; // 0x90
		::System::String* UIAvatarModelPath; // 0x98
		::System::String* ShopBgPath; // 0xA0
		::System::String* FreeStyleCharacterID; // 0xA8
		::System::String* AvatarCutinImgPath; // 0xB0
		::System::String* ShopRecommendTabBgPath; // 0xB8
		::System::String* DressIconPath; // 0xC0
		::System::String* AudioEventTag; // 0xC8
		::RPG::Client::TextID AvatarNameOnDropSkin; // 0xD0
		::System::UInt32 ShowParam; // 0xE0
		::System::UInt32 ID; // 0xE4
		::System::UInt32 PanelID; // 0xE8
		::RPG::GameCore::PersonalizeShowType ShowType; // 0xEC
		::RPG::Client::TextID AvatarSkinSynopsis; // 0xF0
		::RPG::Client::TextID AvatarSkinName; // 0x100
		::System::UInt32 IntroDataID; // 0x110
		::RPG::Client::TextID AvatarSkinStory; // 0x118
		::RPG::Client::TextID PlayerCardTitleText; // 0x128
		::System::UInt32 PlayerCardID; // 0x138
		::System::UInt32 VideoID; // 0x13C
		::RPG::GameCore::AvatarSkinType Type; // 0x140
		::System::UInt32 AvatarID; // 0x144

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKINROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AvatarSkinRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarSkinRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKINROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

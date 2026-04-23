#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUENOUSDICEBRANCHROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D4AE90)
#define RPG_GAMECORE_ROGUENOUSDICEBRANCHROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D4BB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousDiceBranchRow_TypeDefinitionIndex = 14104;

	class RogueNousDiceBranchRow : public ::System::Object
	{
	public:
		::System::String* SoundRoll; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamValue3; // 0x18
		::Il2CppArray<::System::UInt32>* RecommendSurfaceList; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamValue2; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamValue1; // 0x30
		::System::String* SoundSuspensionStop; // 0x38
		::Il2CppArray<::System::UInt32>* SuggestiveSurfaceList; // 0x40
		::System::String* DiceIcon; // 0x48
		::System::String* BranchIcon; // 0x50
		::System::String* BranchPrefab; // 0x58
		::Il2CppArray<::System::UInt32>* DefaultCommonSurfaceList; // 0x60
		::System::String* BranchEditCorePrefab; // 0x68
		::Il2CppArray<::System::UInt32>* EffectExtraDesc; // 0x70
		::System::String* SoundReRoll; // 0x78
		::Il2CppArray<::System::UInt32>* ExtraDesc; // 0x80
		::System::String* SoundSuspensionStart; // 0x88
		::System::String* BranchCorePrefab; // 0x90
		::System::String* DiceLightColor; // 0x98
		::Il2CppArray<::System::UInt32>* PassiveEffectExtraDesc; // 0xA0
		::RPG::Client::TextID EffectDescParam1; // 0xA8
		::System::UInt32 BranchTag; // 0xB8
		::System::UInt32 UnlockID; // 0xBC
		::RPG::Client::TextID BranchName; // 0xC0
		::System::UInt32 BranchID; // 0xD0
		::System::UInt32 DefaultUltraSurface; // 0xD4
		::RPG::Client::TextID EffectDescParam3; // 0xD8
		::RPG::Client::TextID EffectDescParam2; // 0xE8
		::RPG::Client::TextID StartingEffectDescToast; // 0xF8
		::RPG::Client::TextID BranchIntroduction; // 0x108
		::RPG::Client::TextID EffectDesc; // 0x118
		::RPG::Client::TextID PassiveEffectDesc; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICEBRANCHROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueNousDiceBranchRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueNousDiceBranchRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICEBRANCHROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

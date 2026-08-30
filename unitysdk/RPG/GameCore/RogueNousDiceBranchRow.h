#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUENOUSDICEBRANCHROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E538DD0)
#define RPG_GAMECORE_ROGUENOUSDICEBRANCHROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E539A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousDiceBranchRow_TypeDefinitionIndex = 14734;

	class RogueNousDiceBranchRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamValue1; // 0x10
		::System::String* BranchCorePrefab; // 0x18
		::System::String* SoundSuspensionStop; // 0x20
		::Il2CppArray<::System::UInt32>* EffectExtraDesc; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamValue3; // 0x30
		::Il2CppArray<::System::UInt32>* SuggestiveSurfaceList; // 0x38
		::System::String* SoundRoll; // 0x40
		::System::String* DiceIcon; // 0x48
		::Il2CppArray<::System::UInt32>* RecommendSurfaceList; // 0x50
		::System::String* BranchEditCorePrefab; // 0x58
		::System::String* BranchPrefab; // 0x60
		::Il2CppArray<::System::UInt32>* PassiveEffectExtraDesc; // 0x68
		::System::String* BranchIcon; // 0x70
		::Il2CppArray<::System::UInt32>* DefaultCommonSurfaceList; // 0x78
		::System::String* SoundReRoll; // 0x80
		::System::String* SoundSuspensionStart; // 0x88
		::System::String* DiceLightColor; // 0x90
		::Il2CppArray<::System::UInt32>* ExtraDesc; // 0x98
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamValue2; // 0xA0
		::RPG::Client::TextID EffectDesc; // 0xA8
		::RPG::Client::TextID PassiveEffectDesc; // 0xB8
		::RPG::Client::TextID BranchIntroduction; // 0xC8
		::System::UInt32 DefaultUltraSurface; // 0xD8
		::System::UInt32 UnlockID; // 0xDC
		::RPG::Client::TextID BranchName; // 0xE0
		::RPG::Client::TextID EffectDescParam2; // 0xF0
		::RPG::Client::TextID EffectDescParam3; // 0x100
		::RPG::Client::TextID EffectDescParam1; // 0x110
		::System::UInt32 BranchID; // 0x120
		::System::UInt32 BranchTag; // 0x124
		::RPG::Client::TextID StartingEffectDescToast; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICEBRANCHROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueNousDiceBranchRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueNousDiceBranchRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICEBRANCHROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

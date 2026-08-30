#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AetherPassiveSkillType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AETHERDIVIDEPASSIVESKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CE010D0)
#define RPG_GAMECORE_AETHERDIVIDEPASSIVESKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE01930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDividePassiveSkillRow_TypeDefinitionIndex = 10894;

	class AetherDividePassiveSkillRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* SimpleParamList; // 0x10
		::Il2CppArray<::System::UInt32>* ExtraEffectIDList; // 0x18
		::System::String* ItemDescription; // 0x20
		::System::String* AbilityName; // 0x28
		::System::String* PassiveSkillDescription; // 0x30
		::System::String* PassiveSkillName; // 0x38
		::Il2CppArray<::System::UInt32>* SimpleExtraEffectIDList; // 0x40
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x48
		::System::UInt32 Rarity; // 0x50
		::RPG::GameCore::AetherPassiveSkillType PassiveSkillType; // 0x54
		::System::UInt32 ItemID; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEPASSIVESKILLROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AetherDividePassiveSkillRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AetherDividePassiveSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEPASSIVESKILLROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

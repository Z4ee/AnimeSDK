#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BattleTargetConfigType.h"
#include "unitysdk/RPG/GameCore/BattleTargetIconType.h"
#include "unitysdk/RPG/GameCore/ParamType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BATTLETARGETCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x194D9820)
#define RPG_GAMECORE_BATTLETARGETCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x194DA2B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleTargetConfigRow_TypeDefinitionIndex = 12231;

	class BattleTargetConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::BattleTargetIconType>* MultiTargetIconType; // 0x10
		::Il2CppArray<::System::UInt32>* HintStep; // 0x18
		::System::String* AbilityName; // 0x20
		::Il2CppArray<::System::UInt32>* MultiTarget; // 0x28
		::RPG::Client::TextID TargetName; // 0x30
		::RPG::GameCore::BattleTargetIconType IconType; // 0x40
		::RPG::GameCore::ParamType ParamType; // 0x44
		::System::UInt32 TargetParam; // 0x48
		::System::UInt32 IsShowProgress; // 0x4C
		::RPG::GameCore::BattleTargetConfigType Type; // 0x50
		::System::Boolean ShowInScoreCounter; // 0x54
		::System::Boolean IsFixableHeight; // 0x55
		::System::Boolean SkipWhenSuccessOnEnterBattle; // 0x56
		::RPG::Client::TextID TargetNameSimple; // 0x58
		::System::UInt32 ID; // 0x68
		::System::UInt32 IconNum; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLETARGETCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleTargetConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleTargetConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLETARGETCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

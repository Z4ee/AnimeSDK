#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BattleTargetConfigType.h"
#include "unitysdk/RPG/GameCore/BattleTargetIconType.h"
#include "unitysdk/RPG/GameCore/ParamType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BATTLETARGETCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B3075F0)
#define RPG_GAMECORE_BATTLETARGETCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B308080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleTargetConfigRow_TypeDefinitionIndex = 12754;

	class BattleTargetConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::BattleTargetIconType>* MultiTargetIconType; // 0x10
		::System::String* AbilityName; // 0x18
		::Il2CppArray<::System::UInt32>* MultiTarget; // 0x20
		::Il2CppArray<::System::UInt32>* HintStep; // 0x28
		::RPG::GameCore::BattleTargetConfigType Type; // 0x30
		::System::UInt32 IsShowProgress; // 0x34
		::RPG::Client::TextID TargetNameSimple; // 0x38
		::RPG::GameCore::BattleTargetIconType IconType; // 0x48
		::RPG::GameCore::ParamType ParamType; // 0x4C
		::System::UInt32 TargetParam; // 0x50
		::System::UInt32 ID; // 0x54
		::RPG::Client::TextID TargetName; // 0x58
		::System::Boolean ShowInScoreCounter; // 0x68
		::System::Boolean SkipWhenSuccessOnEnterBattle; // 0x69
		::System::Boolean IsFixableHeight; // 0x6A
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

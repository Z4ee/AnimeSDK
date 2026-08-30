#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MECHANISMBAREFFECTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D267100)
#define RPG_GAMECORE_MECHANISMBAREFFECTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2673B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MechanismBarEffectConfigRow_TypeDefinitionIndex = 14016;

	class MechanismBarEffectConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* BattleEnemyAbilityList; // 0x10
		::System::String* MazeLevelGraph; // 0x18
		::Il2CppArray<::System::UInt32>* MazeBuffList; // 0x20
		::Il2CppArray<::System::String*>* BattlePlayerAbilityList; // 0x28
		::System::UInt32 Phase; // 0x30
		::System::UInt32 ValueThresh; // 0x34
		::System::UInt32 ID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MECHANISMBAREFFECTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MechanismBarEffectConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MechanismBarEffectConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MECHANISMBAREFFECTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

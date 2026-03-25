#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LINEUPGRIDFIGHTTRAITPARAM_METHOD_2_17EECF92366FA05B_OFFSET UNITYSDK_OFFSET(0x17352F70)
#define RPG_GAMECORE_LINEUPGRIDFIGHTTRAITPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x17353100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LineupGridFightTraitParam_TypeDefinitionIndex = 16637;

	class LineupGridFightTraitParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 TraitID; // 0x10
		::System::UInt32 CrossBattleCounter; // 0x14
		::Il2CppArray<::System::UInt32>* TraitEnhanceList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPGRIDFIGHTTRAITPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_17EECF92366FA05B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LineupGridFightTraitParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LineupGridFightTraitParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPGRIDFIGHTTRAITPARAM_METHOD_2_17EECF92366FA05B_OFFSET))(a1, a2);
		}
	};
}

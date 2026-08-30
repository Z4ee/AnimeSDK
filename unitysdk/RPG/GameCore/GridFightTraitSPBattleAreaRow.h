#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTTRAITSPBATTLEAREAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3BFE30)
#define RPG_GAMECORE_GRIDFIGHTTRAITSPBATTLEAREAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BFFB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitSPBattleAreaRow_TypeDefinitionIndex = 13575;

	class GridFightTraitSPBattleAreaRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BattleAreaNumList; // 0x10
		::System::UInt32 TraitLayer; // 0x18
		::System::UInt32 ID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITSPBATTLEAREAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightTraitSPBattleAreaRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightTraitSPBattleAreaRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITSPBATTLEAREAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

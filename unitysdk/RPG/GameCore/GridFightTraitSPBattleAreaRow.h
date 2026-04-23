#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTTRAITSPBATTLEAREAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189DE150)
#define RPG_GAMECORE_GRIDFIGHTTRAITSPBATTLEAREAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189DE2E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitSPBattleAreaRow_TypeDefinitionIndex = 12952;

	class GridFightTraitSPBattleAreaRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BattleAreaNumList; // 0x10
		::System::UInt32 ID; // 0x18
		::System::UInt32 TraitLayer; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITSPBATTLEAREAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightTraitSPBattleAreaRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightTraitSPBattleAreaRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITSPBATTLEAREAROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

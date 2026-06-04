#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitBonusAddType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTTRAITBONUSADDRULECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1980F360)
#define RPG_GAMECORE_GRIDFIGHTTRAITBONUSADDRULECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1980F4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitBonusAddRuleConfigRow_TypeDefinitionIndex = 13032;

	class GridFightTraitBonusAddRuleConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::RPG::GameCore::GridFightTraitBonusAddType TraitBonusType; // 0x18
		::System::UInt32 ID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITBONUSADDRULECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightTraitBonusAddRuleConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightTraitBonusAddRuleConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITBONUSADDRULECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

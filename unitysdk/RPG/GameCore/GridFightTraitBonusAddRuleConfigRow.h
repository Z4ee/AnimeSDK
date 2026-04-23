#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitBonusAddType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTTRAITBONUSADDRULECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189DC410)
#define RPG_GAMECORE_GRIDFIGHTTRAITBONUSADDRULECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189DC5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitBonusAddRuleConfigRow_TypeDefinitionIndex = 12948;

	class GridFightTraitBonusAddRuleConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::System::UInt32 ID; // 0x18
		::RPG::GameCore::GridFightTraitBonusAddType TraitBonusType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITBONUSADDRULECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightTraitBonusAddRuleConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightTraitBonusAddRuleConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITBONUSADDRULECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYDICERULEGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1860A3C0)
#define RPG_GAMECORE_ACTIVITYDICERULEGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1860A510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityDiceRuleGroupRow_TypeDefinitionIndex = 10776;

	class ActivityDiceRuleGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RuleList; // 0x10
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICERULEGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityDiceRuleGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityDiceRuleGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICERULEGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

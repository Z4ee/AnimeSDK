#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCMonsterCheckState.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPARENPCMONSTERCHECKSTATE_METHOD_4_048F7EA13D1E5858_OFFSET UNITYSDK_OFFSET(0x18734DE0)
#define RPG_GAMECORE_BYCOMPARENPCMONSTERCHECKSTATE_METHOD_4_412BD1226521B569_OFFSET UNITYSDK_OFFSET(0x18734D10)
#define RPG_GAMECORE_BYCOMPARENPCMONSTERCHECKSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18734D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareNPCMonsterCheckState_TypeDefinitionIndex = 20420;

	class ByCompareNPCMonsterCheckState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x20
		::RPG::GameCore::DynamicFloat* GroupMonsterID; // 0x28
		::System::String* UniqueName; // 0x30
		::RPG::GameCore::NPCMonsterCheckState CheckState; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENPCMONSTERCHECKSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_412BD1226521B569(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareNPCMonsterCheckState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareNPCMonsterCheckState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENPCMONSTERCHECKSTATE_METHOD_4_412BD1226521B569_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_048F7EA13D1E5858(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareNPCMonsterCheckState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareNPCMonsterCheckState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENPCMONSTERCHECKSTATE_METHOD_4_048F7EA13D1E5858_OFFSET))(a1, a2);
		}
	};
}

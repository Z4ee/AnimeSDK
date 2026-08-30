#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASINSERTABILITYEXECUTINGDURINGGAMEMODEPAUSE_METHOD_4_0556FB87F5A04D5D_OFFSET UNITYSDK_OFFSET(0x1BBDE880)
#define RPG_GAMECORE_BYHASINSERTABILITYEXECUTINGDURINGGAMEMODEPAUSE_METHOD_4_1E1F8C666E62A2AA_OFFSET UNITYSDK_OFFSET(0x1BBDE9F0)
#define RPG_GAMECORE_BYHASINSERTABILITYEXECUTINGDURINGGAMEMODEPAUSE_METHOD_4_808C74966782A85E_OFFSET UNITYSDK_OFFSET(0x1BBDE840)
#define RPG_GAMECORE_BYHASINSERTABILITYEXECUTINGDURINGGAMEMODEPAUSE_METHOD_4_E38DE6B41912F457_OFFSET UNITYSDK_OFFSET(0x1BBDE9C0)
#define RPG_GAMECORE_BYHASINSERTABILITYEXECUTINGDURINGGAMEMODEPAUSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBDE870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasInsertAbilityExecutingDuringGameModePause_TypeDefinitionIndex = 23268;

	class ByHasInsertAbilityExecutingDuringGameModePause : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTABILITYEXECUTINGDURINGGAMEMODEPAUSE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_808C74966782A85E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasInsertAbilityExecutingDuringGameModePause*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasInsertAbilityExecutingDuringGameModePause*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTABILITYEXECUTINGDURINGGAMEMODEPAUSE_METHOD_4_808C74966782A85E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0556FB87F5A04D5D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasInsertAbilityExecutingDuringGameModePause* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasInsertAbilityExecutingDuringGameModePause*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTABILITYEXECUTINGDURINGGAMEMODEPAUSE_METHOD_4_0556FB87F5A04D5D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E38DE6B41912F457(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasInsertAbilityExecutingDuringGameModePause*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasInsertAbilityExecutingDuringGameModePause*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTABILITYEXECUTINGDURINGGAMEMODEPAUSE_METHOD_4_E38DE6B41912F457_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1E1F8C666E62A2AA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasInsertAbilityExecutingDuringGameModePause* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasInsertAbilityExecutingDuringGameModePause*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTABILITYEXECUTINGDURINGGAMEMODEPAUSE_METHOD_4_1E1F8C666E62A2AA_OFFSET))(a1, a2);
		}
	};
}

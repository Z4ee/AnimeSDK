#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYISENTITYACTIONSTATE_METHOD_4_6F9ADF696BEE7F9F_OFFSET UNITYSDK_OFFSET(0x1702D610)
#define RPG_GAMECORE_BYISENTITYACTIONSTATE_METHOD_4_E599C808F1EF0FC1_OFFSET UNITYSDK_OFFSET(0x1702D540)
#define RPG_GAMECORE_BYISENTITYACTIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1702D5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsEntityActionState_TypeDefinitionIndex = 21271;

	class ByIsEntityActionState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENTITYACTIONSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E599C808F1EF0FC1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsEntityActionState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsEntityActionState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENTITYACTIONSTATE_METHOD_4_E599C808F1EF0FC1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6F9ADF696BEE7F9F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsEntityActionState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsEntityActionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENTITYACTIONSTATE_METHOD_4_6F9ADF696BEE7F9F_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MATCH3_APPLYCHESSBOARDTEMPLATERULEACTION_METHOD_5_2461F01E04B7274A_OFFSET UNITYSDK_OFFSET(0x198DFB90)
#define RPG_GAMECORE_MATCH3_APPLYCHESSBOARDTEMPLATERULEACTION_METHOD_5_65F7A4CF77CC63CC_OFFSET UNITYSDK_OFFSET(0x198DFA70)
#define RPG_GAMECORE_MATCH3_APPLYCHESSBOARDTEMPLATERULEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x198DFB20)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int ApplyChessBoardTemplateRuleAction_TypeDefinitionIndex = 23540;

	class ApplyChessBoardTemplateRuleAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::String* Mode; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_APPLYCHESSBOARDTEMPLATERULEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_65F7A4CF77CC63CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ApplyChessBoardTemplateRuleAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ApplyChessBoardTemplateRuleAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_APPLYCHESSBOARDTEMPLATERULEACTION_METHOD_5_65F7A4CF77CC63CC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_2461F01E04B7274A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ApplyChessBoardTemplateRuleAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ApplyChessBoardTemplateRuleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_APPLYCHESSBOARDTEMPLATERULEACTION_METHOD_5_2461F01E04B7274A_OFFSET))(a1, a2);
		}
	};
}

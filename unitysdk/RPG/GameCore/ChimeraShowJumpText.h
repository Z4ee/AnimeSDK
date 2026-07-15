#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraBattleTargetEvaluator; }

#define RPG_GAMECORE_CHIMERASHOWJUMPTEXT_METHOD_3_13EDD82A4752B58B_OFFSET UNITYSDK_OFFSET(0x1C24C5C0)
#define RPG_GAMECORE_CHIMERASHOWJUMPTEXT_METHOD_3_48226B2D0DA22DE9_OFFSET UNITYSDK_OFFSET(0x1C24C560)
#define RPG_GAMECORE_CHIMERASHOWJUMPTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C24C5B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraShowJumpText_TypeDefinitionIndex = 15260;

	class ChimeraShowJumpText : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::RPG::GameCore::ChimeraBattleTargetEvaluator* Target; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERASHOWJUMPTEXT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_48226B2D0DA22DE9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraShowJumpText*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraShowJumpText*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERASHOWJUMPTEXT_METHOD_3_48226B2D0DA22DE9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_13EDD82A4752B58B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraShowJumpText* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraShowJumpText*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERASHOWJUMPTEXT_METHOD_3_13EDD82A4752B58B_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_FIVEDIMSWITCHMATERIALACTION_METHOD_4_132220645681AC59_OFFSET UNITYSDK_OFFSET(0x1D6B2D30)
#define RPG_GAMECORE_FIVEDIMSWITCHMATERIALACTION_METHOD_4_8F355B2E33B8571C_OFFSET UNITYSDK_OFFSET(0x1D6B2E10)
#define RPG_GAMECORE_FIVEDIMSWITCHMATERIALACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B2E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSwitchMaterialAction_TypeDefinitionIndex = 18762;

	class FiveDimSwitchMaterialAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::DynamicFloat* MaterialID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSWITCHMATERIALACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_132220645681AC59(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSwitchMaterialAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSwitchMaterialAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSWITCHMATERIALACTION_METHOD_4_132220645681AC59_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8F355B2E33B8571C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSwitchMaterialAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSwitchMaterialAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSWITCHMATERIALACTION_METHOD_4_8F355B2E33B8571C_OFFSET))(a1, a2);
		}
	};
}

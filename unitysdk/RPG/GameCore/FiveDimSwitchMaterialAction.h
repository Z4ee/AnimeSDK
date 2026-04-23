#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_FIVEDIMSWITCHMATERIALACTION_METHOD_3_B6DF56A91BA61439_OFFSET UNITYSDK_OFFSET(0x18921CA0)
#define RPG_GAMECORE_FIVEDIMSWITCHMATERIALACTION_METHOD_3_C508B12D60470FB3_OFFSET UNITYSDK_OFFSET(0x18921B80)
#define RPG_GAMECORE_FIVEDIMSWITCHMATERIALACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18921C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSwitchMaterialAction_TypeDefinitionIndex = 17825;

	class FiveDimSwitchMaterialAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::DynamicFloat* MaterialID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSWITCHMATERIALACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C508B12D60470FB3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSwitchMaterialAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSwitchMaterialAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSWITCHMATERIALACTION_METHOD_3_C508B12D60470FB3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B6DF56A91BA61439(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSwitchMaterialAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSwitchMaterialAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSWITCHMATERIALACTION_METHOD_3_B6DF56A91BA61439_OFFSET))(a1, a2);
		}
	};
}

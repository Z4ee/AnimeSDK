#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMEVILSMILEDIEACTION_METHOD_3_365B0954266A1D37_OFFSET UNITYSDK_OFFSET(0x1973BE70)
#define RPG_GAMECORE_FIVEDIMEVILSMILEDIEACTION_METHOD_3_8585A33CA65CF3AE_OFFSET UNITYSDK_OFFSET(0x1972EA60)
#define RPG_GAMECORE_FIVEDIMEVILSMILEDIEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1972EA40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEvilSmileDieAction_TypeDefinitionIndex = 17877;

	class FiveDimEvilSmileDieAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILEDIEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_365B0954266A1D37(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEvilSmileDieAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEvilSmileDieAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILEDIEACTION_METHOD_3_365B0954266A1D37_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8585A33CA65CF3AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEvilSmileDieAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEvilSmileDieAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILEDIEACTION_METHOD_3_8585A33CA65CF3AE_OFFSET))(a1, a2);
		}
	};
}

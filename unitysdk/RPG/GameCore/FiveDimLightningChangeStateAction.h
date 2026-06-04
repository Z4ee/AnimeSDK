#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
#include "unitysdk/RPG/GameCore/FiveDimLightningStateType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMLIGHTNINGCHANGESTATEACTION_METHOD_3_3480EC9A2A19A379_OFFSET UNITYSDK_OFFSET(0x1972FC90)
#define RPG_GAMECORE_FIVEDIMLIGHTNINGCHANGESTATEACTION_METHOD_3_587F683E7DA9B7D4_OFFSET UNITYSDK_OFFSET(0x19745C40)
#define RPG_GAMECORE_FIVEDIMLIGHTNINGCHANGESTATEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1972FC70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimLightningChangeStateAction_TypeDefinitionIndex = 17873;

	class FiveDimLightningChangeStateAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::FiveDimLightningStateType LightningState; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLIGHTNINGCHANGESTATEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_587F683E7DA9B7D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimLightningChangeStateAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimLightningChangeStateAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLIGHTNINGCHANGESTATEACTION_METHOD_3_587F683E7DA9B7D4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3480EC9A2A19A379(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimLightningChangeStateAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimLightningChangeStateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLIGHTNINGCHANGESTATEACTION_METHOD_3_3480EC9A2A19A379_OFFSET))(a1, a2);
		}
	};
}

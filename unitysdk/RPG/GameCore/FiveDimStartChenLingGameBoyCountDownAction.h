#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSTARTCHENLINGGAMEBOYCOUNTDOWNACTION_METHOD_3_0EA0FB00F98AE69F_OFFSET UNITYSDK_OFFSET(0x1720D570)
#define RPG_GAMECORE_FIVEDIMSTARTCHENLINGGAMEBOYCOUNTDOWNACTION_METHOD_3_FCB6621F07073A92_OFFSET UNITYSDK_OFFSET(0x1720D4B0)
#define RPG_GAMECORE_FIVEDIMSTARTCHENLINGGAMEBOYCOUNTDOWNACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1720D550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStartChenLingGameBoyCountDownAction_TypeDefinitionIndex = 17141;

	class FiveDimStartChenLingGameBoyCountDownAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTCHENLINGGAMEBOYCOUNTDOWNACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FCB6621F07073A92(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStartChenLingGameBoyCountDownAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStartChenLingGameBoyCountDownAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTCHENLINGGAMEBOYCOUNTDOWNACTION_METHOD_3_FCB6621F07073A92_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0EA0FB00F98AE69F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStartChenLingGameBoyCountDownAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStartChenLingGameBoyCountDownAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTCHENLINGGAMEBOYCOUNTDOWNACTION_METHOD_3_0EA0FB00F98AE69F_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSWITCHSPLINEMOVEDIRECTIONACTION_METHOD_3_5789F3D95E44074D_OFFSET UNITYSDK_OFFSET(0x1DCA84B0)
#define RPG_GAMECORE_FIVEDIMSWITCHSPLINEMOVEDIRECTIONACTION_METHOD_3_9974476792CE0EE8_OFFSET UNITYSDK_OFFSET(0x1DCA8430)
#define RPG_GAMECORE_FIVEDIMSWITCHSPLINEMOVEDIRECTIONACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA84A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSwitchSplineMoveDirectionAction_TypeDefinitionIndex = 18451;

	class FiveDimSwitchSplineMoveDirectionAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSWITCHSPLINEMOVEDIRECTIONACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9974476792CE0EE8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSwitchSplineMoveDirectionAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSwitchSplineMoveDirectionAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSWITCHSPLINEMOVEDIRECTIONACTION_METHOD_3_9974476792CE0EE8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5789F3D95E44074D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSwitchSplineMoveDirectionAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSwitchSplineMoveDirectionAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSWITCHSPLINEMOVEDIRECTIONACTION_METHOD_3_5789F3D95E44074D_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMTRYMUTEPLAYERMOVEONSURFACEDESTROYACTION_METHOD_4_8C4DEF9AFD8A998A_OFFSET UNITYSDK_OFFSET(0x1D6E2300)
#define RPG_GAMECORE_FIVEDIMTRYMUTEPLAYERMOVEONSURFACEDESTROYACTION_METHOD_4_E46E6F9C6EE35EEB_OFFSET UNITYSDK_OFFSET(0x1D6E2380)
#define RPG_GAMECORE_FIVEDIMTRYMUTEPLAYERMOVEONSURFACEDESTROYACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E2370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimTryMutePlayerMoveOnSurfaceDestroyAction_TypeDefinitionIndex = 18679;

	class FiveDimTryMutePlayerMoveOnSurfaceDestroyAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRYMUTEPLAYERMOVEONSURFACEDESTROYACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8C4DEF9AFD8A998A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTryMutePlayerMoveOnSurfaceDestroyAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTryMutePlayerMoveOnSurfaceDestroyAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRYMUTEPLAYERMOVEONSURFACEDESTROYACTION_METHOD_4_8C4DEF9AFD8A998A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E46E6F9C6EE35EEB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTryMutePlayerMoveOnSurfaceDestroyAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTryMutePlayerMoveOnSurfaceDestroyAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRYMUTEPLAYERMOVEONSURFACEDESTROYACTION_METHOD_4_E46E6F9C6EE35EEB_OFFSET))(a1, a2);
		}
	};
}

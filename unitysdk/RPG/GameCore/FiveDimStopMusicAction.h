#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSTOPMUSICACTION_METHOD_4_22D072AA796E7A98_OFFSET UNITYSDK_OFFSET(0x1D6B1750)
#define RPG_GAMECORE_FIVEDIMSTOPMUSICACTION_METHOD_4_319EA6FC45C21AFD_OFFSET UNITYSDK_OFFSET(0x1D6B16D0)
#define RPG_GAMECORE_FIVEDIMSTOPMUSICACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B1740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStopMusicAction_TypeDefinitionIndex = 18699;

	class FiveDimStopMusicAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPMUSICACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_319EA6FC45C21AFD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStopMusicAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStopMusicAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPMUSICACTION_METHOD_4_319EA6FC45C21AFD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_22D072AA796E7A98(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStopMusicAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStopMusicAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPMUSICACTION_METHOD_4_22D072AA796E7A98_OFFSET))(a1, a2);
		}
	};
}

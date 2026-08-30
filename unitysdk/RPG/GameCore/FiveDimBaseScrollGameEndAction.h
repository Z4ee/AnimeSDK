#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMBASESCROLLGAMEENDACTION_METHOD_3_25BB06C441D9AB5E_OFFSET UNITYSDK_OFFSET(0x1D0A43F0)
#define RPG_GAMECORE_FIVEDIMBASESCROLLGAMEENDACTION_METHOD_3_EF2FA5A106B0E3CF_OFFSET UNITYSDK_OFFSET(0x1D0A4470)
#define RPG_GAMECORE_FIVEDIMBASESCROLLGAMEENDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0A4460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimBaseScrollGameEndAction_TypeDefinitionIndex = 18551;

	class FiveDimBaseScrollGameEndAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBASESCROLLGAMEENDACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_25BB06C441D9AB5E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimBaseScrollGameEndAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimBaseScrollGameEndAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBASESCROLLGAMEENDACTION_METHOD_3_25BB06C441D9AB5E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EF2FA5A106B0E3CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimBaseScrollGameEndAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimBaseScrollGameEndAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBASESCROLLGAMEENDACTION_METHOD_3_EF2FA5A106B0E3CF_OFFSET))(a1, a2);
		}
	};
}

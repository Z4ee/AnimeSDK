#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMDESTROYMASCOTFAKEPLAYERACTION_METHOD_4_85DE49992CAC9B4A_OFFSET UNITYSDK_OFFSET(0x1D68B0F0)
#define RPG_GAMECORE_FIVEDIMDESTROYMASCOTFAKEPLAYERACTION_METHOD_4_FD2A3CBF051741AB_OFFSET UNITYSDK_OFFSET(0x1D68B070)
#define RPG_GAMECORE_FIVEDIMDESTROYMASCOTFAKEPLAYERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D68B0E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDestroyMascotFakePlayerAction_TypeDefinitionIndex = 18678;

	class FiveDimDestroyMascotFakePlayerAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTROYMASCOTFAKEPLAYERACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FD2A3CBF051741AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDestroyMascotFakePlayerAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDestroyMascotFakePlayerAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTROYMASCOTFAKEPLAYERACTION_METHOD_4_FD2A3CBF051741AB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_85DE49992CAC9B4A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDestroyMascotFakePlayerAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDestroyMascotFakePlayerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTROYMASCOTFAKEPLAYERACTION_METHOD_4_85DE49992CAC9B4A_OFFSET))(a1, a2);
		}
	};
}

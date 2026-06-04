#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMDESTROYMASCOTFAKEPLAYERACTION_METHOD_3_42C27024D1032D88_OFFSET UNITYSDK_OFFSET(0x19738840)
#define RPG_GAMECORE_FIVEDIMDESTROYMASCOTFAKEPLAYERACTION_METHOD_3_EE1D3889BF68EFBD_OFFSET UNITYSDK_OFFSET(0x1972D710)
#define RPG_GAMECORE_FIVEDIMDESTROYMASCOTFAKEPLAYERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1972D6F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDestroyMascotFakePlayerAction_TypeDefinitionIndex = 17772;

	class FiveDimDestroyMascotFakePlayerAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTROYMASCOTFAKEPLAYERACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_42C27024D1032D88(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDestroyMascotFakePlayerAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDestroyMascotFakePlayerAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTROYMASCOTFAKEPLAYERACTION_METHOD_3_42C27024D1032D88_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EE1D3889BF68EFBD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDestroyMascotFakePlayerAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDestroyMascotFakePlayerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTROYMASCOTFAKEPLAYERACTION_METHOD_3_EE1D3889BF68EFBD_OFFSET))(a1, a2);
		}
	};
}

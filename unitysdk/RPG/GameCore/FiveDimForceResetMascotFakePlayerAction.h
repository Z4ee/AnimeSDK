#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMFORCERESETMASCOTFAKEPLAYERACTION_METHOD_3_5CD0D09E39A6B5F3_OFFSET UNITYSDK_OFFSET(0x171F3290)
#define RPG_GAMECORE_FIVEDIMFORCERESETMASCOTFAKEPLAYERACTION_METHOD_3_A87B04BB9509D7E5_OFFSET UNITYSDK_OFFSET(0x171E8160)
#define RPG_GAMECORE_FIVEDIMFORCERESETMASCOTFAKEPLAYERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x171E8140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimForceResetMascotFakePlayerAction_TypeDefinitionIndex = 17153;

	class FiveDimForceResetMascotFakePlayerAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFORCERESETMASCOTFAKEPLAYERACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5CD0D09E39A6B5F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimForceResetMascotFakePlayerAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimForceResetMascotFakePlayerAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFORCERESETMASCOTFAKEPLAYERACTION_METHOD_3_5CD0D09E39A6B5F3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A87B04BB9509D7E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimForceResetMascotFakePlayerAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimForceResetMascotFakePlayerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFORCERESETMASCOTFAKEPLAYERACTION_METHOD_3_A87B04BB9509D7E5_OFFSET))(a1, a2);
		}
	};
}

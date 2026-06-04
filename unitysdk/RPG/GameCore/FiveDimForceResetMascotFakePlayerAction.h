#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMFORCERESETMASCOTFAKEPLAYERACTION_METHOD_3_002EA2144EC72A80_OFFSET UNITYSDK_OFFSET(0x1973E7A0)
#define RPG_GAMECORE_FIVEDIMFORCERESETMASCOTFAKEPLAYERACTION_METHOD_3_A87B04BB9509D7E5_OFFSET UNITYSDK_OFFSET(0x1972F280)
#define RPG_GAMECORE_FIVEDIMFORCERESETMASCOTFAKEPLAYERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1972F260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimForceResetMascotFakePlayerAction_TypeDefinitionIndex = 17782;

	class FiveDimForceResetMascotFakePlayerAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFORCERESETMASCOTFAKEPLAYERACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_002EA2144EC72A80(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimForceResetMascotFakePlayerAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimForceResetMascotFakePlayerAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFORCERESETMASCOTFAKEPLAYERACTION_METHOD_3_002EA2144EC72A80_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A87B04BB9509D7E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimForceResetMascotFakePlayerAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimForceResetMascotFakePlayerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFORCERESETMASCOTFAKEPLAYERACTION_METHOD_3_A87B04BB9509D7E5_OFFSET))(a1, a2);
		}
	};
}

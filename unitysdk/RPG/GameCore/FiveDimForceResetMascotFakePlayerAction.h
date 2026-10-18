#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMFORCERESETMASCOTFAKEPLAYERACTION_METHOD_4_128D918CAAF85932_OFFSET UNITYSDK_OFFSET(0x1D6921E0)
#define RPG_GAMECORE_FIVEDIMFORCERESETMASCOTFAKEPLAYERACTION_METHOD_4_494B6AA5866C28B3_OFFSET UNITYSDK_OFFSET(0x1D692160)
#define RPG_GAMECORE_FIVEDIMFORCERESETMASCOTFAKEPLAYERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6921D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimForceResetMascotFakePlayerAction_TypeDefinitionIndex = 18688;

	class FiveDimForceResetMascotFakePlayerAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFORCERESETMASCOTFAKEPLAYERACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_494B6AA5866C28B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimForceResetMascotFakePlayerAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimForceResetMascotFakePlayerAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFORCERESETMASCOTFAKEPLAYERACTION_METHOD_4_494B6AA5866C28B3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_128D918CAAF85932(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimForceResetMascotFakePlayerAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimForceResetMascotFakePlayerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFORCERESETMASCOTFAKEPLAYERACTION_METHOD_4_128D918CAAF85932_OFFSET))(a1, a2);
		}
	};
}

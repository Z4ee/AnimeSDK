#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMMOVETOMASCOTFAKEPLAYERACTION_METHOD_3_4D114E7F3BEC8F2B_OFFSET UNITYSDK_OFFSET(0x1D86DE70)
#define RPG_GAMECORE_FIVEDIMMOVETOMASCOTFAKEPLAYERACTION_METHOD_3_D5C55B596381E8CA_OFFSET UNITYSDK_OFFSET(0x1D86DDF0)
#define RPG_GAMECORE_FIVEDIMMOVETOMASCOTFAKEPLAYERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D86DE60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMoveToMascotFakePlayerAction_TypeDefinitionIndex = 18480;

	class FiveDimMoveToMascotFakePlayerAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVETOMASCOTFAKEPLAYERACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D5C55B596381E8CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMoveToMascotFakePlayerAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMoveToMascotFakePlayerAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVETOMASCOTFAKEPLAYERACTION_METHOD_3_D5C55B596381E8CA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4D114E7F3BEC8F2B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMoveToMascotFakePlayerAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMoveToMascotFakePlayerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVETOMASCOTFAKEPLAYERACTION_METHOD_3_4D114E7F3BEC8F2B_OFFSET))(a1, a2);
		}
	};
}

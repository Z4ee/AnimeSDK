#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMMOVETOMASCOTFAKEPLAYERACTION_METHOD_4_20CC618EE1305F64_OFFSET UNITYSDK_OFFSET(0x1D69FBD0)
#define RPG_GAMECORE_FIVEDIMMOVETOMASCOTFAKEPLAYERACTION_METHOD_4_AB6442FA87CD9DB9_OFFSET UNITYSDK_OFFSET(0x1D69FB50)
#define RPG_GAMECORE_FIVEDIMMOVETOMASCOTFAKEPLAYERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D69FBC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMoveToMascotFakePlayerAction_TypeDefinitionIndex = 18689;

	class FiveDimMoveToMascotFakePlayerAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVETOMASCOTFAKEPLAYERACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AB6442FA87CD9DB9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMoveToMascotFakePlayerAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMoveToMascotFakePlayerAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVETOMASCOTFAKEPLAYERACTION_METHOD_4_AB6442FA87CD9DB9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_20CC618EE1305F64(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMoveToMascotFakePlayerAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMoveToMascotFakePlayerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVETOMASCOTFAKEPLAYERACTION_METHOD_4_20CC618EE1305F64_OFFSET))(a1, a2);
		}
	};
}

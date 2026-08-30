#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSPAWNPROPACTION_METHOD_3_B8DCC95A55C89EF0_OFFSET UNITYSDK_OFFSET(0x1D87C2D0)
#define RPG_GAMECORE_FIVEDIMSPAWNPROPACTION_METHOD_3_C6B90C72ED71E975_OFFSET UNITYSDK_OFFSET(0x1D87C250)
#define RPG_GAMECORE_FIVEDIMSPAWNPROPACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D87C2C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSpawnPropAction_TypeDefinitionIndex = 18462;

	class FiveDimSpawnPropAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPAWNPROPACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C6B90C72ED71E975(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSpawnPropAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSpawnPropAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPAWNPROPACTION_METHOD_3_C6B90C72ED71E975_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B8DCC95A55C89EF0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSpawnPropAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSpawnPropAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPAWNPROPACTION_METHOD_3_B8DCC95A55C89EF0_OFFSET))(a1, a2);
		}
	};
}

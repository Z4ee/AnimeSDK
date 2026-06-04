#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSPAWNPROPACTION_METHOD_3_738FC8A942BE22B1_OFFSET UNITYSDK_OFFSET(0x19757FC0)
#define RPG_GAMECORE_FIVEDIMSPAWNPROPACTION_METHOD_3_B8DCC95A55C89EF0_OFFSET UNITYSDK_OFFSET(0x19758080)
#define RPG_GAMECORE_FIVEDIMSPAWNPROPACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19758060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSpawnPropAction_TypeDefinitionIndex = 17765;

	class FiveDimSpawnPropAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPAWNPROPACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_738FC8A942BE22B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSpawnPropAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSpawnPropAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPAWNPROPACTION_METHOD_3_738FC8A942BE22B1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B8DCC95A55C89EF0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSpawnPropAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSpawnPropAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPAWNPROPACTION_METHOD_3_B8DCC95A55C89EF0_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSPAWNPROPACTION_METHOD_4_61A3D2CFA044113E_OFFSET UNITYSDK_OFFSET(0x1D6DD1D0)
#define RPG_GAMECORE_FIVEDIMSPAWNPROPACTION_METHOD_4_A680897DD5EE892F_OFFSET UNITYSDK_OFFSET(0x1D6DD250)
#define RPG_GAMECORE_FIVEDIMSPAWNPROPACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DD240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSpawnPropAction_TypeDefinitionIndex = 18671;

	class FiveDimSpawnPropAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPAWNPROPACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_61A3D2CFA044113E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSpawnPropAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSpawnPropAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPAWNPROPACTION_METHOD_4_61A3D2CFA044113E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A680897DD5EE892F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSpawnPropAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSpawnPropAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPAWNPROPACTION_METHOD_4_A680897DD5EE892F_OFFSET))(a1, a2);
		}
	};
}

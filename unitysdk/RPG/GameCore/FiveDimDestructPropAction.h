#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMDESTRUCTPROPACTION_METHOD_4_26B764AE9AB7928D_OFFSET UNITYSDK_OFFSET(0x1D6B8D20)
#define RPG_GAMECORE_FIVEDIMDESTRUCTPROPACTION_METHOD_4_93431CB5A715D328_OFFSET UNITYSDK_OFFSET(0x1D6B8DA0)
#define RPG_GAMECORE_FIVEDIMDESTRUCTPROPACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B8D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDestructPropAction_TypeDefinitionIndex = 18674;

	class FiveDimDestructPropAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTRUCTPROPACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_26B764AE9AB7928D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDestructPropAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDestructPropAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTRUCTPROPACTION_METHOD_4_26B764AE9AB7928D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_93431CB5A715D328(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDestructPropAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDestructPropAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTRUCTPROPACTION_METHOD_4_93431CB5A715D328_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMDESTRUCTPROPACTION_METHOD_3_B1678C0D06541207_OFFSET UNITYSDK_OFFSET(0x188F46B0)
#define RPG_GAMECORE_FIVEDIMDESTRUCTPROPACTION_METHOD_3_CE3258685E5B5BCA_OFFSET UNITYSDK_OFFSET(0x188FD220)
#define RPG_GAMECORE_FIVEDIMDESTRUCTPROPACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x188F4690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDestructPropAction_TypeDefinitionIndex = 17741;

	class FiveDimDestructPropAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTRUCTPROPACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CE3258685E5B5BCA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDestructPropAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDestructPropAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTRUCTPROPACTION_METHOD_3_CE3258685E5B5BCA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B1678C0D06541207(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDestructPropAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDestructPropAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTRUCTPROPACTION_METHOD_3_B1678C0D06541207_OFFSET))(a1, a2);
		}
	};
}

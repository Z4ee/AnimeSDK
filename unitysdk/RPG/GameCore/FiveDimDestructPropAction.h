#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMDESTRUCTPROPACTION_METHOD_3_B1678C0D06541207_OFFSET UNITYSDK_OFFSET(0x1BA90DA0)
#define RPG_GAMECORE_FIVEDIMDESTRUCTPROPACTION_METHOD_3_FFF7CF5398B47A96_OFFSET UNITYSDK_OFFSET(0x1BA90D20)
#define RPG_GAMECORE_FIVEDIMDESTRUCTPROPACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA90D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDestructPropAction_TypeDefinitionIndex = 17944;

	class FiveDimDestructPropAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTRUCTPROPACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FFF7CF5398B47A96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDestructPropAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDestructPropAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTRUCTPROPACTION_METHOD_3_FFF7CF5398B47A96_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B1678C0D06541207(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDestructPropAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDestructPropAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTRUCTPROPACTION_METHOD_3_B1678C0D06541207_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEBASEEVENTACTION_METHOD_2_51DFA55D219C4C46_OFFSET UNITYSDK_OFFSET(0x1D7AFE60)
#define RPG_GAMECORE_LITTLEGAMEBASEEVENTACTION_METHOD_2_5C33D3944D7AEDA8_OFFSET UNITYSDK_OFFSET(0x1D7AFE20)
#define RPG_GAMECORE_LITTLEGAMEBASEEVENTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7AFEC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameBaseEventAction_TypeDefinitionIndex = 18861;

	class LittleGameBaseEventAction : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBASEEVENTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5C33D3944D7AEDA8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameBaseEventAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameBaseEventAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBASEEVENTACTION_METHOD_2_5C33D3944D7AEDA8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_51DFA55D219C4C46(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameBaseEventAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameBaseEventAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBASEEVENTACTION_METHOD_2_51DFA55D219C4C46_OFFSET))(a1, a2);
		}
	};
}

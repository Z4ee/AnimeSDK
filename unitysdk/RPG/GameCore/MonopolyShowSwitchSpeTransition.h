#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYSHOWSWITCHSPETRANSITION_METHOD_3_DF071E30EAD072DB_OFFSET UNITYSDK_OFFSET(0x1B1C11A0)
#define RPG_GAMECORE_MONOPOLYSHOWSWITCHSPETRANSITION_METHOD_3_FE4AE2642E11E7DE_OFFSET UNITYSDK_OFFSET(0x1B1C1270)
#define RPG_GAMECORE_MONOPOLYSHOWSWITCHSPETRANSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1C1260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyShowSwitchSpeTransition_TypeDefinitionIndex = 20150;

	class MonopolyShowSwitchSpeTransition : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYSHOWSWITCHSPETRANSITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DF071E30EAD072DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyShowSwitchSpeTransition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyShowSwitchSpeTransition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYSHOWSWITCHSPETRANSITION_METHOD_3_DF071E30EAD072DB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FE4AE2642E11E7DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyShowSwitchSpeTransition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyShowSwitchSpeTransition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYSHOWSWITCHSPETRANSITION_METHOD_3_FE4AE2642E11E7DE_OFFSET))(a1, a2);
		}
	};
}

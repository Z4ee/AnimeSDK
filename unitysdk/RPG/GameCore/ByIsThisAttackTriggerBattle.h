#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYISTHISATTACKTRIGGERBATTLE_METHOD_4_33ACF008B32AFEBF_OFFSET UNITYSDK_OFFSET(0x1B2AA490)
#define RPG_GAMECORE_BYISTHISATTACKTRIGGERBATTLE_METHOD_4_CED2AF6AE150053B_OFFSET UNITYSDK_OFFSET(0x1B2AA440)
#define RPG_GAMECORE_BYISTHISATTACKTRIGGERBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2AA480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsThisAttackTriggerBattle_TypeDefinitionIndex = 19999;

	class ByIsThisAttackTriggerBattle : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTHISATTACKTRIGGERBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CED2AF6AE150053B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsThisAttackTriggerBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsThisAttackTriggerBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTHISATTACKTRIGGERBATTLE_METHOD_4_CED2AF6AE150053B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_33ACF008B32AFEBF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsThisAttackTriggerBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsThisAttackTriggerBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTHISATTACKTRIGGERBATTLE_METHOD_4_33ACF008B32AFEBF_OFFSET))(a1, a2);
		}
	};
}

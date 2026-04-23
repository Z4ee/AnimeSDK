#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYTRIGGERDAILYSETTLEMENT_METHOD_3_D561203621B2EB00_OFFSET UNITYSDK_OFFSET(0x18B555B0)
#define RPG_GAMECORE_MONOPOLYTRIGGERDAILYSETTLEMENT_METHOD_3_FD25B30935C044B4_OFFSET UNITYSDK_OFFSET(0x18B554A0)
#define RPG_GAMECORE_MONOPOLYTRIGGERDAILYSETTLEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18B55580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyTriggerDailySettlement_TypeDefinitionIndex = 19916;

	class MonopolyTriggerDailySettlement : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYTRIGGERDAILYSETTLEMENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FD25B30935C044B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyTriggerDailySettlement*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyTriggerDailySettlement*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYTRIGGERDAILYSETTLEMENT_METHOD_3_FD25B30935C044B4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D561203621B2EB00(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyTriggerDailySettlement* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyTriggerDailySettlement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYTRIGGERDAILYSETTLEMENT_METHOD_3_D561203621B2EB00_OFFSET))(a1, a2);
		}
	};
}

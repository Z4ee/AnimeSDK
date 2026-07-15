#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITANDPROCESSBATTLERESULT_METHOD_3_0300DDA5851E8C07_OFFSET UNITYSDK_OFFSET(0x1B89FD80)
#define RPG_GAMECORE_WAITANDPROCESSBATTLERESULT_METHOD_3_E749A11885C0346A_OFFSET UNITYSDK_OFFSET(0x1B89FCB0)
#define RPG_GAMECORE_WAITANDPROCESSBATTLERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B89FD70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitAndProcessBattleResult_TypeDefinitionIndex = 22569;

	class WaitAndProcessBattleResult : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANDPROCESSBATTLERESULT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E749A11885C0346A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitAndProcessBattleResult*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitAndProcessBattleResult*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANDPROCESSBATTLERESULT_METHOD_3_E749A11885C0346A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0300DDA5851E8C07(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitAndProcessBattleResult* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitAndProcessBattleResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANDPROCESSBATTLERESULT_METHOD_3_0300DDA5851E8C07_OFFSET))(a1, a2);
		}
	};
}

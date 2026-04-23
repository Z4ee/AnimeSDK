#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITENTERBATTLETRANSITIONFINISH_METHOD_3_3C8C89B291DDF463_OFFSET UNITYSDK_OFFSET(0x190FB940)
#define RPG_GAMECORE_WAITENTERBATTLETRANSITIONFINISH_METHOD_3_E249445DB8B08D32_OFFSET UNITYSDK_OFFSET(0x190FB9C0)
#define RPG_GAMECORE_WAITENTERBATTLETRANSITIONFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x190FB990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitEnterBattleTransitionFinish_TypeDefinitionIndex = 22290;

	class WaitEnterBattleTransitionFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean WaitDefaultTransition; // 0x18
		::System::Boolean WaitAvatarTransition; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTERBATTLETRANSITIONFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3C8C89B291DDF463(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitEnterBattleTransitionFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitEnterBattleTransitionFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTERBATTLETRANSITIONFINISH_METHOD_3_3C8C89B291DDF463_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E249445DB8B08D32(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitEnterBattleTransitionFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitEnterBattleTransitionFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTERBATTLETRANSITIONFINISH_METHOD_3_E249445DB8B08D32_OFFSET))(a1, a2);
		}
	};
}

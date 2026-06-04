#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEBATTLESHOWRIDERUI_METHOD_3_20FB45312980566F_OFFSET UNITYSDK_OFFSET(0x1970E850)
#define RPG_GAMECORE_FATEBATTLESHOWRIDERUI_METHOD_3_E4AF285C2EE313FE_OFFSET UNITYSDK_OFFSET(0x1970E7D0)
#define RPG_GAMECORE_FATEBATTLESHOWRIDERUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1970E820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateBattleShowRiderUI_TypeDefinitionIndex = 22021;

	class FateBattleShowRiderUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Active; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLESHOWRIDERUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E4AF285C2EE313FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateBattleShowRiderUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateBattleShowRiderUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLESHOWRIDERUI_METHOD_3_E4AF285C2EE313FE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_20FB45312980566F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateBattleShowRiderUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateBattleShowRiderUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBATTLESHOWRIDERUI_METHOD_3_20FB45312980566F_OFFSET))(a1, a2);
		}
	};
}

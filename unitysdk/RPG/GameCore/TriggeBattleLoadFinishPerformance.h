#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGEBATTLELOADFINISHPERFORMANCE_METHOD_3_03AD0EB4861F2973_OFFSET UNITYSDK_OFFSET(0x190BB980)
#define RPG_GAMECORE_TRIGGEBATTLELOADFINISHPERFORMANCE_METHOD_3_52B850E53C3BD6C2_OFFSET UNITYSDK_OFFSET(0x190BBA10)
#define RPG_GAMECORE_TRIGGEBATTLELOADFINISHPERFORMANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x190BB9E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggeBattleLoadFinishPerformance_TypeDefinitionIndex = 22289;

	class TriggeBattleLoadFinishPerformance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean WaitFinish; // 0x18
		::System::Single ScreenTransferFadeOutTime; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEBATTLELOADFINISHPERFORMANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_03AD0EB4861F2973(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggeBattleLoadFinishPerformance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggeBattleLoadFinishPerformance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEBATTLELOADFINISHPERFORMANCE_METHOD_3_03AD0EB4861F2973_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_52B850E53C3BD6C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggeBattleLoadFinishPerformance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggeBattleLoadFinishPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEBATTLELOADFINISHPERFORMANCE_METHOD_3_52B850E53C3BD6C2_OFFSET))(a1, a2);
		}
	};
}

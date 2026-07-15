#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETBATTLERESULT_METHOD_3_048D361267F9A0D5_OFFSET UNITYSDK_OFFSET(0x1C2D4BC0)
#define RPG_GAMECORE_SETBATTLERESULT_METHOD_3_9827B057529F7596_OFFSET UNITYSDK_OFFSET(0x1C2D4B80)
#define RPG_GAMECORE_SETBATTLERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2D4BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBattleResult_TypeDefinitionIndex = 22567;

	class SetBattleResult : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsWin; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLERESULT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9827B057529F7596(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleResult*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleResult*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLERESULT_METHOD_3_9827B057529F7596_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_048D361267F9A0D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleResult* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLERESULT_METHOD_3_048D361267F9A0D5_OFFSET))(a1, a2);
		}
	};
}

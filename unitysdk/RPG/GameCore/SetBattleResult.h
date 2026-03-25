#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETBATTLERESULT_METHOD_3_048D361267F9A0D5_OFFSET UNITYSDK_OFFSET(0x176A9CB0)
#define RPG_GAMECORE_SETBATTLERESULT_METHOD_3_0ADF68180578B1E4_OFFSET UNITYSDK_OFFSET(0x176A9C30)
#define RPG_GAMECORE_SETBATTLERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x176A9C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBattleResult_TypeDefinitionIndex = 21636;

	class SetBattleResult : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsWin; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLERESULT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0ADF68180578B1E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleResult*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleResult*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLERESULT_METHOD_3_0ADF68180578B1E4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_048D361267F9A0D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleResult* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLERESULT_METHOD_3_048D361267F9A0D5_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWORDTRAININGCHECKCANENTERGAME_METHOD_3_052BEF72EEFDA436_OFFSET UNITYSDK_OFFSET(0x1779BD00)
#define RPG_GAMECORE_SWORDTRAININGCHECKCANENTERGAME_METHOD_3_2D0DB15337367AAA_OFFSET UNITYSDK_OFFSET(0x1779BC80)
#define RPG_GAMECORE_SWORDTRAININGCHECKCANENTERGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1779BCD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingCheckCanEnterGame_TypeDefinitionIndex = 19324;

	class SwordTrainingCheckCanEnterGame : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPermitted; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNotPermitted; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGCHECKCANENTERGAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2D0DB15337367AAA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingCheckCanEnterGame*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingCheckCanEnterGame*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGCHECKCANENTERGAME_METHOD_3_2D0DB15337367AAA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_052BEF72EEFDA436(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingCheckCanEnterGame* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingCheckCanEnterGame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGCHECKCANENTERGAME_METHOD_3_052BEF72EEFDA436_OFFSET))(a1, a2);
		}
	};
}

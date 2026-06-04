#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWORDTRAININGCHECKCANENTERGAME_METHOD_3_3FBB1A964B65289C_OFFSET UNITYSDK_OFFSET(0x19CE1DA0)
#define RPG_GAMECORE_SWORDTRAININGCHECKCANENTERGAME_METHOD_3_E2280690B2789BE4_OFFSET UNITYSDK_OFFSET(0x19CE1D20)
#define RPG_GAMECORE_SWORDTRAININGCHECKCANENTERGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x19CE1D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingCheckCanEnterGame_TypeDefinitionIndex = 19846;

	class SwordTrainingCheckCanEnterGame : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPermitted; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNotPermitted; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGCHECKCANENTERGAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E2280690B2789BE4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingCheckCanEnterGame*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingCheckCanEnterGame*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGCHECKCANENTERGAME_METHOD_3_E2280690B2789BE4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3FBB1A964B65289C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingCheckCanEnterGame* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingCheckCanEnterGame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGCHECKCANENTERGAME_METHOD_3_3FBB1A964B65289C_OFFSET))(a1, a2);
		}
	};
}

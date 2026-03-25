#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AttackDamageTypeConfig; }
namespace RPG::GameCore { class SwitchCaseTaskListByAttackDamageType; }

#define RPG_GAMECORE_SWITCHCASEBYATTACKDAMAGETYPE_METHOD_3_04D35085989E1FF2_OFFSET UNITYSDK_OFFSET(0x17792740)
#define RPG_GAMECORE_SWITCHCASEBYATTACKDAMAGETYPE_METHOD_3_6618BEA37F7D5825_OFFSET UNITYSDK_OFFSET(0x177926C0)
#define RPG_GAMECORE_SWITCHCASEBYATTACKDAMAGETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x17792710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchCaseByAttackDamageType_TypeDefinitionIndex = 22048;

	class SwitchCaseByAttackDamageType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::AttackDamageTypeConfig* Source; // 0x18
		::Il2CppArray<::RPG::GameCore::SwitchCaseTaskListByAttackDamageType*>* CaseTaskList; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* DefaultTaskList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCASEBYATTACKDAMAGETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6618BEA37F7D5825(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchCaseByAttackDamageType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchCaseByAttackDamageType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCASEBYATTACKDAMAGETYPE_METHOD_3_6618BEA37F7D5825_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_04D35085989E1FF2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchCaseByAttackDamageType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchCaseByAttackDamageType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCASEBYATTACKDAMAGETYPE_METHOD_3_04D35085989E1FF2_OFFSET))(a1, a2);
		}
	};
}

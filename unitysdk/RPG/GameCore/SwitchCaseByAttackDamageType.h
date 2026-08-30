#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AttackDamageTypeConfig; }
namespace RPG::GameCore { class SwitchCaseTaskListByAttackDamageType; }

#define RPG_GAMECORE_SWITCHCASEBYATTACKDAMAGETYPE_METHOD_3_0CE1D305328A9FF8_OFFSET UNITYSDK_OFFSET(0x1CB16D60)
#define RPG_GAMECORE_SWITCHCASEBYATTACKDAMAGETYPE_METHOD_3_279F8FB60FF918B9_OFFSET UNITYSDK_OFFSET(0x1CB16D20)
#define RPG_GAMECORE_SWITCHCASEBYATTACKDAMAGETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB16D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchCaseByAttackDamageType_TypeDefinitionIndex = 23501;

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

		static ::System::Void Method_3_279F8FB60FF918B9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchCaseByAttackDamageType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchCaseByAttackDamageType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCASEBYATTACKDAMAGETYPE_METHOD_3_279F8FB60FF918B9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0CE1D305328A9FF8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchCaseByAttackDamageType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchCaseByAttackDamageType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCASEBYATTACKDAMAGETYPE_METHOD_3_0CE1D305328A9FF8_OFFSET))(a1, a2);
		}
	};
}

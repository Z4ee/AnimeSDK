#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_SWITCHCASETASKLISTBYATTACKDAMAGETYPE_METHOD_2_60853A5E9CF47B44_OFFSET UNITYSDK_OFFSET(0x1D589A10)
#define RPG_GAMECORE_SWITCHCASETASKLISTBYATTACKDAMAGETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D589B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchCaseTaskListByAttackDamageType_TypeDefinitionIndex = 23500;

	class SwitchCaseTaskListByAttackDamageType : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AttackDamageType Case; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCASETASKLISTBYATTACKDAMAGETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_60853A5E9CF47B44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchCaseTaskListByAttackDamageType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchCaseTaskListByAttackDamageType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCASETASKLISTBYATTACKDAMAGETYPE_METHOD_2_60853A5E9CF47B44_OFFSET))(a1, a2);
		}
	};
}

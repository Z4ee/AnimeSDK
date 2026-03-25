#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_SWITCHCASETASKLIST_METHOD_2_A0B68FCBED262E0F_OFFSET UNITYSDK_OFFSET(0x17792EE0)
#define RPG_GAMECORE_SWITCHCASETASKLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x17793030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchCaseTaskList_TypeDefinitionIndex = 22044;

	class SwitchCaseTaskList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Case; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCASETASKLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A0B68FCBED262E0F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchCaseTaskList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchCaseTaskList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCASETASKLIST_METHOD_2_A0B68FCBED262E0F_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SwitchCaseTaskList; }

#define RPG_GAMECORE_SWITCHCASEBYDYNAMICVALUE_METHOD_3_8FC90175993C3AA1_OFFSET UNITYSDK_OFFSET(0x1CB16F60)
#define RPG_GAMECORE_SWITCHCASEBYDYNAMICVALUE_METHOD_3_A87107A0FA55E078_OFFSET UNITYSDK_OFFSET(0x1CB16F10)
#define RPG_GAMECORE_SWITCHCASEBYDYNAMICVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB16F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchCaseByDynamicValue_TypeDefinitionIndex = 23498;

	class SwitchCaseByDynamicValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Switch; // 0x18
		::RPG::GameCore::CompareType CompareType; // 0x20
		::System::Boolean WithBreak; // 0x24
		::Il2CppArray<::RPG::GameCore::SwitchCaseTaskList*>* CaseTaskList; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* DefaultTaskList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCASEBYDYNAMICVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A87107A0FA55E078(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchCaseByDynamicValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchCaseByDynamicValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCASEBYDYNAMICVALUE_METHOD_3_A87107A0FA55E078_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8FC90175993C3AA1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchCaseByDynamicValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchCaseByDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCASEBYDYNAMICVALUE_METHOD_3_8FC90175993C3AA1_OFFSET))(a1, a2);
		}
	};
}

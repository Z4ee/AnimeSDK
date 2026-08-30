#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamMemberCountingOption.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SwitchCaseTaskList; }

#define RPG_GAMECORE_SWITCHCASEBYTEAMMATECOUNT_METHOD_3_70ECD12E7B5FD2B8_OFFSET UNITYSDK_OFFSET(0x1D589690)
#define RPG_GAMECORE_SWITCHCASEBYTEAMMATECOUNT_METHOD_3_F4599FADFBB08319_OFFSET UNITYSDK_OFFSET(0x1D589640)
#define RPG_GAMECORE_SWITCHCASEBYTEAMMATECOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D589680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchCaseByTeammateCount_TypeDefinitionIndex = 23499;

	class SwitchCaseByTeammateCount : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType TeamType; // 0x18
		::Il2CppArray<::RPG::GameCore::SwitchCaseTaskList*>* CaseTaskList; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* DefaultTaskList; // 0x28
		::RPG::GameCore::TeamMemberCountingOption TeamMemberCountingOption; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCASEBYTEAMMATECOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F4599FADFBB08319(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchCaseByTeammateCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchCaseByTeammateCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCASEBYTEAMMATECOUNT_METHOD_3_F4599FADFBB08319_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_70ECD12E7B5FD2B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchCaseByTeammateCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchCaseByTeammateCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCASEBYTEAMMATECOUNT_METHOD_3_70ECD12E7B5FD2B8_OFFSET))(a1, a2);
		}
	};
}

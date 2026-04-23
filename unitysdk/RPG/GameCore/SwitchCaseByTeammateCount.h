#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamMemberCountingOption.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SwitchCaseTaskList; }

#define RPG_GAMECORE_SWITCHCASEBYTEAMMATECOUNT_METHOD_3_2BA722572EFCCE3F_OFFSET UNITYSDK_OFFSET(0x18EB8F20)
#define RPG_GAMECORE_SWITCHCASEBYTEAMMATECOUNT_METHOD_3_6C86BCC2C8F1198E_OFFSET UNITYSDK_OFFSET(0x18EB8E90)
#define RPG_GAMECORE_SWITCHCASEBYTEAMMATECOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x18EB8EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchCaseByTeammateCount_TypeDefinitionIndex = 22762;

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

		static ::System::Void Method_3_6C86BCC2C8F1198E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchCaseByTeammateCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchCaseByTeammateCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCASEBYTEAMMATECOUNT_METHOD_3_6C86BCC2C8F1198E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2BA722572EFCCE3F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchCaseByTeammateCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchCaseByTeammateCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCASEBYTEAMMATECOUNT_METHOD_3_2BA722572EFCCE3F_OFFSET))(a1, a2);
		}
	};
}

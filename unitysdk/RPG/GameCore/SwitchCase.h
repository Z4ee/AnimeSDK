#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateTaskListWithFail; }

#define RPG_GAMECORE_SWITCHCASE_METHOD_3_33A10D8AB069EED7_OFFSET UNITYSDK_OFFSET(0x1CB16AE0)
#define RPG_GAMECORE_SWITCHCASE_METHOD_3_D863706CAC774AD6_OFFSET UNITYSDK_OFFSET(0x1CB16B30)
#define RPG_GAMECORE_SWITCHCASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB16B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchCase_TypeDefinitionIndex = 23493;

	class SwitchCase : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean WithBreak; // 0x18
		::Il2CppArray<::RPG::GameCore::PredicateTaskListWithFail*>* TaskList; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* DefaultTask; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_33A10D8AB069EED7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchCase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchCase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCASE_METHOD_3_33A10D8AB069EED7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D863706CAC774AD6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchCase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchCase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCASE_METHOD_3_D863706CAC774AD6_OFFSET))(a1, a2);
		}
	};
}

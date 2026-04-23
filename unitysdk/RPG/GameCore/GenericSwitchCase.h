#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CaseContainerBase; }
namespace RPG::GameCore { class SwitchRefBase; }

#define RPG_GAMECORE_GENERICSWITCHCASE_METHOD_3_951C26F30F462CFD_OFFSET UNITYSDK_OFFSET(0x189968F0)
#define RPG_GAMECORE_GENERICSWITCHCASE_METHOD_3_F032630D26A58FEA_OFFSET UNITYSDK_OFFSET(0x18996870)
#define RPG_GAMECORE_GENERICSWITCHCASE__CTOR_OFFSET UNITYSDK_OFFSET(0x189968C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GenericSwitchCase_TypeDefinitionIndex = 22759;

	class GenericSwitchCase : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::SwitchRefBase* SwitchRef; // 0x18
		::Il2CppArray<::RPG::GameCore::CaseContainerBase*>* Cases; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Default; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GENERICSWITCHCASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F032630D26A58FEA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GenericSwitchCase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GenericSwitchCase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GENERICSWITCHCASE_METHOD_3_F032630D26A58FEA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_951C26F30F462CFD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GenericSwitchCase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GenericSwitchCase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GENERICSWITCHCASE_METHOD_3_951C26F30F462CFD_OFFSET))(a1, a2);
		}
	};
}

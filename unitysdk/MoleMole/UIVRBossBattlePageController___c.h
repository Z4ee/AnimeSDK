#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
class Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1;
namespace System { class Action; }

#define MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xEBCFAA0)
#define MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xEBCFAE0)
#define MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__ONSHOW_B__16_8_OFFSET UNITYSDK_OFFSET(0xEBCFBB0)
#define MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__ONUIINIT_B__14_2_OFFSET UNITYSDK_OFFSET(0xEBCFAF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVRBossBattlePageController___c_TypeDefinitionIndex = 58864;

	class UIVRBossBattlePageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIVRBossBattlePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIVRBossBattlePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIVRBossBattlePageController___c_TypeDefinitionIndex)->GetStaticField(0x382A0);
		}
		static ::System::Action** StaticGet___9__14_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIVRBossBattlePageController___c_TypeDefinitionIndex)->GetStaticField(0x382A8);
		}
		static ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1** StaticGet___9__16_8()
		{
			return (::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1**)Il2CppClass::FromTypeDefinitionIndex(UIVRBossBattlePageController___c_TypeDefinitionIndex)->GetStaticField(0x382B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__14_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__ONUIINIT_B__14_2_OFFSET))(this);
		}

		::System::Void _OnShow_b__16_8(::Class_0_16E4307DCC419505_11* errorMessage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__ONSHOW_B__16_8_OFFSET))(this, errorMessage);
		}
	};
}

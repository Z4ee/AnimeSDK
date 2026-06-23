#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1;
namespace System { class Action; }

#define MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1089A0A0)
#define MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1089A0E0)
#define MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__ONSHOW_B__16_8_OFFSET UNITYSDK_OFFSET(0x1089A1B0)
#define MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__ONUIINIT_B__14_2_OFFSET UNITYSDK_OFFSET(0x1089A0F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVRBossBattlePageController___c_TypeDefinitionIndex = 53287;

	class UIVRBossBattlePageController___c : public ::System::Object
	{
	public:
		static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1** StaticGet___9__16_8()
		{
			return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1**)Il2CppClass::FromTypeDefinitionIndex(UIVRBossBattlePageController___c_TypeDefinitionIndex)->GetStaticField(0x3A7B0);
		}
		static ::MoleMole::UIVRBossBattlePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIVRBossBattlePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIVRBossBattlePageController___c_TypeDefinitionIndex)->GetStaticField(0x3A7B8);
		}
		static ::System::Action** StaticGet___9__14_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIVRBossBattlePageController___c_TypeDefinitionIndex)->GetStaticField(0x3A7C0);
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

		::System::Void _OnShow_b__16_8(::Class_0_16E4307DCC419505_29* errorMessage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__ONSHOW_B__16_8_OFFSET))(this, errorMessage);
		}
	};
}

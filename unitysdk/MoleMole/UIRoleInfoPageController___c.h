#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIROLEINFOPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15185CB0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15185CF0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER___C__ONCLICKBACKBTN_B__100_0_OFFSET UNITYSDK_OFFSET(0x15185F80)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER___C__ONUIINIT_B__73_1_OFFSET UNITYSDK_OFFSET(0x15185D00)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER___C__UPDATEINFOBTNTEXT_B__112_0_OFFSET UNITYSDK_OFFSET(0x15186040)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoPageController___c_TypeDefinitionIndex = 72193;

	class UIRoleInfoPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIRoleInfoPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIRoleInfoPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoPageController___c_TypeDefinitionIndex)->GetStaticField(0x36F80);
		}
		static ::System::Action** StaticGet___9__73_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoPageController___c_TypeDefinitionIndex)->GetStaticField(0x36F88);
		}
		static ::System::Action** StaticGet___9__100_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoPageController___c_TypeDefinitionIndex)->GetStaticField(0x36F90);
		}
		static ::System::Func_1<::System::String*>** StaticGet___9__112_0()
		{
			return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoPageController___c_TypeDefinitionIndex)->GetStaticField(0x36F98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__73_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER___C__ONUIINIT_B__73_1_OFFSET))(this);
		}

		::System::Void _OnClickBackBtn_b__100_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER___C__ONCLICKBACKBTN_B__100_0_OFFSET))(this);
		}

		::System::String* _UpdateInfoBtnText_b__112_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER___C__UPDATEINFOBTNTEXT_B__112_0_OFFSET))(this);
		}
	};
}

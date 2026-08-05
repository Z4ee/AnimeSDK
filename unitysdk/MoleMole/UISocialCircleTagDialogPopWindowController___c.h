#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_635;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UISOCIALCIRCLETAGDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x160DF790)
#define MOLEMOLE_UISOCIALCIRCLETAGDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x160DF7D0)
#define MOLEMOLE_UISOCIALCIRCLETAGDIALOGPOPWINDOWCONTROLLER___C__ONUIOPEN_B__6_0_OFFSET UNITYSDK_OFFSET(0x160DF7E0)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleTagDialogPopWindowController___c_TypeDefinitionIndex = 79671;

	class UISocialCircleTagDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::Class_2_208CC9941471731A_635*>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::Int32, ::Class_2_208CC9941471731A_635*>**)Il2CppClass::FromTypeDefinitionIndex(UISocialCircleTagDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x33210);
		}
		static ::MoleMole::UISocialCircleTagDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UISocialCircleTagDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UISocialCircleTagDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x33218);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLETAGDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLETAGDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::Class_2_208CC9941471731A_635* _OnUIOpen_b__6_0(::System::Int32 value)
		{
			return ((::Class_2_208CC9941471731A_635*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLETAGDIALOGPOPWINDOWCONTROLLER___C__ONUIOPEN_B__6_0_OFFSET))(this, value);
		}
	};
}

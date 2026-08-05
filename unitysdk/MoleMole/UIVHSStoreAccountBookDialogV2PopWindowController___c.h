#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_1_1685EC66FBD28897;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIVHSSTOREACCOUNTBOOKDIALOGV2POPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16105BD0)
#define MOLEMOLE_UIVHSSTOREACCOUNTBOOKDIALOGV2POPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16105C10)
#define MOLEMOLE_UIVHSSTOREACCOUNTBOOKDIALOGV2POPWINDOWCONTROLLER___C__INITVHSREWARDINFO_B__10_7_OFFSET UNITYSDK_OFFSET(0x16105C30)
#define MOLEMOLE_UIVHSSTOREACCOUNTBOOKDIALOGV2POPWINDOWCONTROLLER___C__ONUICLOSE_B__7_0_OFFSET UNITYSDK_OFFSET(0x16105C20)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreAccountBookDialogV2PopWindowController___c_TypeDefinitionIndex = 51344;

	class UIVHSStoreAccountBookDialogV2PopWindowController___c : public ::System::Object
	{
	public:
		static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1** StaticGet___9__7_0()
		{
			return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1**)Il2CppClass::FromTypeDefinitionIndex(UIVHSStoreAccountBookDialogV2PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3D410);
		}
		static ::MoleMole::UIVHSStoreAccountBookDialogV2PopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIVHSStoreAccountBookDialogV2PopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIVHSStoreAccountBookDialogV2PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3D418);
		}
		static ::System::Comparison_1<::Class_1_1685EC66FBD28897*>** StaticGet___9__10_7()
		{
			return (::System::Comparison_1<::Class_1_1685EC66FBD28897*>**)Il2CppClass::FromTypeDefinitionIndex(UIVHSStoreAccountBookDialogV2PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3D420);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREACCOUNTBOOKDIALOGV2POPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREACCOUNTBOOKDIALOGV2POPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIClose_b__7_0(::Class_0_16E4307DCC419505_36* message)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREACCOUNTBOOKDIALOGV2POPWINDOWCONTROLLER___C__ONUICLOSE_B__7_0_OFFSET))(this, message);
		}

		::System::Int32 _InitVHSRewardInfo_b__10_7(::Class_1_1685EC66FBD28897* a, ::Class_1_1685EC66FBD28897* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_1685EC66FBD28897*, ::Class_1_1685EC66FBD28897*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREACCOUNTBOOKDIALOGV2POPWINDOWCONTROLLER___C__INITVHSREWARDINFO_B__10_7_OFFSET))(this, a, b);
		}
	};
}

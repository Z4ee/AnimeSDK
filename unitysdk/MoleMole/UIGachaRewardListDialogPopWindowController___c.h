#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_3_AAC9B4B6713CDE1B;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1938FB00)
#define MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1938FB40)
#define MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__ONUIOPEN_B__6_0_OFFSET UNITYSDK_OFFSET(0x1938FB50)
#define MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__ONUIOPEN_B__6_1_OFFSET UNITYSDK_OFFSET(0x1938FDE0)
#define MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__19_0_OFFSET UNITYSDK_OFFSET(0x1938FDF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaRewardListDialogPopWindowController___c_TypeDefinitionIndex = 71741;

	class UIGachaRewardListDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_3_AAC9B4B6713CDE1B*>** StaticGet___9__6_0()
		{
			return (::System::Comparison_1<::Class_3_AAC9B4B6713CDE1B*>**)Il2CppClass::FromTypeDefinitionIndex(UIGachaRewardListDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4C560);
		}
		static ::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>>** StaticGet___9__6_1()
		{
			return (::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(UIGachaRewardListDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4C568);
		}
		static ::MoleMole::UIGachaRewardListDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIGachaRewardListDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGachaRewardListDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4C570);
		}
		static ::System::Action** StaticGet___9__19_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIGachaRewardListDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4C578);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnUIOpen_b__6_0(::Class_3_AAC9B4B6713CDE1B* l, ::Class_3_AAC9B4B6713CDE1B* r)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_3_AAC9B4B6713CDE1B*, ::Class_3_AAC9B4B6713CDE1B*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__ONUIOPEN_B__6_0_OFFSET))(this, l, r);
		}

		::System::Int32 _OnUIOpen_b__6_1(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32> l, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32> r)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__ONUIOPEN_B__6_1_OFFSET))(this, l, r);
		}

		::System::Void _RefreshView_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__19_0_OFFSET))(this);
		}
	};
}

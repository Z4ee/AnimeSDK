#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_2_FEB0042A043413D3;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15875280)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER___C__CREATEOPTIONDATALIST_B__18_0_OFFSET UNITYSDK_OFFSET(0x158752F0)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x158752C0)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER___C__INITRELICITEMLIST_B__21_0_OFFSET UNITYSDK_OFFSET(0x15875310)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER___C__INITRELICITEMLIST_B__21_1_OFFSET UNITYSDK_OFFSET(0x15875420)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER___C__INITSCROLLVIEW_B__14_0_OFFSET UNITYSDK_OFFSET(0x158752D0)
#define MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER___C__PROCESSNORMALCONFIRM_B__56_1_OFFSET UNITYSDK_OFFSET(0x15875430)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2RelicSelectPageController___c_TypeDefinitionIndex = 42693;

	class UIAbyssS2RelicSelectPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIAbyssS2RelicSelectPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyssS2RelicSelectPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RelicSelectPageController___c_TypeDefinitionIndex)->GetStaticField(0x46A20);
		}
		static ::System::Func_2<::Class_2_FEB0042A043413D3*, ::System::Int32>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::Class_2_FEB0042A043413D3*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RelicSelectPageController___c_TypeDefinitionIndex)->GetStaticField(0x46A28);
		}
		static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__21_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RelicSelectPageController___c_TypeDefinitionIndex)->GetStaticField(0x46A30);
		}
		static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__21_1()
		{
			return (::System::Func_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RelicSelectPageController___c_TypeDefinitionIndex)->GetStaticField(0x46A38);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>, ::System::Int32>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RelicSelectPageController___c_TypeDefinitionIndex)->GetStaticField(0x46A40);
		}
		static ::System::Action** StaticGet___9__56_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RelicSelectPageController___c_TypeDefinitionIndex)->GetStaticField(0x46A48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitScrollView_b__14_0(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*> pair)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER___C__INITSCROLLVIEW_B__14_0_OFFSET))(this, pair);
		}

		::System::Int32 _CreateOptionDataList_b__18_0(::Class_2_FEB0042A043413D3* v)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_FEB0042A043413D3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER___C__CREATEOPTIONDATALIST_B__18_0_OFFSET))(this, v);
		}

		::System::Int32 _InitRelicItemList_b__21_0(::System::Int32 id)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER___C__INITRELICITEMLIST_B__21_0_OFFSET))(this, id);
		}

		::System::Int32 _InitRelicItemList_b__21_1(::System::Int32 id)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER___C__INITRELICITEMLIST_B__21_1_OFFSET))(this, id);
		}

		::System::Void _ProcessNormalConfirm_b__56_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICSELECTPAGECONTROLLER___C__PROCESSNORMALCONFIRM_B__56_1_OFFSET))(this);
		}
	};
}

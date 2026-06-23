#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_131;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1846B7E0)
#define MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1846B820)
#define MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___C__ONSCROLLITEMUPDATE_B__9_2_OFFSET UNITYSDK_OFFSET(0x1846B830)
#define MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___C__ONSCROLLITEMUPDATE_B__9_3_OFFSET UNITYSDK_OFFSET(0x1846B870)
#define MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___C__ONSCROLLITEMUPDATE_B__9_4_OFFSET UNITYSDK_OFFSET(0x1846B8A0)
#define MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___C__REFRESHGAMEPADLIST_B__10_0_OFFSET UNITYSDK_OFFSET(0x1846BA90)
#define MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___C__REFRESHGAMEPADLIST_B__10_1_OFFSET UNITYSDK_OFFSET(0x1846BAB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookItemWidgetController___c_TypeDefinitionIndex = 60890;

	class UIHandBookItemWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_2_208CC9941471731A_131*, ::System::Boolean>** StaticGet___9__9_4()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_131*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x487F0);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>, ::System::Int32>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x487F8);
		}
		static ::MoleMole::UIHandBookItemWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookItemWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x48800);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>, ::UnityEngine::GameObject*>** StaticGet___9__10_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>, ::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x48808);
		}
		static ::System::Func_2<::Class_2_208CC9941471731A_131*, ::System::Boolean>** StaticGet___9__9_3()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_131*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x48810);
		}
		static ::System::Func_2<::System::Int32, ::Class_2_208CC9941471731A_131*>** StaticGet___9__9_2()
		{
			return (::System::Func_2<::System::Int32, ::Class_2_208CC9941471731A_131*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x48818);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::Class_2_208CC9941471731A_131* _OnScrollItemUpdate_b__9_2(::System::Int32 itemID)
		{
			return ((::Class_2_208CC9941471731A_131*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___C__ONSCROLLITEMUPDATE_B__9_2_OFFSET))(this, itemID);
		}

		::System::Boolean _OnScrollItemUpdate_b__9_3(::Class_2_208CC9941471731A_131* itemTemplate)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_131*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___C__ONSCROLLITEMUPDATE_B__9_3_OFFSET))(this, itemTemplate);
		}

		::System::Boolean _OnScrollItemUpdate_b__9_4(::Class_2_208CC9941471731A_131* itemTemplate)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_131*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___C__ONSCROLLITEMUPDATE_B__9_4_OFFSET))(this, itemTemplate);
		}

		::System::Int32 _RefreshGamepadList_b__10_0(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*> pair)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___C__REFRESHGAMEPADLIST_B__10_0_OFFSET))(this, pair);
		}

		::UnityEngine::GameObject* _RefreshGamepadList_b__10_1(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*> pair)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___C__REFRESHGAMEPADLIST_B__10_1_OFFSET))(this, pair);
		}
	};
}

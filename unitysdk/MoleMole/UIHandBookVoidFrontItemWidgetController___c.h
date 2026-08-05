#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ScrollViewItemWidgetController; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIHANDBOOKVOIDFRONTITEMWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19610050)
#define MOLEMOLE_UIHANDBOOKVOIDFRONTITEMWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19610090)
#define MOLEMOLE_UIHANDBOOKVOIDFRONTITEMWIDGETCONTROLLER___C__REFRESHGAMEPADLIST_B__14_0_OFFSET UNITYSDK_OFFSET(0x196100A0)
#define MOLEMOLE_UIHANDBOOKVOIDFRONTITEMWIDGETCONTROLLER___C__REFRESHGAMEPADLIST_B__14_1_OFFSET UNITYSDK_OFFSET(0x196100C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookVoidFrontItemWidgetController___c_TypeDefinitionIndex = 73919;

	class UIHandBookVoidFrontItemWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>, ::System::Int32>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookVoidFrontItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x42AE0);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>, ::UnityEngine::GameObject*>** StaticGet___9__14_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>, ::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookVoidFrontItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x42AE8);
		}
		static ::MoleMole::UIHandBookVoidFrontItemWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookVoidFrontItemWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookVoidFrontItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x42AF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTITEMWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTITEMWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshGamepadList_b__14_0(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*> pair)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTITEMWIDGETCONTROLLER___C__REFRESHGAMEPADLIST_B__14_0_OFFSET))(this, pair);
		}

		::UnityEngine::GameObject* _RefreshGamepadList_b__14_1(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*> pair)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTITEMWIDGETCONTROLLER___C__REFRESHGAMEPADLIST_B__14_1_OFFSET))(this, pair);
		}
	};
}

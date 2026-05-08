#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ScrollViewItemWidgetController; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIHANDBOOKHADALITEMWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16883520)
#define MOLEMOLE_UIHANDBOOKHADALITEMWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16883560)
#define MOLEMOLE_UIHANDBOOKHADALITEMWIDGETCONTROLLER___C__REFRESHGAMEPADLIST_B__15_0_OFFSET UNITYSDK_OFFSET(0x16883570)
#define MOLEMOLE_UIHANDBOOKHADALITEMWIDGETCONTROLLER___C__REFRESHGAMEPADLIST_B__15_1_OFFSET UNITYSDK_OFFSET(0x16883590)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookHadalItemWidgetController___c_TypeDefinitionIndex = 49771;

	class UIHandBookHadalItemWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>, ::UnityEngine::GameObject*>** StaticGet___9__15_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>, ::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookHadalItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x44960);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>, ::System::Int32>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookHadalItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x44968);
		}
		static ::MoleMole::UIHandBookHadalItemWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookHadalItemWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookHadalItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x44970);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKHADALITEMWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKHADALITEMWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshGamepadList_b__15_0(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*> pair)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKHADALITEMWIDGETCONTROLLER___C__REFRESHGAMEPADLIST_B__15_0_OFFSET))(this, pair);
		}

		::UnityEngine::GameObject* _RefreshGamepadList_b__15_1(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*> pair)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKHADALITEMWIDGETCONTROLLER___C__REFRESHGAMEPADLIST_B__15_1_OFFSET))(this, pair);
		}
	};
}

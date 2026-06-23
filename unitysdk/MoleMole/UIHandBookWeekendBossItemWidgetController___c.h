#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ScrollViewItemWidgetController; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIHANDBOOKWEEKENDBOSSITEMWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1812EFC0)
#define MOLEMOLE_UIHANDBOOKWEEKENDBOSSITEMWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1812F000)
#define MOLEMOLE_UIHANDBOOKWEEKENDBOSSITEMWIDGETCONTROLLER___C__REFRESHGAMEPADLIST_B__9_0_OFFSET UNITYSDK_OFFSET(0x1812F010)
#define MOLEMOLE_UIHANDBOOKWEEKENDBOSSITEMWIDGETCONTROLLER___C__REFRESHGAMEPADLIST_B__9_1_OFFSET UNITYSDK_OFFSET(0x1812F030)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookWeekendBossItemWidgetController___c_TypeDefinitionIndex = 68353;

	class UIHandBookWeekendBossItemWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>, ::System::Int32>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookWeekendBossItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4B1A0);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>, ::UnityEngine::GameObject*>** StaticGet___9__9_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>, ::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookWeekendBossItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4B1A8);
		}
		static ::MoleMole::UIHandBookWeekendBossItemWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookWeekendBossItemWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookWeekendBossItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4B1B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKWEEKENDBOSSITEMWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKWEEKENDBOSSITEMWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshGamepadList_b__9_0(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*> pair)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKWEEKENDBOSSITEMWIDGETCONTROLLER___C__REFRESHGAMEPADLIST_B__9_0_OFFSET))(this, pair);
		}

		::UnityEngine::GameObject* _RefreshGamepadList_b__9_1(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*> pair)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKWEEKENDBOSSITEMWIDGETCONTROLLER___C__REFRESHGAMEPADLIST_B__9_1_OFFSET))(this, pair);
		}
	};
}

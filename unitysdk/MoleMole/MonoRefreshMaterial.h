#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIMonoController.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace DG::Tweening { class Tween; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class GridLayoutGroup; }

#define MOLEMOLE_MONOREFRESHMATERIAL_ONLYREFRESHCURRENTCOUNT_OFFSET UNITYSDK_OFFSET(0x16CDC3C0)
#define MOLEMOLE_MONOREFRESHMATERIAL_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16CDC5C0)
#define MOLEMOLE_MONOREFRESHMATERIAL_PLAYITEMICONADDANI_OFFSET UNITYSDK_OFFSET(0x16CDB6E0)
#define MOLEMOLE_MONOREFRESHMATERIAL_REFRESHITEMICON_OFFSET UNITYSDK_OFFSET(0x16CDB200)
#define MOLEMOLE_MONOREFRESHMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x16CDC6B0)
#define MOLEMOLE_MONOREFRESHMATERIAL___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16CDC760)

namespace MoleMole
{
	inline static constexpr unsigned int MonoRefreshMaterial_TypeDefinitionIndex = 79563;

	class MonoRefreshMaterial : public ::MoleMole::UIMonoController
	{
	public:
		::UnityEngine::UI::GridLayoutGroup* gridLayoutGroup; // 0x80
		::UnityEngine::RectTransform* parentRoot; // 0x88
		::Foundation::Coroutine::CoroutineHandle fadeoutDelay; // 0x90
		::DG::Tweening::Tween* _itemIconHandler; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOREFRESHMATERIAL__CTOR_OFFSET))(this);
		}

		::System::Void RefreshItemIcon(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* consumeList, ::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>* _expMatItems)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*, ::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOREFRESHMATERIAL_REFRESHITEMICON_OFFSET))(this, consumeList, _expMatItems);
		}

		::System::Single PlayItemIconAddAni(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* consumeList, ::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>* _expMatItems, ::System::Boolean withTweenEffect)
		{
			return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*, ::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOREFRESHMATERIAL_PLAYITEMICONADDANI_OFFSET))(this, consumeList, _expMatItems, withTweenEffect);
		}

		::System::Void OnlyRefreshCurrentCount(::MoleMole::UIItemIconBtnWidgetController* itemIconCtrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIItemIconBtnWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOREFRESHMATERIAL_ONLYREFRESHCURRENTCOUNT_OFFSET))(this, itemIconCtrl);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOREFRESHMATERIAL_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOREFRESHMATERIAL___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}

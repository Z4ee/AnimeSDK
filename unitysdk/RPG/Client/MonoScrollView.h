#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoScrollView_Dir.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::UI { class GridLayoutGroup; }
namespace UnityEngine::UI { class ScrollRect; }

#define RPG_CLIENT_MONOSCROLLVIEW_BINDVIEW_OFFSET UNITYSDK_OFFSET(0xD862FA0)
#define RPG_CLIENT_MONOSCROLLVIEW_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xD863190)
#define RPG_CLIENT_MONOSCROLLVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xD863200)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoScrollView_TypeDefinitionIndex = 72530;

	class MonoScrollView : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* CONTENT; // 0x0
		::UnityEngine::GameObject* CellPrefab; // 0x18
		::RPG::Client::MonoScrollView_Dir Direction; // 0x20
		::System::Boolean StretchCellSize; // 0x24
		::System::Boolean CenterContent; // 0x25
		::System::Boolean AutoPivot; // 0x26
		::UnityEngine::Events::UnityAction* OnDragEndAction; // 0x28
		::UnityEngine::RectTransform* Content; // 0x30
		::UnityEngine::UI::ScrollRect* ScrollRect; // 0x38
		::UnityEngine::RectTransform* ViewportRect; // 0x40
		::UnityEngine::UI::GridLayoutGroup* ContentLayout; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCROLLVIEW__CTOR_OFFSET))(this);
		}

		::System::Void BindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCROLLVIEW_BINDVIEW_OFFSET))(this);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCROLLVIEW_ONENDDRAG_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::UI { class LayoutElement; }
namespace UnityEngine::UI { class ScrollRect; }
namespace UnityEngine::UI { class Scrollbar; }

#define MHYSDKUICLAMPSCROLLAREA_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1535C370)
#define MHYSDKUICLAMPSCROLLAREA_RESET_OFFSET UNITYSDK_OFFSET(0x1535C300)
#define MHYSDKUICLAMPSCROLLAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x1535C710)

inline static constexpr unsigned int MHYSDKUIClampScrollArea_TypeDefinitionIndex = 42600;

class MHYSDKUIClampScrollArea : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::UI::ScrollRect* scrollRect; // 0x18
	::UnityEngine::UI::LayoutElement* layoutElement; // 0x20
	::UnityEngine::UI::Scrollbar* verticalScrollbar; // 0x28
	::System::Single minHeight; // 0x30
	::System::Single maxHeight; // 0x34
	::System::Single threshold; // 0x38
	::System::Single _lastPreferredHeight; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHYSDKUICLAMPSCROLLAREA__CTOR_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHYSDKUICLAMPSCROLLAREA_RESET_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHYSDKUICLAMPSCROLLAREA_LATEUPDATE_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

namespace System { class Object; }

#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_SELECTEDITEMCHANGEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEDC1D0)

namespace SRF::UI::Layout
{
	inline static constexpr unsigned int VirtualVerticalLayoutGroup_SelectedItemChangedEvent_TypeDefinitionIndex = 33969;

	class VirtualVerticalLayoutGroup_SelectedItemChangedEvent : public ::UnityEngine::Events::UnityEvent_1<::System::Object*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_SELECTEDITEMCHANGEDEVENT__CTOR_OFFSET))(this);
		}
	};
}

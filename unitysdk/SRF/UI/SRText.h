#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Text.h"

namespace System { template <typename T> class Action_1; }

#define SRF_UI_SRTEXT_ADD_LAYOUTDIRTY_OFFSET UNITYSDK_OFFSET(0x1846EE40)
#define SRF_UI_SRTEXT_REMOVE_LAYOUTDIRTY_OFFSET UNITYSDK_OFFSET(0x1846F0E0)
#define SRF_UI_SRTEXT_SETLAYOUTDIRTY_OFFSET UNITYSDK_OFFSET(0x18475430)
#define SRF_UI_SRTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18475460)

namespace SRF::UI
{
	inline static constexpr unsigned int SRText_TypeDefinitionIndex = 27682;

	class SRText : public ::UnityEngine::UI::Text
	{
	public:
		::System::Action_1<::SRF::UI::SRText*>* LayoutDirty; // 0x190

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_SRTEXT__CTOR_OFFSET))(this);
		}

		::System::Void add_LayoutDirty(::System::Action_1<::SRF::UI::SRText*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::SRF::UI::SRText*>*))((::PBYTE)hIl2Cpp + SRF_UI_SRTEXT_ADD_LAYOUTDIRTY_OFFSET))(this, value);
		}

		::System::Void remove_LayoutDirty(::System::Action_1<::SRF::UI::SRText*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::SRF::UI::SRText*>*))((::PBYTE)hIl2Cpp + SRF_UI_SRTEXT_REMOVE_LAYOUTDIRTY_OFFSET))(this, value);
		}

		::System::Void SetLayoutDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_SRTEXT_SETLAYOUTDIRTY_OFFSET))(this);
		}
	};
}

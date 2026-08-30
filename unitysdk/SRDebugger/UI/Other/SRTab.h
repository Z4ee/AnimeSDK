#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/Services/MihoyoOptionControlType.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"

namespace SRDebugger::UI::Controls { class SRTabButton; }
namespace SRDebugger::UI::Other { class ITabNavigationController; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Sprite; }

#define SRDEBUGGER_UI_OTHER_SRTAB_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1E69C260)
#define SRDEBUGGER_UI_OTHER_SRTAB_GET_LONGTITLE_OFFSET UNITYSDK_OFFSET(0x1E69C240)
#define SRDEBUGGER_UI_OTHER_SRTAB_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1E69C220)
#define SRDEBUGGER_UI_OTHER_SRTAB_ONTABSELECTED_OFFSET UNITYSDK_OFFSET(0x1E69C500)
#define SRDEBUGGER_UI_OTHER_SRTAB_OPTIONCONTROL_OFFSET UNITYSDK_OFFSET(0x1E69C7E0)
#define SRDEBUGGER_UI_OTHER_SRTAB_SET_KEY_OFFSET UNITYSDK_OFFSET(0x1E69C270)
#define SRDEBUGGER_UI_OTHER_SRTAB_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x1E69C230)
#define SRDEBUGGER_UI_OTHER_SRTAB_START_OFFSET UNITYSDK_OFFSET(0x1E69C280)
#define SRDEBUGGER_UI_OTHER_SRTAB__CTOR_OFFSET UNITYSDK_OFFSET(0x1E69C910)
#define SRDEBUGGER_UI_OTHER_SRTAB__RESETSCROLLCONTENT_OFFSET UNITYSDK_OFFSET(0x1E69C760)

namespace SRDebugger::UI::Other
{
	inline static constexpr unsigned int SRTab_TypeDefinitionIndex = 37318;

	class SRTab : public ::SRF::SRMonoBehaviourEx
	{
	public:
		::UnityEngine::RectTransform* HeaderExtraContent; // 0x48
		::UnityEngine::Sprite* Icon; // 0x50
		::UnityEngine::RectTransform* IconExtraContent; // 0x58
		::System::String* IconStyleKey; // 0x60
		::System::Int32 SortIndex; // 0x68
		::SRDebugger::UI::Controls::SRTabButton* TabButton; // 0x70
		::System::String* _title; // 0x78
		::System::String* _longTitle; // 0x80
		::System::String* _key; // 0x88
		::UnityEngine::RectTransform* ScrollContent; // 0x90
		::SRDebugger::UI::Other::ITabNavigationController* _NaviController; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTAB__CTOR_OFFSET))(this);
		}

		::System::String* get_Title()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTAB_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTAB_SET_TITLE_OFFSET))(this, a1);
		}

		::System::String* get_LongTitle()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTAB_GET_LONGTITLE_OFFSET))(this);
		}

		::System::String* get_Key()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTAB_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTAB_SET_KEY_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTAB_START_OFFSET))(this);
		}

		::System::Void OnTabSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTAB_ONTABSELECTED_OFFSET))(this);
		}

		::System::Void OptionControl(::SRDebugger::Services::MihoyoOptionControlType a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::MihoyoOptionControlType))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTAB_OPTIONCONTROL_OFFSET))(this, a1);
		}

		::System::Void _ResetScrollContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTAB__RESETSCROLLCONTENT_OFFSET))(this);
		}
	};
}

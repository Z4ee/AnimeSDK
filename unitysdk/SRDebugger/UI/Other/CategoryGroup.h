#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class Toggle; }

#define SRDEBUGGER_UI_OTHER_CATEGORYGROUP_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x1BDC3DA0)
#define SRDEBUGGER_UI_OTHER_CATEGORYGROUP_GET_SELECTIONMODEENABLED_OFFSET UNITYSDK_OFFSET(0x1BDC3EB0)
#define SRDEBUGGER_UI_OTHER_CATEGORYGROUP_SET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x1BDC3DC0)
#define SRDEBUGGER_UI_OTHER_CATEGORYGROUP_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x1BDC3F30)
#define SRDEBUGGER_UI_OTHER_CATEGORYGROUP_SET_SELECTIONMODEENABLED_OFFSET UNITYSDK_OFFSET(0x1BDC3EC0)
#define SRDEBUGGER_UI_OTHER_CATEGORYGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDC3F60)

namespace SRDebugger::UI::Other
{
	inline static constexpr unsigned int CategoryGroup_TypeDefinitionIndex = 37306;

	class CategoryGroup : public ::SRF::SRMonoBehaviourEx
	{
	public:
		::UnityEngine::RectTransform* Container; // 0x48
		::UnityEngine::UI::Text* Header; // 0x50
		::UnityEngine::GameObject* Background; // 0x58
		::UnityEngine::UI::Toggle* SelectionToggle; // 0x60
		::Il2CppArray<::UnityEngine::GameObject*>* EnabledDuringSelectionMode; // 0x68
		::System::Boolean _selectionModeEnabled; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_CATEGORYGROUP__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_CATEGORYGROUP_GET_ISSELECTED_OFFSET))(this);
		}

		::System::Void set_IsSelected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_CATEGORYGROUP_SET_ISSELECTED_OFFSET))(this, a1);
		}

		::System::Boolean get_SelectionModeEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_CATEGORYGROUP_GET_SELECTIONMODEENABLED_OFFSET))(this);
		}

		::System::Void set_SelectionModeEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_CATEGORYGROUP_SET_SELECTIONMODEENABLED_OFFSET))(this, a1);
		}

		::System::Void set_IsShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_CATEGORYGROUP_SET_ISSHOW_OFFSET))(this, a1);
		}
	};
}

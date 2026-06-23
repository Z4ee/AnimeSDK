#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3DEA03B4D83AE9E3.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger_DragCallbackOld; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger_TwoPointDragCallback; }

#define MOLEMOLE_UIMAINCITYCAMERACONTROLCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15EF5E10)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityCameraControlContext_TypeDefinitionIndex = 52846;

	class UIMainCityCameraControlContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::UnityEngine::UI::Extension::UIImgEventTrigger_DragCallbackOld* dragCallback; // 0x28
		::UnityEngine::Events::UnityAction* OnSnapBtnCallback; // 0x30
		::UnityEngine::UI::Extension::UIImgEventTrigger_TwoPointDragCallback* dragTwoPointCallback; // 0x38
		::UnityEngine::Events::UnityAction* OnFullScreenBtnCallback; // 0x40
		::UnityEngine::Events::UnityAction* OnBottomAddBtnCallback; // 0x48
		::UnityEngine::Events::UnityAction* OnResetBtnCallback; // 0x50
		::UnityEngine::Events::UnityAction* OnSkillBtnCallback; // 0x58
		::System::Func_1<::System::Boolean>* IsEnableSwitchBtnFunc; // 0x60
		::UnityEngine::Events::UnityAction* OnBottomReduceCallback; // 0x68
		::UnityEngine::Events::UnityAction_1<::System::Single>* OnSliderChangeCallback; // 0x70
		::UnityEngine::Events::UnityAction* OnSwitchBtnCallback; // 0x78
		::UnityEngine::Events::UnityAction* OnCloseBtnCallback; // 0x80
		::UnityEngine::Events::UnityAction* OnHideBtnCallback; // 0x88
		::System::Nullable_1<::System::Boolean> IsLoadLastFrame; // 0x90
		::System::Nullable_1<::System::Boolean> IsLoadLastVolume; // 0x92
		::System::Nullable_1<::System::Int32> InitShowPhotoFrameID; // 0x94
		::Enum_3_3DEA03B4D83AE9E3 SourceType; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERACONTROLCONTEXT__CTOR_OFFSET))(this);
		}
	};
}

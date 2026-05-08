#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIMarcelNameWidgetController_Display.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_BE6BF7909AD9D940;
class Class_2_7B42B6FF00235964;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_FIXPOSITION_OFFSET UNITYSDK_OFFSET(0x147BECE0)
#define MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_HIDETEAMGOOD_OFFSET UNITYSDK_OFFSET(0x147BD560)
#define MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_INITIALIZEINFO_OFFSET UNITYSDK_OFFSET(0x147BDD60)
#define MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x147BF160)
#define MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_ONTEAMMESSAGE_OFFSET UNITYSDK_OFFSET(0x147BE4D0)
#define MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x147BF1F0)
#define MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x147BD750)
#define MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_SETINFO_OFFSET UNITYSDK_OFFSET(0x147BDF50)
#define MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_SHOWNAME_OFFSET UNITYSDK_OFFSET(0x147BD4E0)
#define MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_UPDATEEMOJISCALE_OFFSET UNITYSDK_OFFSET(0x147BE9D0)
#define MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x147BF270)
#define MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER__ONTEAMMESSAGE_G__HIDEEMOTIONICON_14_0_OFFSET UNITYSDK_OFFSET(0x147BF2D0)
#define MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x147BF310)
#define MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x147BF3A0)
#define MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x147BF430)

namespace MoleMole
{
	inline static constexpr unsigned int UIMarcelNameWidgetController_TypeDefinitionIndex = 73025;

	class UIMarcelNameWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_7B42B6FF00235964* _view; // 0x2B8
		::UnityEngine::RectTransform* _selfTransform; // 0x2C0
		::UnityEngine::RectTransform* _parentTransform; // 0x2C8
		::UnityEngine::Transform* _targetTransform; // 0x2D0
		::UnityEngine::Vector2 _lastPosition; // 0x2D8
		::MoleMole::UIMarcelNameWidgetController_Display _display; // 0x2E0
		::System::UInt32 _entityID; // 0x2E4
		::Class_1_BE6BF7909AD9D940* _info; // 0x2E8
		::Foundation::Coroutine::CoroutineHandle _emojiHandle; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void ShowName(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_SHOWNAME_OFFSET))(this, value);
		}

		::System::Void HideTeamGood()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_HIDETEAMGOOD_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnTeamMessage(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_ONTEAMMESSAGE_OFFSET))(this, args);
		}

		::System::Boolean FixPosition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_FIXPOSITION_OFFSET))(this);
		}

		::System::Void UpdateEmojiScale(::UnityEngine::Vector3 worldPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_UPDATEEMOJISCALE_OFFSET))(this, worldPosition);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitializeInfo(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_INITIALIZEINFO_OFFSET))(this, uid);
		}

		::System::Void SetInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_SETINFO_OFFSET))(this);
		}

		::System::Void _OnTeamMessage_g__HideEmotionIcon_14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER__ONTEAMMESSAGE_G__HIDEEMOTIONICON_14_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

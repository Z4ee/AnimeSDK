#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MonoCustomPropertyUIControllerBase.h"

class Class_2_F79521A937A96176_1;
namespace MoleMole { class CharacterScriptConfig_ConfigCustomPropertyUIWithMatThresholdValue; }
namespace MoleMole { class UIControlReference; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIINLEVELEVELYNPANELCHILDWINDOWCONTROLLER_CHANGELIGHTMAT_OFFSET UNITYSDK_OFFSET(0x198476A0)
#define MOLEMOLE_UIINLEVELEVELYNPANELCHILDWINDOWCONTROLLER_CHANGEMATERIAL_OFFSET UNITYSDK_OFFSET(0x198479E0)
#define MOLEMOLE_UIINLEVELEVELYNPANELCHILDWINDOWCONTROLLER_COLLECTALLANIMATIONCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x198474B0)
#define MOLEMOLE_UIINLEVELEVELYNPANELCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x198463D0)
#define MOLEMOLE_UIINLEVELEVELYNPANELCHILDWINDOWCONTROLLER_HANDLEALLCUSTOMPROPERTIESONSHOW_OFFSET UNITYSDK_OFFSET(0x198468B0)
#define MOLEMOLE_UIINLEVELEVELYNPANELCHILDWINDOWCONTROLLER_HANDLECUSTOMPROPERTY_OFFSET UNITYSDK_OFFSET(0x19846A10)
#define MOLEMOLE_UIINLEVELEVELYNPANELCHILDWINDOWCONTROLLER_ONATTACHENTITY_OFFSET UNITYSDK_OFFSET(0x19846500)
#define MOLEMOLE_UIINLEVELEVELYNPANELCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x198463E0)
#define MOLEMOLE_UIINLEVELEVELYNPANELCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19846470)
#define MOLEMOLE_UIINLEVELEVELYNPANELCHILDWINDOWCONTROLLER_SETTHRESHOLDLINEPOSITION_OFFSET UNITYSDK_OFFSET(0x19846720)
#define MOLEMOLE_UIINLEVELEVELYNPANELCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19847A20)
#define MOLEMOLE_UIINLEVELEVELYNPANELCHILDWINDOWCONTROLLER___BASE_ONATTACHENTITY_OFFSET UNITYSDK_OFFSET(0x19847A30)
#define MOLEMOLE_UIINLEVELEVELYNPANELCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19847AC0)
#define MOLEMOLE_UIINLEVELEVELYNPANELCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19847B50)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelEvelynPanelChildWindowController_TypeDefinitionIndex = 54543;

	class UIInLevelEvelynPanelChildWindowController : public ::MonoCustomPropertyUIControllerBase
	{
	public:
		// static const ::System::String* BULLET_FADE_IN_ANIM_CLIP; // 0x0
		// static const ::System::String* BULLET_FADE_OUT_ANIM_CLIP; // 0x0
		// static const ::System::String* BULLET_LOOP_ANIM_CLIP; // 0x0
		::Class_2_F79521A937A96176_1* _view; // 0x350
		::System::Single _fillBgParentWidth; // 0x358
		::UnityEngine::RectTransform* _fillRect; // 0x360
		::UnityEngine::Material* _mat1; // 0x368
		::UnityEngine::Material* _mat2; // 0x370
		::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUIWithMatThresholdValue* _realConfig; // 0x378

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEVELYNPANELCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEVELYNPANELCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEVELYNPANELCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEVELYNPANELCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnAttachEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEVELYNPANELCHILDWINDOWCONTROLLER_ONATTACHENTITY_OFFSET))(this);
		}

		::System::Void HandleAllCustomPropertiesOnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEVELYNPANELCHILDWINDOWCONTROLLER_HANDLEALLCUSTOMPROPERTIESONSHOW_OFFSET))(this);
		}

		::System::Void CollectAllAnimationComponents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEVELYNPANELCHILDWINDOWCONTROLLER_COLLECTALLANIMATIONCOMPONENTS_OFFSET))(this);
		}

		::System::Void HandleCustomProperty(::System::String* customTypePlaceholder, ::System::Double oldValue, ::System::Double newValue, ::System::Boolean ignoreAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Double, ::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEVELYNPANELCHILDWINDOWCONTROLLER_HANDLECUSTOMPROPERTY_OFFSET))(this, customTypePlaceholder, oldValue, newValue, ignoreAnimation);
		}

		::System::Void SetThresholdLinePosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEVELYNPANELCHILDWINDOWCONTROLLER_SETTHRESHOLDLINEPOSITION_OFFSET))(this);
		}

		::System::Void ChangeLightMat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEVELYNPANELCHILDWINDOWCONTROLLER_CHANGELIGHTMAT_OFFSET))(this);
		}

		::System::Void ChangeMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEVELYNPANELCHILDWINDOWCONTROLLER_CHANGEMATERIAL_OFFSET))(this);
		}

		::System::Void __base_OnAttachEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEVELYNPANELCHILDWINDOWCONTROLLER___BASE_ONATTACHENTITY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEVELYNPANELCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEVELYNPANELCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}

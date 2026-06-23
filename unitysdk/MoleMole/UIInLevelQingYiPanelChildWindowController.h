#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MonoCustomPropertyUIControllerBase.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_9E7D6F27FE46FBD9;
class ShaderAniHelp;
namespace MoleMole { class CharacterScriptConfig_ConfigCustomPropertyUIWithMatThreshold; }
namespace MoleMole { class UIControlReference; }
namespace System { class String; }
namespace System { template <typename T> class WeakReference_1; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UIINLEVELQINGYIPANELCHILDWINDOWCONTROLLER_CHANGEMATERIAL_OFFSET UNITYSDK_OFFSET(0x186F38B0)
#define MOLEMOLE_UIINLEVELQINGYIPANELCHILDWINDOWCONTROLLER_CLEARPROGRESS_OFFSET UNITYSDK_OFFSET(0x186F3900)
#define MOLEMOLE_UIINLEVELQINGYIPANELCHILDWINDOWCONTROLLER_COLLECTALLANIMATIONCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x186F2490)
#define MOLEMOLE_UIINLEVELQINGYIPANELCHILDWINDOWCONTROLLER_GETANIMCLIPLENGTH_OFFSET UNITYSDK_OFFSET(0x186F33C0)
#define MOLEMOLE_UIINLEVELQINGYIPANELCHILDWINDOWCONTROLLER_GET_MAX_PROGRESS_WIDTH_OFFSET UNITYSDK_OFFSET(0x186F2340)
#define MOLEMOLE_UIINLEVELQINGYIPANELCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x186F2330)
#define MOLEMOLE_UIINLEVELQINGYIPANELCHILDWINDOWCONTROLLER_HANDLEALLCUSTOMPROPERTIESONSHOW_OFFSET UNITYSDK_OFFSET(0x186F2550)
#define MOLEMOLE_UIINLEVELQINGYIPANELCHILDWINDOWCONTROLLER_HANDLECUSTOMPROPERTY_OFFSET UNITYSDK_OFFSET(0x186F2600)
#define MOLEMOLE_UIINLEVELQINGYIPANELCHILDWINDOWCONTROLLER_ONATTACHENTITY_OFFSET UNITYSDK_OFFSET(0x186F3450)
#define MOLEMOLE_UIINLEVELQINGYIPANELCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x186F2350)
#define MOLEMOLE_UIINLEVELQINGYIPANELCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x186F23E0)
#define MOLEMOLE_UIINLEVELQINGYIPANELCHILDWINDOWCONTROLLER_SETMAT_OFFSET UNITYSDK_OFFSET(0x186F2FF0)
#define MOLEMOLE_UIINLEVELQINGYIPANELCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x186F39B0)
#define MOLEMOLE_UIINLEVELQINGYIPANELCHILDWINDOWCONTROLLER___BASE_ONATTACHENTITY_OFFSET UNITYSDK_OFFSET(0x186F39C0)
#define MOLEMOLE_UIINLEVELQINGYIPANELCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x186F3A50)
#define MOLEMOLE_UIINLEVELQINGYIPANELCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x186F3AE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelQingYiPanelChildWindowController_TypeDefinitionIndex = 64662;

	class UIInLevelQingYiPanelChildWindowController : public ::MonoCustomPropertyUIControllerBase
	{
	public:
		// static const ::System::String* Blue2Orange; // 0x0
		// static const ::System::String* Orange2Max; // 0x0
		// static const ::System::String* OrangeMaxKeep; // 0x0
		// static const ::System::String* BulletFadeOut; // 0x0
		::Class_2_9E7D6F27FE46FBD9* _view; // 0x350
		::UnityEngine::Material* _mat1; // 0x358
		::UnityEngine::Material* _mat2; // 0x360
		::System::WeakReference_1<::ShaderAniHelp*>* _lineEFHelp; // 0x368
		::UnityEngine::Color _lineEFOriginalColor; // 0x370
		::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUIWithMatThreshold* _realConfig; // 0x380

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELQINGYIPANELCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELQINGYIPANELCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Single get_MAX_PROGRESS_WIDTH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELQINGYIPANELCHILDWINDOWCONTROLLER_GET_MAX_PROGRESS_WIDTH_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELQINGYIPANELCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELQINGYIPANELCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void CollectAllAnimationComponents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELQINGYIPANELCHILDWINDOWCONTROLLER_COLLECTALLANIMATIONCOMPONENTS_OFFSET))(this);
		}

		::System::Void HandleAllCustomPropertiesOnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELQINGYIPANELCHILDWINDOWCONTROLLER_HANDLEALLCUSTOMPROPERTIESONSHOW_OFFSET))(this);
		}

		::System::Void HandleCustomProperty(::System::String* customTypePlaceholder, ::System::Double oldValue, ::System::Double newValue, ::System::Boolean ignoreAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Double, ::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELQINGYIPANELCHILDWINDOWCONTROLLER_HANDLECUSTOMPROPERTY_OFFSET))(this, customTypePlaceholder, oldValue, newValue, ignoreAnimation);
		}

		::System::Void OnAttachEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELQINGYIPANELCHILDWINDOWCONTROLLER_ONATTACHENTITY_OFFSET))(this);
		}

		::System::Single GetAnimClipLength(::System::String* clipName)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELQINGYIPANELCHILDWINDOWCONTROLLER_GETANIMCLIPLENGTH_OFFSET))(this, clipName);
		}

		::System::Void SetMat(::System::Single percentage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELQINGYIPANELCHILDWINDOWCONTROLLER_SETMAT_OFFSET))(this, percentage);
		}

		::System::Void ChangeMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELQINGYIPANELCHILDWINDOWCONTROLLER_CHANGEMATERIAL_OFFSET))(this);
		}

		::System::Void ClearProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELQINGYIPANELCHILDWINDOWCONTROLLER_CLEARPROGRESS_OFFSET))(this);
		}

		::System::Void __base_OnAttachEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELQINGYIPANELCHILDWINDOWCONTROLLER___BASE_ONATTACHENTITY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELQINGYIPANELCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELQINGYIPANELCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}

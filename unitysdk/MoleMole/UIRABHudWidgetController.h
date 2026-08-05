#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_2CC23FE9C9AEC1B7.h"

class Class_2_1A39E1B51756BF41;
class Class_2_208CC9941471731A_134;
class Class_2_55645CC31E430C8E;
class Class_2_6C4FBB2F60BB54C7;
class Class_2_742C838C9195275D;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRABHudContext; }
namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_CLEARBUFFICONS_OFFSET UNITYSDK_OFFSET(0x1748C640)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_GETBUFFICONIMAGE_OFFSET UNITYSDK_OFFSET(0x1748DB00)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_GETBUFFTEMPLATEOBJECT_OFFSET UNITYSDK_OFFSET(0x1748CF60)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_GETHPANIMATION_OFFSET UNITYSDK_OFFSET(0x1748CF20)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_GETORCREATEBUFFICON_OFFSET UNITYSDK_OFFSET(0x1748D6B0)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_GET_FOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x1748CF00)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x1748BF00)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_HANDLEBUFFADD_OFFSET UNITYSDK_OFFSET(0x1748D130)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_HANDLEBUFFREMOVE_OFFSET UNITYSDK_OFFSET(0x1748D570)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_HIDEELEMENTADVANTAGE_OFFSET UNITYSDK_OFFSET(0x1748CC50)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_INITBUFFTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1748DD30)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_ONBUFFICONCHANGE_OFFSET UNITYSDK_OFFSET(0x1748CFF0)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_ONHPHEAL_OFFSET UNITYSDK_OFFSET(0x1748DFB0)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_ONHPSHIELD_OFFSET UNITYSDK_OFFSET(0x1748E080)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_ONSHOWELEMENTADVANTAGE_OFFSET UNITYSDK_OFFSET(0x1748CCB0)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1748C510)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1748C5D0)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1748BF10)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1748C020)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_REFRESHVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1748CE90)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_RESETBUFFICONSFORREBIND_OFFSET UNITYSDK_OFFSET(0x1748CFA0)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_SETELEMENTICON_OFFSET UNITYSDK_OFFSET(0x1748CD00)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_SET_FOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x1748CF10)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_SHOWELEMENTADVANTAGE_OFFSET UNITYSDK_OFFSET(0x1748CA70)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_TOGGLEDRAG_OFFSET UNITYSDK_OFFSET(0x1748CA20)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER_TOGGLEFOCUS_OFFSET UNITYSDK_OFFSET(0x1748C9B0)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1748E150)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1748E2B0)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1748E2C0)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1748E350)
#define MOLEMOLE_UIRABHUDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1748E3E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABHudWidgetController_TypeDefinitionIndex = 43104;

	class UIRABHudWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::MoleMole::UIRABHudContext* _context; // 0x2C0
		::Class_2_742C838C9195275D* _slotData; // 0x2C8
		::System::UInt32 _bindedEntityID; // 0x2D0
		::Class_2_55645CC31E430C8E* _characterConfig; // 0x2D8
		::Class_2_208CC9941471731A_134* _characterBaseConfig; // 0x2E0
		::MoleMole::MonoGamepadSelectable* _selectable; // 0x2E8
		::UnityEngine::Transform* _FollowTarget_k__BackingField; // 0x2F0
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _buffIconPool; // 0x2F8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::GameObject*>* _buffIconMap; // 0x300
		::UnityEngine::GameObject* _buffTemplateObject; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_NeedCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_GET_NEEDCACHE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ToggleFocus(::System::Boolean isFocus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_TOGGLEFOCUS_OFFSET))(this, isFocus);
		}

		::System::Void ToggleDrag(::System::Boolean isDrag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_TOGGLEDRAG_OFFSET))(this, isDrag);
		}

		::System::Void ShowElementAdvantage(::System::Int32 draggedElementId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_SHOWELEMENTADVANTAGE_OFFSET))(this, draggedElementId);
		}

		::System::Void HideElementAdvantage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_HIDEELEMENTADVANTAGE_OFFSET))(this);
		}

		::System::Void OnShowElementAdvantage(::System::Boolean isUp, ::System::Boolean isDown)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_ONSHOWELEMENTADVANTAGE_OFFSET))(this, isUp, isDown);
		}

		::System::Void SetElementIcon(::Class_2_1A39E1B51756BF41* image)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_SETELEMENTICON_OFFSET))(this, image);
		}

		::System::Void RefreshViewModel(::MoleMole::Battle::Entity* curEntity, ::UnityEngine::Canvas* root, ::Struct_2_2CC23FE9C9AEC1B7 hudData)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Canvas*, ::Struct_2_2CC23FE9C9AEC1B7))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_REFRESHVIEWMODEL_OFFSET))(this, curEntity, root, hudData);
		}

		::UnityEngine::Transform* get_FollowTarget()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_GET_FOLLOWTARGET_OFFSET))(this);
		}

		::System::Void set_FollowTarget(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_SET_FOLLOWTARGET_OFFSET))(this, value);
		}

		::Class_2_FDFE69FE7B72463B* GetHPAnimation()
		{
			return ((::Class_2_FDFE69FE7B72463B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_GETHPANIMATION_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetBuffTemplateObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_GETBUFFTEMPLATEOBJECT_OFFSET))(this);
		}

		::System::Void ResetBuffIconsForRebind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_RESETBUFFICONSFORREBIND_OFFSET))(this);
		}

		::System::Void OnBuffIconChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_ONBUFFICONCHANGE_OFFSET))(this, args);
		}

		::System::Void HandleBuffAdd(::Class_2_6C4FBB2F60BB54C7* buffData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_6C4FBB2F60BB54C7*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_HANDLEBUFFADD_OFFSET))(this, buffData);
		}

		::System::Void HandleBuffRemove(::System::UInt32 buffUuid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_HANDLEBUFFREMOVE_OFFSET))(this, buffUuid);
		}

		::System::Void InitBuffTemplate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_INITBUFFTEMPLATE_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetOrCreateBuffIcon()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_GETORCREATEBUFFICON_OFFSET))(this);
		}

		::UnityEngine::UI::Image* GetBuffIconImage(::UnityEngine::GameObject* buffIconObject)
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_GETBUFFICONIMAGE_OFFSET))(this, buffIconObject);
		}

		::System::Void ClearBuffIcons()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_CLEARBUFFICONS_OFFSET))(this);
		}

		::System::Void OnHPHeal(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_ONHPHEAL_OFFSET))(this, args);
		}

		::System::Void OnHPShield(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER_ONHPSHIELD_OFFSET))(this, args);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

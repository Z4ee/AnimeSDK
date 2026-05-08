#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_9D9172C07F82DDAE;
class Class_2_B8B3B146A4DA74F5;
namespace MoleMole { class UIControlReference; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x1637C170)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_INVOKECLICK_OFFSET UNITYSDK_OFFSET(0x1637E180)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1637C480)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1637C510)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1637C030)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x1637E290)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_REFRESHMUTE_OFFSET UNITYSDK_OFFSET(0x1637D7D0)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1637C7A0)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_SETBANGBOOSTATE_OFFSET UNITYSDK_OFFSET(0x1637E950)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_SETCLICKFUNCTION_OFFSET UNITYSDK_OFFSET(0x1637E130)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_SETEFFECT_OFFSET UNITYSDK_OFFSET(0x1637D160)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_SETEMPTYBG_OFFSET UNITYSDK_OFFSET(0x1637D0F0)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_SETMOREINFO_OFFSET UNITYSDK_OFFSET(0x1637EA10)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_SETSTATE_OFFSET UNITYSDK_OFFSET(0x1637E330)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1637DF20)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1637ECC0)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER__INITVIEW_B__15_0_OFFSET UNITYSDK_OFFSET(0x1637ED20)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1637EE40)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1637EED0)
#define MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1637EF60)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardItemBtnWidgetController_TypeDefinitionIndex = 47160;

	class UIHollowCardItemBtnWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Foundation::AssetRequestHandle _handle; // 0x2B8
		::System::Boolean showBangbooIcon; // 0x2D8
		::System::Boolean bangbooState; // 0x2D9
		::System::Action_2<::UnityEngine::GameObject*, ::System::Int32>* _clickCallback; // 0x2E0
		::System::Int32 _itemid; // 0x2E8
		::Class_2_B8B3B146A4DA74F5* _view; // 0x2F0
		::UnityEngine::Animation* _animation; // 0x2F8
		::Class_2_9D9172C07F82DDAE* _itemModel; // 0x300
		::System::Boolean _enable; // 0x308
		::UnityEngine::Material* _defaultMaterial; // 0x310
		::UnityEngine::GameObject* CombineEffectGo; // 0x318
		::UnityEngine::GameObject* SEffectGo; // 0x320
		::UnityEngine::GameObject* CurseEffectGo; // 0x328
		::UnityEngine::Animation* _iconAnim; // 0x330
		::UnityEngine::Material* _curseMaterial; // 0x338
		::System::Boolean _playCurseAnim; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Int32 itemid, ::System::Boolean dontSetEffect, ::System::Boolean resetEffectState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, itemid, dontSetEffect, resetEffectState);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void SetClickFunction(::System::Action_2<::UnityEngine::GameObject*, ::System::Int32>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::UnityEngine::GameObject*, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_SETCLICKFUNCTION_OFFSET))(this, callback);
		}

		::System::Void InvokeClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_INVOKECLICK_OFFSET))(this);
		}

		::System::Void PlayAnimation(::System::Boolean isfadein)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_PLAYANIMATION_OFFSET))(this, isfadein);
		}

		::System::Void SetEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_SETEFFECT_OFFSET))(this);
		}

		::System::Void RefreshMute(::System::Boolean anim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_REFRESHMUTE_OFFSET))(this, anim);
		}

		::System::Void SetState(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_SETSTATE_OFFSET))(this, enable);
		}

		::System::Void SetBangbooState(::System::Boolean showBangbooIcon)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_SETBANGBOOSTATE_OFFSET))(this, showBangbooIcon);
		}

		::System::Void SetEmptyBg(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_SETEMPTYBG_OFFSET))(this, active);
		}

		::System::Void SetMoreInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_SETMOREINFO_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void _InitView_b__15_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER__INITVIEW_B__15_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_1F0C3293D9525543_1;
class Class_3_BB0EC161EF2B0950;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_GETNUMIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x199D3570)
#define MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_GET_POINTLIST_OFFSET UNITYSDK_OFFSET(0x199D2D20)
#define MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x199D31A0)
#define MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_ONRESETBTNCLICK_OFFSET UNITYSDK_OFFSET(0x199D3620)
#define MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x199D3230)
#define MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x199D2D40)
#define MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x199D3130)
#define MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_PLAYFINISHANIM_OFFSET UNITYSDK_OFFSET(0x199D3680)
#define MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_UPDATESTARDISPLAY_OFFSET UNITYSDK_OFFSET(0x199D32B0)
#define MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x199D3700)
#define MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER__ONUIINIT_B__5_0_OFFSET UNITYSDK_OFFSET(0x199D3770)
#define MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER__ONUIINIT_B__5_1_OFFSET UNITYSDK_OFFSET(0x199D3760)
#define MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x199D37A0)
#define MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x199D3830)
#define MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x199D38C0)
#define MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x199D3950)

namespace MoleMole
{
	inline static constexpr unsigned int UIHackerMiniGameWidgetController_TypeDefinitionIndex = 81640;

	class UIHackerMiniGameWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_1F0C3293D9525543_1* _view; // 0x2C0
		::Class_3_BB0EC161EF2B0950* _model; // 0x2C8
		::UnityEngine::AnimationCurve* pointsFinishCurve; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_PointList()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_GET_POINTLIST_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void UpdateStarDisplay(::System::Int32 curStar, ::System::Int32 starMax)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_UPDATESTARDISPLAY_OFFSET))(this, curStar, starMax);
		}

		::System::Void OnResetBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_ONRESETBTNCLICK_OFFSET))(this);
		}

		::System::String* GetNumImagePath(::System::Int32 num)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_GETNUMIMAGEPATH_OFFSET))(this, num);
		}

		::System::Void PlayFinishAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER_PLAYFINISHANIM_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__5_1(::System::Boolean win, ::System::Int32 _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER__ONUIINIT_B__5_1_OFFSET))(this, win, _);
		}

		::System::Void _OnUIInit_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER__ONUIINIT_B__5_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

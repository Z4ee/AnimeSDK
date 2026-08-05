#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_00928CCF49B5E8DC.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_7ABF2118692E7A85_22;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_DOANIM_OFFSET UNITYSDK_OFFSET(0x18AF4C60)
#define MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_DOROTATE_OFFSET UNITYSDK_OFFSET(0x18AF4F20)
#define MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18AF4E10)
#define MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18AF4EA0)
#define MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18AF4780)
#define MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18AF4DA0)
#define MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_ROTATETARGET_OFFSET UNITYSDK_OFFSET(0x18AF4FB0)
#define MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18AF53F0)
#define MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18AF5450)
#define MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18AF54E0)
#define MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18AF5570)
#define MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18AF5600)

namespace MoleMole
{
	inline static constexpr unsigned int UIHackerMiniGamePointWidgetController_TypeDefinitionIndex = 85854;

	class UIHackerMiniGamePointWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_7ABF2118692E7A85_22* _view; // 0x2C0
		::UnityEngine::Transform* _onRotateRoot; // 0x2C8
		::UnityEngine::Transform* _offRotateRoot; // 0x2D0
		::UnityEngine::AnimationCurve* rotateCurve; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void DoAnim(::Enum_3_00928CCF49B5E8DC animType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_00928CCF49B5E8DC))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_DOANIM_OFFSET))(this, animType);
		}

		::System::Void DoRotate(::System::Single targetAngleZ, ::System::Single animTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_DOROTATE_OFFSET))(this, targetAngleZ, animTime);
		}

		::System::Void RotateTarget(::UnityEngine::Transform* target, ::System::Single targetAngleZ, ::System::Single animTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_ROTATETARGET_OFFSET))(this, target, targetAngleZ, animTime);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

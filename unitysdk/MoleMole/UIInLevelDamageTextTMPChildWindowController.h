#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6F714FF477D2D093.h"
#include "unitysdk/Enum_3_9B987022DA1CF35D.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/UIInLevelDamageTextBaseController.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_DCBC67767A4E41A2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_DOREFRESHTEXTALPHA_OFFSET UNITYSDK_OFFSET(0x16D74760)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_DOREFRESHTEXTSCALE_OFFSET UNITYSDK_OFFSET(0x16D74530)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_GETDAMAGETEXTLENGTH_OFFSET UNITYSDK_OFFSET(0x16D74140)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_MANUALUPDATEANIMATION_OFFSET UNITYSDK_OFFSET(0x16D741C0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16D73A80)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_ONPAUSEGAMESTATECHANGED_OFFSET UNITYSDK_OFFSET(0x16D73EA0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x16D73BD0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16D73C60)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16D73B10)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16D73B60)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_ONUPDATETEXT_OFFSET UNITYSDK_OFFSET(0x16D73CD0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_REFRESHCOMBINEDAMAGETEXT_OFFSET UNITYSDK_OFFSET(0x16D743D0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_SETADDALPHA_OFFSET UNITYSDK_OFFSET(0x16D746A0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_SETADDSCALE_OFFSET UNITYSDK_OFFSET(0x16D744D0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_SETROOTALPHA_OFFSET UNITYSDK_OFFSET(0x16D74840)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_SETROOTSCALE_OFFSET UNITYSDK_OFFSET(0x16D747E0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_SETUPVIEWCOMBINE_OFFSET UNITYSDK_OFFSET(0x16D74260)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x16D73F70)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16D74900)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER___BASE_GETDAMAGETEXTLENGTH_OFFSET UNITYSDK_OFFSET(0x16D74990)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16D74A20)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER___BASE_ONPAUSEGAMESTATECHANGED_OFFSET UNITYSDK_OFFSET(0x16D74AB0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x16D74B50)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16D74C10)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16D74C20)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16D74C30)
#define MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER___BASE_ONUPDATETEXT_OFFSET UNITYSDK_OFFSET(0x16D74CC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelDamageTextTMPChildWindowController_TypeDefinitionIndex = 58896;

	class UIInLevelDamageTextTMPChildWindowController : public ::MoleMole::UIInLevelDamageTextBaseController
	{
	public:
		::System::Single _addScale; // 0x390
		::System::Single _addAlpha; // 0x394
		::System::Single _rootScale; // 0x398
		::System::Single _rootAlpha; // 0x39C
		::Class_2_DCBC67767A4E41A2* _view; // 0x3A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdateText(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_ONUPDATETEXT_OFFSET))(this, deltaTime);
		}

		::System::Void OnPauseGameStateChanged(::System::Boolean isPause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_ONPAUSEGAMESTATECHANGED_OFFSET))(this, isPause);
		}

		::System::Void SetupView(::System::String* damageStr, ::Enum_3_9B987022DA1CF35D damageTextShowType, ::UnityEngine::Vector3 worldPos, ::MoleMole::Battle::Entity* attackee, ::UnityEngine::Material* fontMat, ::System::Boolean isUniqueSkillDamage, ::MoleMole::Config::DamageElementType damageElementType, ::UnityEngine::Vector2 screenSpacePosOffset, ::Enum_3_6F714FF477D2D093 targetFollowType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Enum_3_9B987022DA1CF35D, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::UnityEngine::Material*, ::System::Boolean, ::MoleMole::Config::DamageElementType, ::UnityEngine::Vector2, ::Enum_3_6F714FF477D2D093))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_SETUPVIEW_OFFSET))(this, damageStr, damageTextShowType, worldPos, attackee, fontMat, isUniqueSkillDamage, damageElementType, screenSpacePosOffset, targetFollowType);
		}

		::System::Single GetDamageTextLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_GETDAMAGETEXTLENGTH_OFFSET))(this);
		}

		::System::Void ManualUpdateAnimation(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_MANUALUPDATEANIMATION_OFFSET))(this, deltaTime);
		}

		::System::Void SetupViewCombine(::UnityEngine::Vector3 worldPos, ::MoleMole::Battle::Entity* attackee, ::UnityEngine::Material* fontMat, ::System::Boolean isUniqueSkillDamage, ::MoleMole::Config::DamageElementType damageElementType, ::UnityEngine::Vector2 screenSpacePosOffset, ::Enum_3_6F714FF477D2D093 targetFollowType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::UnityEngine::Material*, ::System::Boolean, ::MoleMole::Config::DamageElementType, ::UnityEngine::Vector2, ::Enum_3_6F714FF477D2D093))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_SETUPVIEWCOMBINE_OFFSET))(this, worldPos, attackee, fontMat, isUniqueSkillDamage, damageElementType, screenSpacePosOffset, targetFollowType);
		}

		::System::Void RefreshCombineDamageText(::System::Single damageNum, ::System::Boolean isCriticalDamage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_REFRESHCOMBINEDAMAGETEXT_OFFSET))(this, damageNum, isCriticalDamage);
		}

		::System::Void SetAddScale(::System::Single scale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_SETADDSCALE_OFFSET))(this, scale);
		}

		::System::Void SetAddAlpha(::System::Single alpha)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_SETADDALPHA_OFFSET))(this, alpha);
		}

		::System::Void SetRootScale(::System::Single scale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_SETROOTSCALE_OFFSET))(this, scale);
		}

		::System::Void SetRootAlpha(::System::Single alpha)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_SETROOTALPHA_OFFSET))(this, alpha);
		}

		::System::Void DoRefreshTextScale()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_DOREFRESHTEXTSCALE_OFFSET))(this);
		}

		::System::Void DoRefreshTextAlpha()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER_DOREFRESHTEXTALPHA_OFFSET))(this);
		}

		::System::Single __base_GetDamageTextLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER___BASE_GETDAMAGETEXTLENGTH_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnPauseGameStateChanged(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER___BASE_ONPAUSEGAMESTATECHANGED_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdateText(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTTMPCHILDWINDOWCONTROLLER___BASE_ONUPDATETEXT_OFFSET))(this, P0);
		}
	};
}

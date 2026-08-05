#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetContext_EPointLockType.h"
#include "unitysdk/Struct_2_032E3093F309FC91.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_482;
namespace MoleMole { class UIUrbanMapPointGroupWidgetContext; }
namespace System { class String; }
namespace System { class Type; }

#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_CALCULATESECTIONUNLOCK_OFFSET UNITYSDK_OFFSET(0x11A03B00)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_FORCECLICKPOPINWORLDSTATE_OFFSET UNITYSDK_OFFSET(0x11A048F0)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETBANNER_OFFSET UNITYSDK_OFFSET(0x11A03320)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x11A03AA0)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETICONWIDGETNAME_OFFSET UNITYSDK_OFFSET(0x119FED30)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETKEY_OFFSET UNITYSDK_OFFSET(0x119FEDC0)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETMAPICON_OFFSET UNITYSDK_OFFSET(0x11A034D0)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETPOINTLOCKTYPE_OFFSET UNITYSDK_OFFSET(0x11A04930)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETTITLEICON_OFFSET UNITYSDK_OFFSET(0x11A02B30)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETTITLEKEY_OFFSET UNITYSDK_OFFSET(0x119FDA40)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETTITLETEXT_OFFSET UNITYSDK_OFFSET(0x119FFE70)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETTRACKCIRCLECOLOR_OFFSET UNITYSDK_OFFSET(0x11A04230)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x119FD120)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GET_FORCEMATCHFILTER_OFFSET UNITYSDK_OFFSET(0x11A03310)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GET_GETAREAMAPPANELCONFIGID_INTERNAL_OFFSET UNITYSDK_OFFSET(0x11A03A90)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GET_GETAREAMAPPANELCONFIGID_OFFSET UNITYSDK_OFFSET(0x11A03A30)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_IGNOREHUDHIDE_OFFSET UNITYSDK_OFFSET(0x11A041F0)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_ISENABLE_OFFSET UNITYSDK_OFFSET(0x119FE1D0)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_ISFINISH_OFFSET UNITYSDK_OFFSET(0x119FEF00)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_ISINWORLDSTATELOCK_OFFSET UNITYSDK_OFFSET(0x11A041B0)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_ISMATCHRADIUS_OFFSET UNITYSDK_OFFSET(0x11A05030)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_ISTRACKING_OFFSET UNITYSDK_OFFSET(0x119FD1C0)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x11A000B0)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_ONSHOWPANEL_OFFSET UNITYSDK_OFFSET(0x119FD880)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_OVERRIDEMAPICON_OFFSET UNITYSDK_OFFSET(0x11A04FD0)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_SHOWPANEL_OFFSET UNITYSDK_OFFSET(0x11A03650)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x119FD040)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointWidgetContext_TypeDefinitionIndex = 65381;

	class UIUrbanMapPointWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_482* MapElement; // 0x28
		::System::Type* ViewModelType; // 0x30
		::MoleMole::UIUrbanMapPointGroupWidgetContext* FromGroupContext; // 0x38
		::System::Int32 _infoPanelId; // 0x40
		::System::Int32 In3dAreaId; // 0x44
		::UnityEngine::Vector2 TempLocalPos; // 0x48
		::System::Boolean SectionUnlock; // 0x50
		::System::Int32 _GetAreaMapPanelConfigId_Internal_k__BackingField; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_ForceMatchFilter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GET_FORCEMATCHFILTER_OFFSET))(this);
		}

		::Struct_2_032E3093F309FC91 GetWorldPosition()
		{
			return ((::Struct_2_032E3093F309FC91(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETWORLDPOSITION_OFFSET))(this);
		}

		::System::String* GetBanner()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETBANNER_OFFSET))(this);
		}

		::Foundation::AssetPath GetMapIcon()
		{
			return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETMAPICON_OFFSET))(this);
		}

		::Foundation::AssetPath GetTitleIcon()
		{
			return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETTITLEICON_OFFSET))(this);
		}

		::System::String* GetTitleText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETTITLETEXT_OFFSET))(this);
		}

		::System::String* GetTitleKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETTITLEKEY_OFFSET))(this);
		}

		::System::Void ShowPanel(::System::Boolean showGroup, ::MoleMole::UIUrbanMapPointGroupWidgetContext* fromGroupContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::UIUrbanMapPointGroupWidgetContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_SHOWPANEL_OFFSET))(this, showGroup, fromGroupContext);
		}

		::System::Int32 get_GetAreaMapPanelConfigId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GET_GETAREAMAPPANELCONFIGID_OFFSET))(this);
		}

		::System::Int32 get_GetAreaMapPanelConfigId_Internal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GET_GETAREAMAPPANELCONFIGID_INTERNAL_OFFSET))(this);
		}

		::System::Void OnShowPanel(::MoleMole::UIUrbanMapPointGroupWidgetContext* fromGroupContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapPointGroupWidgetContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_ONSHOWPANEL_OFFSET))(this, fromGroupContext);
		}

		::System::String* GetDebugInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETDEBUGINFO_OFFSET))(this);
		}

		::System::UInt64 GetKey()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETKEY_OFFSET))(this);
		}

		::System::Boolean IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_ISFINISH_OFFSET))(this);
		}

		::System::Boolean CalculateSectionUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_CALCULATESECTIONUNLOCK_OFFSET))(this);
		}

		::System::Boolean IsInWorldStateLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_ISINWORLDSTATELOCK_OFFSET))(this);
		}

		::System::Boolean IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_ISUNLOCK_OFFSET))(this);
		}

		::System::Boolean IgnoreHudHide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_IGNOREHUDHIDE_OFFSET))(this);
		}

		::System::Boolean IsTracking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_ISTRACKING_OFFSET))(this);
		}

		::UnityEngine::Color GetTrackCircleColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETTRACKCIRCLECOLOR_OFFSET))(this);
		}

		::System::Boolean ForceClickPopInWorldState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_FORCECLICKPOPINWORLDSTATE_OFFSET))(this);
		}

		::MoleMole::UIUrbanMapPointWidgetContext_EPointLockType GetPointLockType()
		{
			return ((::MoleMole::UIUrbanMapPointWidgetContext_EPointLockType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETPOINTLOCKTYPE_OFFSET))(this);
		}

		::System::Boolean IsEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_ISENABLE_OFFSET))(this);
		}

		::System::String* GetIconWidgetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETICONWIDGETNAME_OFFSET))(this);
		}

		::Foundation::AssetPath OverrideMapIcon()
		{
			return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_OVERRIDEMAPICON_OFFSET))(this);
		}

		::System::Boolean IsMatchRadius(::System::Single currentRadius, ::System::Single min, ::System::Single max)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_ISMATCHRADIUS_OFFSET))(this, currentRadius, min, max);
		}
	};
}

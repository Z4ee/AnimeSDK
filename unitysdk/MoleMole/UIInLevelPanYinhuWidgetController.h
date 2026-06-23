#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_AC10B9E6C5758982;
namespace MoleMole { class UIControlReference; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER_GETANIMCLIPLENGTH_OFFSET UNITYSDK_OFFSET(0x177C1A10)
#define MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER_GET_FLAMEANIM_OFFSET UNITYSDK_OFFSET(0x177C1400)
#define MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER_GET_LIGHTANIM_OFFSET UNITYSDK_OFFSET(0x177C1430)
#define MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x177C14D0)
#define MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x177C15E0)
#define MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x177C1560)
#define MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x177C1460)
#define MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x177C1620)
#define MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x177C1C90)
#define MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER__REFRESHVIEW_B__14_0_OFFSET UNITYSDK_OFFSET(0x177C1CA0)
#define MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x177C1DA0)
#define MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x177C1E30)
#define MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x177C1EC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPanYinhuWidgetController_TypeDefinitionIndex = 58929;

	class UIInLevelPanYinhuWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_AC10B9E6C5758982* _view; // 0x2F0
		::Foundation::Coroutine::CoroutineHandle _coroutineHandle; // 0x2F8
		::System::Boolean _isLightOn; // 0x2FC
		::System::Boolean _isFullLightFlameOn; // 0x2FD

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Animation* get_FlameAnim()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER_GET_FLAMEANIM_OFFSET))(this);
		}

		::UnityEngine::Animation* get_LightAnim()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER_GET_LIGHTANIM_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Boolean isLightOn, ::System::Boolean isFullLightFlameOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, isLightOn, isFullLightFlameOn);
		}

		::System::Single GetAnimClipLength(::UnityEngine::Animation* anim, ::System::String* clipName)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER_GETANIMCLIPLENGTH_OFFSET))(this, anim, clipName);
		}

		::System::Void _RefreshView_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER__REFRESHVIEW_B__14_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPANYINHUWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}

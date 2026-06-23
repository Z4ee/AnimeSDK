#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_E398E2F4402CE967;
class Class_2_D6646C12B5D25CB4_1;
namespace MoleMole { class UIControlReference; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1730C3A0)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER_REFRESH_OFFSET UNITYSDK_OFFSET(0x1730C430)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER_SAMPLEANIM_OFFSET UNITYSDK_OFFSET(0x1730CF90)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER_STARTEXPPROGRESS_OFFSET UNITYSDK_OFFSET(0x1730CCC0)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1730D350)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER__PLAYADDEXPANI_OFFSET UNITYSDK_OFFSET(0x1730CE80)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER__PLAYUPGRADELVTEXTANIM_OFFSET UNITYSDK_OFFSET(0x1730D060)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER__REFRESHINITTARGETEXP_OFFSET UNITYSDK_OFFSET(0x1730C7F0)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER__REFRESHPROGRESS_OFFSET UNITYSDK_OFFSET(0x1730C8E0)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER__UPGRADETOCURRLEVEL_OFFSET UNITYSDK_OFFSET(0x1730D1B0)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1730D440)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER___PLAYUPGRADELVTEXTANIM_B__22_0_OFFSET UNITYSDK_OFFSET(0x1730D3B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralExpProgressWidgetController_TypeDefinitionIndex = 57320;

	class UIGeneralExpProgressWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_D6646C12B5D25CB4_1* _view; // 0x2C0
		::Class_1_E398E2F4402CE967* _context; // 0x2C8
		::System::Int32 _startLv; // 0x2D0
		::System::Int32 _startExp; // 0x2D4
		::System::Int32 _toExp; // 0x2D8
		::System::Action* _onPlayFinished; // 0x2E0
		::Class_1_E398E2F4402CE967* data; // 0x2E8
		::System::Boolean _isStarted; // 0x2F0
		::System::Single _upgradePauseDuration; // 0x2F4
		::System::Boolean _isMaxLevel; // 0x2F8
		::System::Int32 totalProgressExpCount; // 0x2FC
		::System::Single startTime; // 0x300
		::System::Boolean _isUpLevel; // 0x304
		::System::Int32 oldLevel; // 0x308
		::System::Int32 newLevel; // 0x30C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void Refresh(::Class_1_E398E2F4402CE967* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E398E2F4402CE967*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER_REFRESH_OFFSET))(this, data);
		}

		::System::Void StartExpProgress(::System::Single inFillDuration, ::System::Single upgradePauseDuration, ::System::Action* onFinished)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER_STARTEXPPROGRESS_OFFSET))(this, inFillDuration, upgradePauseDuration, onFinished);
		}

		::System::Void _PlayAddExpAni()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER__PLAYADDEXPANI_OFFSET))(this);
		}

		::System::Void _PlayUpgradeLvTextAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER__PLAYUPGRADELVTEXTANIM_OFFSET))(this);
		}

		::System::Void _UpgradeToCurrLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER__UPGRADETOCURRLEVEL_OFFSET))(this);
		}

		::System::Void SampleAnim(::UnityEngine::Animation* anim, ::System::String* clipName, ::System::Single normalizedTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER_SAMPLEANIM_OFFSET))(this, anim, clipName, normalizedTime);
		}

		::System::Void _RefreshInitTargetExp(::System::Int32 from, ::System::Int32 to)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER__REFRESHINITTARGETEXP_OFFSET))(this, from, to);
		}

		::System::Void _RefreshProgress(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER__REFRESHPROGRESS_OFFSET))(this, value);
		}

		::System::Void __PlayUpgradeLvTextAnim_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER___PLAYUPGRADELVTEXTANIM_B__22_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}
	};
}

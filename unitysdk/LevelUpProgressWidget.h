#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace DG::Tweening { class Tween; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define LEVELUPPROGRESSWIDGET_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1282EE70)
#define LEVELUPPROGRESSWIDGET_PROGRESSBARANIM_OFFSET UNITYSDK_OFFSET(0x1282E350)
#define LEVELUPPROGRESSWIDGET_PROGRESSBARMAX_OFFSET UNITYSDK_OFFSET(0x1282EC30)
#define LEVELUPPROGRESSWIDGET_RESETPROGRESS_OFFSET UNITYSDK_OFFSET(0x1282EE10)
#define LEVELUPPROGRESSWIDGET_UPDATEPROGRESSMES_OFFSET UNITYSDK_OFFSET(0x1282EB60)
#define LEVELUPPROGRESSWIDGET_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0x1282ECB0)
#define LEVELUPPROGRESSWIDGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1282EF80)
#define LEVELUPPROGRESSWIDGET__PROGRESSBARANIM_B__13_0_OFFSET UNITYSDK_OFFSET(0x1282EFE0)
#define LEVELUPPROGRESSWIDGET__PROGRESSBARANIM_B__13_2_OFFSET UNITYSDK_OFFSET(0x1282EFF0)

inline static constexpr unsigned int LevelUpProgressWidget_TypeDefinitionIndex = 90131;

class LevelUpProgressWidget : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Material* percentMaterial; // 0x18
	::UnityEngine::UI::Image* levelFillBG; // 0x20
	::UnityEngine::UI::Text* toLevel; // 0x28
	::System::Single _lastProgress; // 0x30
	::System::Single _startProgress; // 0x34
	::DG::Tweening::Tween* _barHandler; // 0x38
	::System::Int32 _lastTarLv; // 0x40
	::System::Int32 _tarLv; // 0x44
	::System::Int32 _nowLv; // 0x48
	::System::Single _lastPercent; // 0x4C
	::System::Int32 _lastTarOffset; // 0x50
	::System::Single _lastTar; // 0x54
	::System::Int32 _tarOffset; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEVELUPPROGRESSWIDGET__CTOR_OFFSET))(this);
	}

	::System::Void ProgressBarAnim(::System::Single tar, ::System::Int32 tarLv, ::System::Int32 nowLv, ::System::Int32 tarOffset)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LEVELUPPROGRESSWIDGET_PROGRESSBARANIM_OFFSET))(this, tar, tarLv, nowLv, tarOffset);
	}

	::System::Void ProgressBarMax(::System::Single tar, ::System::Int32 tarLv, ::System::Int32 nowLv)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LEVELUPPROGRESSWIDGET_PROGRESSBARMAX_OFFSET))(this, tar, tarLv, nowLv);
	}

	::System::Void ResetProgress()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEVELUPPROGRESSWIDGET_RESETPROGRESS_OFFSET))(this);
	}

	::System::Void UpdateProgressMes()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEVELUPPROGRESSWIDGET_UPDATEPROGRESSMES_OFFSET))(this);
	}

	::System::Void UpdateProgress(::System::Single percent)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LEVELUPPROGRESSWIDGET_UPDATEPROGRESS_OFFSET))(this, percent);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEVELUPPROGRESSWIDGET_ONDISABLE_OFFSET))(this);
	}

	::System::Single _ProgressBarAnim_b__13_0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LEVELUPPROGRESSWIDGET__PROGRESSBARANIM_B__13_0_OFFSET))(this);
	}

	::System::Void _ProgressBarAnim_b__13_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEVELUPPROGRESSWIDGET__PROGRESSBARANIM_B__13_2_OFFSET))(this);
	}
};

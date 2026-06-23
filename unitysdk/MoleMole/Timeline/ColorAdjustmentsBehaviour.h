#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/ColorAdjustmentsBehaviour_Struct_2_52AD02145F5FCE3A_4.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class ColorAdjustments; }

#define MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x17DF2E00)
#define MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x17DF57F0)
#define MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_METHOD_4_5DF3C0714D769175_OFFSET UNITYSDK_OFFSET(0x17DF3340)
#define MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x17DF5810)
#define MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_METHOD_4_8DC55F996A78F0A1_OFFSET UNITYSDK_OFFSET(0x17DF3910)
#define MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x17DF5800)
#define MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x17DF57E0)
#define MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x17DF3730)
#define MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x17DF4E30)
#define MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x17DF5120)
#define MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x17DF5760)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ColorAdjustmentsBehaviour_TypeDefinitionIndex = 48991;

	class ColorAdjustmentsBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::ColorAdjustmentsBehaviour_Struct_2_52AD02145F5FCE3A_4 _methodParm; // 0x18
		::System::Boolean enabled; // 0xA0
		::System::Boolean active_sceneExposure; // 0xA1
		::System::Boolean use_sceneExposure; // 0xA2
		::System::Single sceneExposure; // 0xA4
		::System::Boolean active_characterExposure; // 0xA8
		::System::Boolean use_characterExposure; // 0xA9
		::System::Single characterExposure; // 0xAC
		::System::Boolean active_skyboxExposure; // 0xB0
		::System::Boolean use_skyboxExposure; // 0xB1
		::System::Single skyboxExposure; // 0xB4
		::System::Boolean active_postExposure; // 0xB8
		::System::Boolean use_postExposure; // 0xB9
		::System::Single postExposure; // 0xBC
		::System::Boolean active_contrast; // 0xC0
		::System::Boolean use_contrast; // 0xC1
		::System::Single contrast; // 0xC4
		::System::Boolean active_colorFilter; // 0xC8
		::System::Boolean use_colorFilter; // 0xC9
		::UnityEngine::Color colorFilter; // 0xCC
		::System::Boolean active_hueShift; // 0xDC
		::System::Boolean use_hueShift; // 0xDD
		::System::Single hueShift; // 0xE0
		::System::Boolean active_saturation; // 0xE4
		::System::Boolean use_saturation; // 0xE5
		::System::Single saturation; // 0xE8
		::System::Boolean active_desaturate; // 0xEC
		::System::Boolean use_desaturate; // 0xED
		::System::Single desaturate; // 0xF0
		::System::Boolean active_applyLutToSkybox; // 0xF4
		::System::Boolean use_applyLutToSkybox; // 0xF5
		::System::Boolean applyLutToSkybox; // 0xF6
		::System::Boolean active_skySaturation; // 0xF7
		::System::Boolean use_skySaturation; // 0xF8
		::System::Single skySaturation; // 0xFC
		::System::Boolean active_skyContrast; // 0x100
		::System::Boolean use_skyContrast; // 0x101
		::System::Single skyContrast; // 0x104
		::System::Boolean active_FXLutTexture; // 0x108
		::System::Boolean use_FXLutTexture; // 0x109
		::UnityEngine::Texture* FXLutTexture; // 0x110
		::System::Boolean active_FXExposure; // 0x118
		::System::Boolean use_FXExposure; // 0x119
		::System::Single FXExposure; // 0x11C
		::System::Boolean active_UseSceneDesaturateMask; // 0x120
		::System::Boolean use_UseSceneDesaturateMask; // 0x121
		::System::Boolean UseSceneDesaturateMask; // 0x122
		::UnityEngine::Rendering::Universal::ColorAdjustments* _ColorAdjustments; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::Universal::ColorAdjustments* Method_4_5DF3C0714D769175(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::ColorAdjustments*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_METHOD_4_5DF3C0714D769175_OFFSET))(this, a1);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_8DC55F996A78F0A1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORADJUSTMENTSBEHAVIOUR_METHOD_4_8DC55F996A78F0A1_OFFSET))(this);
		}
	};
}

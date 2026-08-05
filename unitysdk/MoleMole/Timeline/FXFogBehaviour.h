#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/FXFogBehaviour_Struct_2_52AD02145F5FCE36_14.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class FXFog; }

#define MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x11D766D0)
#define MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_METHOD_4_146BFCE7108816B9_OFFSET UNITYSDK_OFFSET(0x11D77470)
#define MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x11D7B470)
#define MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_METHOD_4_633B57D9E42D768A_OFFSET UNITYSDK_OFFSET(0x11D76DC0)
#define MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x11D7B460)
#define MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x11D7B480)
#define MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x11D7B450)
#define MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x11D771B0)
#define MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x11D79670)
#define MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x11D79A50)
#define MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x11D7B320)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int FXFogBehaviour_TypeDefinitionIndex = 61432;

	class FXFogBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::FXFogBehaviour_Struct_2_52AD02145F5FCE36_14 _methodParm; // 0x18
		::System::Boolean enabled; // 0xE8
		::System::Boolean active_PPFogEnable; // 0xE9
		::System::Boolean use_PPFogEnable; // 0xEA
		::System::Boolean PPFogEnable; // 0xEB
		::System::Boolean active_PPFogStartDistance; // 0xEC
		::System::Boolean use_PPFogStartDistance; // 0xED
		::System::Single PPFogStartDistance; // 0xF0
		::System::Boolean active_PPFogEndDistance; // 0xF4
		::System::Boolean use_PPFogEndDistance; // 0xF5
		::System::Single PPFogEndDistance; // 0xF8
		::System::Boolean active_PPFogEnd2Distance; // 0xFC
		::System::Boolean use_PPFogEnd2Distance; // 0xFD
		::System::Single PPFogEnd2Distance; // 0x100
		::System::Boolean active_PPFogColor; // 0x104
		::System::Boolean use_PPFogColor; // 0x105
		::UnityEngine::Color PPFogColor; // 0x108
		::System::Boolean active_PPFogMaxDensity; // 0x118
		::System::Boolean use_PPFogMaxDensity; // 0x119
		::System::Single PPFogMaxDensity; // 0x11C
		::System::Boolean active_fxFogOverrideCustomData; // 0x120
		::System::Boolean use_fxFogOverrideCustomData; // 0x121
		::System::Boolean fxFogOverrideCustomData; // 0x122
		::System::Boolean active_fxFog; // 0x123
		::System::Boolean use_fxFog; // 0x124
		::System::Boolean fxFog; // 0x125
		::System::Boolean active_fxFogStart; // 0x126
		::System::Boolean use_fxFogStart; // 0x127
		::System::Single fxFogStart; // 0x128
		::System::Boolean active_fxFogStartColor; // 0x12C
		::System::Boolean use_fxFogStartColor; // 0x12D
		::UnityEngine::Color fxFogStartColor; // 0x130
		::System::Boolean active_fxFogDistance; // 0x140
		::System::Boolean use_fxFogDistance; // 0x141
		::System::Single fxFogDistance; // 0x144
		::System::Boolean active_fxFogEndColor; // 0x148
		::System::Boolean use_fxFogEndColor; // 0x149
		::UnityEngine::Color fxFogEndColor; // 0x14C
		::System::Boolean active_fxFogDistance2; // 0x15C
		::System::Boolean use_fxFogDistance2; // 0x15D
		::System::Single fxFogDistance2; // 0x160
		::System::Boolean active_fxFogFinalColor; // 0x164
		::System::Boolean use_fxFogFinalColor; // 0x165
		::UnityEngine::Color fxFogFinalColor; // 0x168
		::System::Boolean active_fxFogForCharacter; // 0x178
		::System::Boolean use_fxFogForCharacter; // 0x179
		::System::Boolean fxFogForCharacter; // 0x17A
		::System::Boolean active_fxFogStartForChar; // 0x17B
		::System::Boolean use_fxFogStartForChar; // 0x17C
		::System::Single fxFogStartForChar; // 0x180
		::System::Boolean active_fxFogDistanceForChar; // 0x184
		::System::Boolean use_fxFogDistanceForChar; // 0x185
		::System::Single fxFogDistanceForChar; // 0x188
		::System::Boolean active_fxFogIntensityForSky; // 0x18C
		::System::Boolean use_fxFogIntensityForSky; // 0x18D
		::System::Single fxFogIntensityForSky; // 0x190
		::System::Boolean active_fxVolumetricFogIntensity; // 0x194
		::System::Boolean use_fxVolumetricFogIntensity; // 0x195
		::System::Single fxVolumetricFogIntensity; // 0x198
		::System::Boolean active_fxFogIntensityForSceneAndChar; // 0x19C
		::System::Boolean use_fxFogIntensityForSceneAndChar; // 0x19D
		::System::Single fxFogIntensityForSceneAndChar; // 0x1A0
		::System::Boolean active_fxFogFixFxFogFinalColorANotWork; // 0x1A4
		::System::Boolean use_fxFogFixFxFogFinalColorANotWork; // 0x1A5
		::System::Boolean fxFogFixFxFogFinalColorANotWork; // 0x1A6
		::System::Boolean active_fxFogKeepCharFogSameAsScene; // 0x1A7
		::System::Boolean use_fxFogKeepCharFogSameAsScene; // 0x1A8
		::System::Boolean fxFogKeepCharFogSameAsScene; // 0x1A9
		::System::Boolean active_fxFogIntensityScaleForChar; // 0x1AA
		::System::Boolean use_fxFogIntensityScaleForChar; // 0x1AB
		::System::Single fxFogIntensityScaleForChar; // 0x1AC
		::System::Boolean active_fxFogBlendWithFogCard; // 0x1B0
		::System::Boolean use_fxFogBlendWithFogCard; // 0x1B1
		::System::Single fxFogBlendWithFogCard; // 0x1B4
		::UnityEngine::Rendering::Universal::FXFog* _FXFog; // 0x1B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_146BFCE7108816B9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_METHOD_4_146BFCE7108816B9_OFFSET))(this);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::Universal::FXFog* Method_4_633B57D9E42D768A(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::FXFog*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_METHOD_4_633B57D9E42D768A_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/GlitchBehaviour_Struct_2_52AD02145F5FCE3A_22.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class Glitch; }

#define MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x141A8030)
#define MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x141ACA90)
#define MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x141ACA80)
#define MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_METHOD_4_86D92BEB6F08DBB0_OFFSET UNITYSDK_OFFSET(0x141A88E0)
#define MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_METHOD_4_8DC55F996A78F0A1_OFFSET UNITYSDK_OFFSET(0x141A9050)
#define MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x141ACAA0)
#define MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x141ACA70)
#define MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x141A8CD0)
#define MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x141AB9D0)
#define MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x141ABE60)
#define MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x141AC980)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int GlitchBehaviour_TypeDefinitionIndex = 70512;

	class GlitchBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::GlitchBehaviour_Struct_2_52AD02145F5FCE3A_22 _methodParm; // 0x18
		::System::Boolean enabled; // 0x148
		::System::Boolean active_glitchAngle; // 0x149
		::System::Boolean use_glitchAngle; // 0x14A
		::System::Single glitchAngle; // 0x14C
		::System::Boolean active_rShift; // 0x150
		::System::Boolean use_rShift; // 0x151
		::System::Single rShift; // 0x154
		::System::Boolean active_gShift; // 0x158
		::System::Boolean use_gShift; // 0x159
		::System::Single gShift; // 0x15C
		::System::Boolean active_bShift; // 0x160
		::System::Boolean use_bShift; // 0x161
		::System::Single bShift; // 0x164
		::System::Boolean active_noiseScale; // 0x168
		::System::Boolean use_noiseScale; // 0x169
		::System::Single noiseScale; // 0x16C
		::System::Boolean active_noiseDistortion; // 0x170
		::System::Boolean use_noiseDistortion; // 0x171
		::System::Single noiseDistortion; // 0x174
		::System::Boolean active_distortionThreshold; // 0x178
		::System::Boolean use_distortionThreshold; // 0x179
		::System::Single distortionThreshold; // 0x17C
		::System::Boolean active_lineThresholdMin; // 0x180
		::System::Boolean use_lineThresholdMin; // 0x181
		::System::Single lineThresholdMin; // 0x184
		::System::Boolean active_lineThresholdMax; // 0x188
		::System::Boolean use_lineThresholdMax; // 0x189
		::System::Single lineThresholdMax; // 0x18C
		::System::Boolean active_lineBrightness; // 0x190
		::System::Boolean use_lineBrightness; // 0x191
		::System::Single lineBrightness; // 0x194
		::System::Boolean active_texture; // 0x198
		::System::Boolean use_texture; // 0x199
		::UnityEngine::Texture* texture; // 0x1A0
		::System::Boolean active_mask; // 0x1A8
		::System::Boolean use_mask; // 0x1A9
		::System::Boolean mask; // 0x1AA
		::System::Boolean active_maskTexTillingOffset; // 0x1AB
		::System::Boolean use_maskTexTillingOffset; // 0x1AC
		::UnityEngine::Vector4 maskTexTillingOffset; // 0x1B0
		::System::Boolean active_randomOpacity; // 0x1C0
		::System::Boolean use_randomOpacity; // 0x1C1
		::System::Boolean randomOpacity; // 0x1C2
		::System::Boolean active_randomOpacityTillingOffset; // 0x1C3
		::System::Boolean use_randomOpacityTillingOffset; // 0x1C4
		::UnityEngine::Vector4 randomOpacityTillingOffset; // 0x1C8
		::System::Boolean active_randomOpacitySpeed; // 0x1D8
		::System::Boolean use_randomOpacitySpeed; // 0x1D9
		::UnityEngine::Vector2 randomOpacitySpeed; // 0x1DC
		::System::Boolean active_overrideMap3DColor; // 0x1E4
		::System::Boolean use_overrideMap3DColor; // 0x1E5
		::UnityEngine::Color overrideMap3DColor; // 0x1E8
		::System::Boolean active_characterDistortionMaskOn; // 0x1F8
		::System::Boolean use_characterDistortionMaskOn; // 0x1F9
		::System::Boolean characterDistortionMaskOn; // 0x1FA
		::System::Boolean active_glitchIntensity; // 0x1FB
		::System::Boolean use_glitchIntensity; // 0x1FC
		::System::Single glitchIntensity; // 0x200
		::System::Boolean active_glitchNoiseTex; // 0x204
		::System::Boolean use_glitchNoiseTex; // 0x205
		::UnityEngine::Texture* glitchNoiseTex; // 0x208
		::System::Boolean active_glitchNoiseTexSpeed; // 0x210
		::System::Boolean use_glitchNoiseTexSpeed; // 0x211
		::System::Single glitchNoiseTexSpeed; // 0x214
		::System::Boolean active_glitchRand; // 0x218
		::System::Boolean use_glitchRand; // 0x219
		::System::Single glitchRand; // 0x21C
		::System::Boolean active_glitchTex1; // 0x220
		::System::Boolean use_glitchTex1; // 0x221
		::UnityEngine::Texture* glitchTex1; // 0x228
		::System::Boolean active_glitchTex1ScaleOffset; // 0x230
		::System::Boolean use_glitchTex1ScaleOffset; // 0x231
		::UnityEngine::Vector2 glitchTex1ScaleOffset; // 0x234
		::System::Boolean active_glitchTex1Amount; // 0x23C
		::System::Boolean use_glitchTex1Amount; // 0x23D
		::System::Single glitchTex1Amount; // 0x240
		::System::Boolean active_glitchTex1Range; // 0x244
		::System::Boolean use_glitchTex1Range; // 0x245
		::System::Single glitchTex1Range; // 0x248
		::System::Boolean active_glitchTex2; // 0x24C
		::System::Boolean use_glitchTex2; // 0x24D
		::UnityEngine::Texture* glitchTex2; // 0x250
		::System::Boolean active_glitchTex2ScaleOffset; // 0x258
		::System::Boolean use_glitchTex2ScaleOffset; // 0x259
		::UnityEngine::Vector2 glitchTex2ScaleOffset; // 0x25C
		::System::Boolean active_glitchTex2Amount; // 0x264
		::System::Boolean use_glitchTex2Amount; // 0x265
		::System::Single glitchTex2Amount; // 0x268
		::System::Boolean active_glitchTex2Range; // 0x26C
		::System::Boolean use_glitchTex2Range; // 0x26D
		::System::Single glitchTex2Range; // 0x270
		::UnityEngine::Rendering::Universal::Glitch* _Glitch; // 0x278

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::Universal::Glitch* Method_4_86D92BEB6F08DBB0(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::Glitch*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_METHOD_4_86D92BEB6F08DBB0_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_8DC55F996A78F0A1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_METHOD_4_8DC55F996A78F0A1_OFFSET))(this);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}
	};
}

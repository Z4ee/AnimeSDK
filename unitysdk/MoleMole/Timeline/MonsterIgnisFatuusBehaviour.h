#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/MonsterIgnisFatuusBehaviour_Struct_2_52AD02145F5FCE3A_19.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/BlendModes.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class MonsterIgnisFatuus; }

#define MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x1450DB70)
#define MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_METHOD_4_146BFCE7108816B9_OFFSET UNITYSDK_OFFSET(0x1450EB30)
#define MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x145130C0)
#define MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x145130B0)
#define MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x145130D0)
#define MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x145130A0)
#define MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_METHOD_4_B1B2A61BD0D6C04F_OFFSET UNITYSDK_OFFSET(0x1450E360)
#define MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1450E750)
#define MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x14511D70)
#define MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x14512260)
#define MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x14512EE0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MonsterIgnisFatuusBehaviour_TypeDefinitionIndex = 61999;

	class MonsterIgnisFatuusBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::MonsterIgnisFatuusBehaviour_Struct_2_52AD02145F5FCE3A_19 _methodParm; // 0x18
		::System::Boolean enabled; // 0x170
		::System::Boolean active_monsterIgnisFatuusActive; // 0x171
		::System::Boolean use_monsterIgnisFatuusActive; // 0x172
		::System::Boolean monsterIgnisFatuusActive; // 0x173
		::System::Boolean active_monsterIgnisFatuusDownSample; // 0x174
		::System::Boolean use_monsterIgnisFatuusDownSample; // 0x175
		::System::Int32 monsterIgnisFatuusDownSample; // 0x178
		::System::Boolean active_monsterIgnisFatuusSelfMask; // 0x17C
		::System::Boolean use_monsterIgnisFatuusSelfMask; // 0x17D
		::System::Boolean monsterIgnisFatuusSelfMask; // 0x17E
		::System::Boolean active_monsterIgnisFatuusDepthMaskOffset; // 0x17F
		::System::Boolean use_monsterIgnisFatuusDepthMaskOffset; // 0x180
		::System::Single monsterIgnisFatuusDepthMaskOffset; // 0x184
		::System::Boolean active_monsterIgnisFatuusColorBlendMode; // 0x188
		::System::Boolean use_monsterIgnisFatuusColorBlendMode; // 0x189
		::UnityEngine::Rendering::Universal::BlendModes monsterIgnisFatuusColorBlendMode; // 0x18C
		::System::Boolean active_useMonsterIgnisFatuusColorTextureAlpha; // 0x190
		::System::Boolean use_useMonsterIgnisFatuusColorTextureAlpha; // 0x191
		::System::Boolean useMonsterIgnisFatuusColorTextureAlpha; // 0x192
		::System::Boolean active_monsterIgnisFatuusColor; // 0x193
		::System::Boolean use_monsterIgnisFatuusColor; // 0x194
		::UnityEngine::Color monsterIgnisFatuusColor; // 0x198
		::System::Boolean active_monsterIgnisFatuusColorTexture; // 0x1A8
		::System::Boolean use_monsterIgnisFatuusColorTexture; // 0x1A9
		::UnityEngine::Texture* monsterIgnisFatuusColorTexture; // 0x1B0
		::System::Boolean active_monsterIgnisFatuusColorTextureUVScale; // 0x1B8
		::System::Boolean use_monsterIgnisFatuusColorTextureUVScale; // 0x1B9
		::UnityEngine::Vector2 monsterIgnisFatuusColorTextureUVScale; // 0x1BC
		::System::Boolean active_monsterIgnisFatuusColorTextureUVSpeed; // 0x1C4
		::System::Boolean use_monsterIgnisFatuusColorTextureUVSpeed; // 0x1C5
		::UnityEngine::Vector2 monsterIgnisFatuusColorTextureUVSpeed; // 0x1C8
		::System::Boolean active_monsterIgnisFatuusNoiseTexture; // 0x1D0
		::System::Boolean use_monsterIgnisFatuusNoiseTexture; // 0x1D1
		::UnityEngine::Texture* monsterIgnisFatuusNoiseTexture; // 0x1D8
		::System::Boolean active_monsterIgnisFatuusNoiseTextureUVScale; // 0x1E0
		::System::Boolean use_monsterIgnisFatuusNoiseTextureUVScale; // 0x1E1
		::UnityEngine::Vector2 monsterIgnisFatuusNoiseTextureUVScale; // 0x1E4
		::System::Boolean active_monsterIgnisFatuusNoiseTextureUVSpeed; // 0x1EC
		::System::Boolean use_monsterIgnisFatuusNoiseTextureUVSpeed; // 0x1ED
		::UnityEngine::Vector2 monsterIgnisFatuusNoiseTextureUVSpeed; // 0x1F0
		::System::Boolean active_monsterIgnisFatuusDistortionIntensity; // 0x1F8
		::System::Boolean use_monsterIgnisFatuusDistortionIntensity; // 0x1F9
		::System::Single monsterIgnisFatuusDistortionIntensity; // 0x1FC
		::System::Boolean active_monsterIgnisFatuusDistortionOffset; // 0x200
		::System::Boolean use_monsterIgnisFatuusDistortionOffset; // 0x201
		::System::Single monsterIgnisFatuusDistortionOffset; // 0x204
		::System::Boolean active_monsterIgnisFatuusBlurPow; // 0x208
		::System::Boolean use_monsterIgnisFatuusBlurPow; // 0x209
		::System::Single monsterIgnisFatuusBlurPow; // 0x20C
		::System::Boolean active_monsterIgnisFatuusColorDistortionIntensity; // 0x210
		::System::Boolean use_monsterIgnisFatuusColorDistortionIntensity; // 0x211
		::System::Single monsterIgnisFatuusColorDistortionIntensity; // 0x214
		::System::Boolean active_monsterIgnisFatuusColor2; // 0x218
		::System::Boolean use_monsterIgnisFatuusColor2; // 0x219
		::UnityEngine::Color monsterIgnisFatuusColor2; // 0x21C
		::System::Boolean active_monsterIgnisFatuusColorTexture2; // 0x22C
		::System::Boolean use_monsterIgnisFatuusColorTexture2; // 0x22D
		::UnityEngine::Texture* monsterIgnisFatuusColorTexture2; // 0x230
		::System::Boolean active_monsterIgnisFatuusColorTextureUVScale2; // 0x238
		::System::Boolean use_monsterIgnisFatuusColorTextureUVScale2; // 0x239
		::UnityEngine::Vector2 monsterIgnisFatuusColorTextureUVScale2; // 0x23C
		::System::Boolean active_monsterIgnisFatuusColorTextureUVSpeed2; // 0x244
		::System::Boolean use_monsterIgnisFatuusColorTextureUVSpeed2; // 0x245
		::UnityEngine::Vector2 monsterIgnisFatuusColorTextureUVSpeed2; // 0x248
		::System::Boolean active_monsterIgnisFatuusNoiseTexture2; // 0x250
		::System::Boolean use_monsterIgnisFatuusNoiseTexture2; // 0x251
		::UnityEngine::Texture* monsterIgnisFatuusNoiseTexture2; // 0x258
		::System::Boolean active_monsterIgnisFatuusNoiseTextureUVScale2; // 0x260
		::System::Boolean use_monsterIgnisFatuusNoiseTextureUVScale2; // 0x261
		::UnityEngine::Vector2 monsterIgnisFatuusNoiseTextureUVScale2; // 0x264
		::System::Boolean active_monsterIgnisFatuusNoiseTextureUVSpeed2; // 0x26C
		::System::Boolean use_monsterIgnisFatuusNoiseTextureUVSpeed2; // 0x26D
		::UnityEngine::Vector2 monsterIgnisFatuusNoiseTextureUVSpeed2; // 0x270
		::System::Boolean active_monsterIgnisFatuusDistortionIntensity2; // 0x278
		::System::Boolean use_monsterIgnisFatuusDistortionIntensity2; // 0x279
		::System::Single monsterIgnisFatuusDistortionIntensity2; // 0x27C
		::System::Boolean active_monsterIgnisFatuusDistortionOffset2; // 0x280
		::System::Boolean use_monsterIgnisFatuusDistortionOffset2; // 0x281
		::System::Single monsterIgnisFatuusDistortionOffset2; // 0x284
		::System::Boolean active_monsterIgnisFatuusBlurPow2; // 0x288
		::System::Boolean use_monsterIgnisFatuusBlurPow2; // 0x289
		::System::Single monsterIgnisFatuusBlurPow2; // 0x28C
		::System::Boolean active_monsterIgnisFatuusColorDistortionIntensity2; // 0x290
		::System::Boolean use_monsterIgnisFatuusColorDistortionIntensity2; // 0x291
		::System::Single monsterIgnisFatuusColorDistortionIntensity2; // 0x294
		::System::Boolean active_monsterIgnisFatuusSoftEdgePow; // 0x298
		::System::Boolean use_monsterIgnisFatuusSoftEdgePow; // 0x299
		::System::Single monsterIgnisFatuusSoftEdgePow; // 0x29C
		::System::Boolean active_monsterIgnisFatuusSoftEdgeRange; // 0x2A0
		::System::Boolean use_monsterIgnisFatuusSoftEdgeRange; // 0x2A1
		::System::Single monsterIgnisFatuusSoftEdgeRange; // 0x2A4
		::System::Boolean active_monsterIgnisFatuusDisappearStart; // 0x2A8
		::System::Boolean use_monsterIgnisFatuusDisappearStart; // 0x2A9
		::System::Single monsterIgnisFatuusDisappearStart; // 0x2AC
		::System::Boolean active_monsterIgnisFatuusDisappearEnd; // 0x2B0
		::System::Boolean use_monsterIgnisFatuusDisappearEnd; // 0x2B1
		::System::Single monsterIgnisFatuusDisappearEnd; // 0x2B4
		::System::Boolean active_monsterIgnisFatuusFadeIn; // 0x2B8
		::System::Boolean use_monsterIgnisFatuusFadeIn; // 0x2B9
		::System::Single monsterIgnisFatuusFadeIn; // 0x2BC
		::System::Boolean active_monsterIgnisFatuusFadeOut; // 0x2C0
		::System::Boolean use_monsterIgnisFatuusFadeOut; // 0x2C1
		::System::Single monsterIgnisFatuusFadeOut; // 0x2C4
		::UnityEngine::Rendering::Universal::MonsterIgnisFatuus* _MonsterIgnisFatuus; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Rendering::Universal::MonsterIgnisFatuus* Method_4_B1B2A61BD0D6C04F(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::MonsterIgnisFatuus*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_METHOD_4_B1B2A61BD0D6C04F_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_146BFCE7108816B9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_METHOD_4_146BFCE7108816B9_OFFSET))(this);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}
	};
}

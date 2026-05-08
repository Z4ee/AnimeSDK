#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/CharacterIgnisFatuusBehaviour_Struct_2_52AD02145F5FCE3A_17.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/BlendModes.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class CharacterIgnisFatuus; }

#define MOLEMOLE_TIMELINE_CHARACTERIGNISFATUUSBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x11784480)
#define MOLEMOLE_TIMELINE_CHARACTERIGNISFATUUSBEHAVIOUR_METHOD_4_042ACE89AB98D68C_OFFSET UNITYSDK_OFFSET(0x11784C70)
#define MOLEMOLE_TIMELINE_CHARACTERIGNISFATUUSBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x117899D0)
#define MOLEMOLE_TIMELINE_CHARACTERIGNISFATUUSBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x117899C0)
#define MOLEMOLE_TIMELINE_CHARACTERIGNISFATUUSBEHAVIOUR_METHOD_4_8DC55F996A78F0A1_OFFSET UNITYSDK_OFFSET(0x11785440)
#define MOLEMOLE_TIMELINE_CHARACTERIGNISFATUUSBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x117899E0)
#define MOLEMOLE_TIMELINE_CHARACTERIGNISFATUUSBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x117899B0)
#define MOLEMOLE_TIMELINE_CHARACTERIGNISFATUUSBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x11785060)
#define MOLEMOLE_TIMELINE_CHARACTERIGNISFATUUSBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x11788680)
#define MOLEMOLE_TIMELINE_CHARACTERIGNISFATUUSBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x11788B70)
#define MOLEMOLE_TIMELINE_CHARACTERIGNISFATUUSBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x117897F0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int CharacterIgnisFatuusBehaviour_TypeDefinitionIndex = 56583;

	class CharacterIgnisFatuusBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::CharacterIgnisFatuusBehaviour_Struct_2_52AD02145F5FCE3A_17 _methodParm; // 0x18
		::System::Boolean enabled; // 0x170
		::System::Boolean active_characterIgnisFatuusActive; // 0x171
		::System::Boolean use_characterIgnisFatuusActive; // 0x172
		::System::Boolean characterIgnisFatuusActive; // 0x173
		::System::Boolean active_characterIgnisFatuusDownSample; // 0x174
		::System::Boolean use_characterIgnisFatuusDownSample; // 0x175
		::System::Int32 characterIgnisFatuusDownSample; // 0x178
		::System::Boolean active_characterIgnisFatuusSelfMask; // 0x17C
		::System::Boolean use_characterIgnisFatuusSelfMask; // 0x17D
		::System::Boolean characterIgnisFatuusSelfMask; // 0x17E
		::System::Boolean active_characterIgnisFatuusDepthMaskOffset; // 0x17F
		::System::Boolean use_characterIgnisFatuusDepthMaskOffset; // 0x180
		::System::Single characterIgnisFatuusDepthMaskOffset; // 0x184
		::System::Boolean active_characterIgnisFatuusColorBlendMode; // 0x188
		::System::Boolean use_characterIgnisFatuusColorBlendMode; // 0x189
		::UnityEngine::Rendering::Universal::BlendModes characterIgnisFatuusColorBlendMode; // 0x18C
		::System::Boolean active_useIgnisFatuusColorTextureAlpha; // 0x190
		::System::Boolean use_useIgnisFatuusColorTextureAlpha; // 0x191
		::System::Boolean useIgnisFatuusColorTextureAlpha; // 0x192
		::System::Boolean active_characterIgnisFatuusColor; // 0x193
		::System::Boolean use_characterIgnisFatuusColor; // 0x194
		::UnityEngine::Color characterIgnisFatuusColor; // 0x198
		::System::Boolean active_characterIgnisFatuusColorTexture; // 0x1A8
		::System::Boolean use_characterIgnisFatuusColorTexture; // 0x1A9
		::UnityEngine::Texture* characterIgnisFatuusColorTexture; // 0x1B0
		::System::Boolean active_characterIgnisFatuusColorTextureUVScale; // 0x1B8
		::System::Boolean use_characterIgnisFatuusColorTextureUVScale; // 0x1B9
		::UnityEngine::Vector2 characterIgnisFatuusColorTextureUVScale; // 0x1BC
		::System::Boolean active_characterIgnisFatuusColorTextureUVSpeed; // 0x1C4
		::System::Boolean use_characterIgnisFatuusColorTextureUVSpeed; // 0x1C5
		::UnityEngine::Vector2 characterIgnisFatuusColorTextureUVSpeed; // 0x1C8
		::System::Boolean active_characterIgnisFatuusNoiseTexture; // 0x1D0
		::System::Boolean use_characterIgnisFatuusNoiseTexture; // 0x1D1
		::UnityEngine::Texture* characterIgnisFatuusNoiseTexture; // 0x1D8
		::System::Boolean active_characterIgnisFatuusNoiseTextureUVScale; // 0x1E0
		::System::Boolean use_characterIgnisFatuusNoiseTextureUVScale; // 0x1E1
		::UnityEngine::Vector2 characterIgnisFatuusNoiseTextureUVScale; // 0x1E4
		::System::Boolean active_characterIgnisFatuusNoiseTextureUVSpeed; // 0x1EC
		::System::Boolean use_characterIgnisFatuusNoiseTextureUVSpeed; // 0x1ED
		::UnityEngine::Vector2 characterIgnisFatuusNoiseTextureUVSpeed; // 0x1F0
		::System::Boolean active_characterIgnisFatuusDistortionIntensity; // 0x1F8
		::System::Boolean use_characterIgnisFatuusDistortionIntensity; // 0x1F9
		::System::Single characterIgnisFatuusDistortionIntensity; // 0x1FC
		::System::Boolean active_characterIgnisFatuusDistortionOffset; // 0x200
		::System::Boolean use_characterIgnisFatuusDistortionOffset; // 0x201
		::System::Single characterIgnisFatuusDistortionOffset; // 0x204
		::System::Boolean active_characterIgnisFatuusBlurPow; // 0x208
		::System::Boolean use_characterIgnisFatuusBlurPow; // 0x209
		::System::Single characterIgnisFatuusBlurPow; // 0x20C
		::System::Boolean active_characterIgnisFatuusColorDistortionIntensity; // 0x210
		::System::Boolean use_characterIgnisFatuusColorDistortionIntensity; // 0x211
		::System::Single characterIgnisFatuusColorDistortionIntensity; // 0x214
		::System::Boolean active_characterIgnisFatuusColor2; // 0x218
		::System::Boolean use_characterIgnisFatuusColor2; // 0x219
		::UnityEngine::Color characterIgnisFatuusColor2; // 0x21C
		::System::Boolean active_characterIgnisFatuusColorTexture2; // 0x22C
		::System::Boolean use_characterIgnisFatuusColorTexture2; // 0x22D
		::UnityEngine::Texture* characterIgnisFatuusColorTexture2; // 0x230
		::System::Boolean active_characterIgnisFatuusColorTextureUVScale2; // 0x238
		::System::Boolean use_characterIgnisFatuusColorTextureUVScale2; // 0x239
		::UnityEngine::Vector2 characterIgnisFatuusColorTextureUVScale2; // 0x23C
		::System::Boolean active_characterIgnisFatuusColorTextureUVSpeed2; // 0x244
		::System::Boolean use_characterIgnisFatuusColorTextureUVSpeed2; // 0x245
		::UnityEngine::Vector2 characterIgnisFatuusColorTextureUVSpeed2; // 0x248
		::System::Boolean active_characterIgnisFatuusNoiseTexture2; // 0x250
		::System::Boolean use_characterIgnisFatuusNoiseTexture2; // 0x251
		::UnityEngine::Texture* characterIgnisFatuusNoiseTexture2; // 0x258
		::System::Boolean active_characterIgnisFatuusNoiseTextureUVScale2; // 0x260
		::System::Boolean use_characterIgnisFatuusNoiseTextureUVScale2; // 0x261
		::UnityEngine::Vector2 characterIgnisFatuusNoiseTextureUVScale2; // 0x264
		::System::Boolean active_characterIgnisFatuusNoiseTextureUVSpeed2; // 0x26C
		::System::Boolean use_characterIgnisFatuusNoiseTextureUVSpeed2; // 0x26D
		::UnityEngine::Vector2 characterIgnisFatuusNoiseTextureUVSpeed2; // 0x270
		::System::Boolean active_characterIgnisFatuusDistortionIntensity2; // 0x278
		::System::Boolean use_characterIgnisFatuusDistortionIntensity2; // 0x279
		::System::Single characterIgnisFatuusDistortionIntensity2; // 0x27C
		::System::Boolean active_characterIgnisFatuusDistortionOffset2; // 0x280
		::System::Boolean use_characterIgnisFatuusDistortionOffset2; // 0x281
		::System::Single characterIgnisFatuusDistortionOffset2; // 0x284
		::System::Boolean active_characterIgnisFatuusBlurPow2; // 0x288
		::System::Boolean use_characterIgnisFatuusBlurPow2; // 0x289
		::System::Single characterIgnisFatuusBlurPow2; // 0x28C
		::System::Boolean active_characterIgnisFatuusColorDistortionIntensity2; // 0x290
		::System::Boolean use_characterIgnisFatuusColorDistortionIntensity2; // 0x291
		::System::Single characterIgnisFatuusColorDistortionIntensity2; // 0x294
		::System::Boolean active_characterIgnisFatuusSoftEdgePow; // 0x298
		::System::Boolean use_characterIgnisFatuusSoftEdgePow; // 0x299
		::System::Single characterIgnisFatuusSoftEdgePow; // 0x29C
		::System::Boolean active_characterIgnisFatuusSoftEdgeRange; // 0x2A0
		::System::Boolean use_characterIgnisFatuusSoftEdgeRange; // 0x2A1
		::System::Single characterIgnisFatuusSoftEdgeRange; // 0x2A4
		::System::Boolean active_characterIgnisFatuusDisappearStart; // 0x2A8
		::System::Boolean use_characterIgnisFatuusDisappearStart; // 0x2A9
		::System::Single characterIgnisFatuusDisappearStart; // 0x2AC
		::System::Boolean active_characterIgnisFatuusDisappearEnd; // 0x2B0
		::System::Boolean use_characterIgnisFatuusDisappearEnd; // 0x2B1
		::System::Single characterIgnisFatuusDisappearEnd; // 0x2B4
		::System::Boolean active_characterIgnisFatuusFadeIn; // 0x2B8
		::System::Boolean use_characterIgnisFatuusFadeIn; // 0x2B9
		::System::Single characterIgnisFatuusFadeIn; // 0x2BC
		::System::Boolean active_characterIgnisFatuusFadeOut; // 0x2C0
		::System::Boolean use_characterIgnisFatuusFadeOut; // 0x2C1
		::System::Single characterIgnisFatuusFadeOut; // 0x2C4
		::UnityEngine::Rendering::Universal::CharacterIgnisFatuus* _CharacterIgnisFatuus; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERIGNISFATUUSBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERIGNISFATUUSBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERIGNISFATUUSBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERIGNISFATUUSBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERIGNISFATUUSBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERIGNISFATUUSBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERIGNISFATUUSBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERIGNISFATUUSBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::Universal::CharacterIgnisFatuus* Method_4_042ACE89AB98D68C(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::CharacterIgnisFatuus*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERIGNISFATUUSBEHAVIOUR_METHOD_4_042ACE89AB98D68C_OFFSET))(this, a1);
		}

		::System::Void Method_4_8DC55F996A78F0A1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERIGNISFATUUSBEHAVIOUR_METHOD_4_8DC55F996A78F0A1_OFFSET))(this);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERIGNISFATUUSBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}
	};
}

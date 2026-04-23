#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class BlusherData; }
namespace System { class Object; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define RPGTOOLS_TIMELINE_EMOFACEBLUSHERMIXER_METHOD_2_8109799954907A39_OFFSET UNITYSDK_OFFSET(0xB8C5620)
#define RPGTOOLS_TIMELINE_EMOFACEBLUSHERMIXER_METHOD_2_96D8D9FE684DFFAE_OFFSET UNITYSDK_OFFSET(0xB8C5AA0)
#define RPGTOOLS_TIMELINE_EMOFACEBLUSHERMIXER_METHOD_2_B4C7FF14B7DA1CD3_OFFSET UNITYSDK_OFFSET(0xB8C5510)
#define RPGTOOLS_TIMELINE_EMOFACEBLUSHERMIXER_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xB8C4C10)
#define RPGTOOLS_TIMELINE_EMOFACEBLUSHERMIXER_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB8C4C90)
#define RPGTOOLS_TIMELINE_EMOFACEBLUSHERMIXER__CCTOR_OFFSET UNITYSDK_OFFSET(0xB8C5B30)
#define RPGTOOLS_TIMELINE_EMOFACEBLUSHERMIXER__CTOR_OFFSET UNITYSDK_OFFSET(0xB8C5B20)
#define RPGTOOLS_TIMELINE_EMOFACEBLUSHERMIXER___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xB8C5BE0)
#define RPGTOOLS_TIMELINE_EMOFACEBLUSHERMIXER___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB8C5BF0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int EmoFaceBlusherMixer_TypeDefinitionIndex = 44856;

	class EmoFaceBlusherMixer : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		static ::System::Int32* StaticGet_CheekColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EmoFaceBlusherMixer_TypeDefinitionIndex)->GetStaticField(0x115A0);
		}
		static ::System::Int32* StaticGet_ShadowIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EmoFaceBlusherMixer_TypeDefinitionIndex)->GetStaticField(0x115A4);
		}
		static ::System::Int32* StaticGet_ShyIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EmoFaceBlusherMixer_TypeDefinitionIndex)->GetStaticField(0x115A8);
		}
		static ::System::Int32* StaticGet_SpecularIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EmoFaceBlusherMixer_TypeDefinitionIndex)->GetStaticField(0x115AC);
		}
		static ::System::Int32* StaticGet_ShyColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EmoFaceBlusherMixer_TypeDefinitionIndex)->GetStaticField(0x115B0);
		}
		static ::System::Int32* StaticGet_ShadowColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EmoFaceBlusherMixer_TypeDefinitionIndex)->GetStaticField(0x115B4);
		}
		static ::System::Int32* StaticGet_MapThreshold()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EmoFaceBlusherMixer_TypeDefinitionIndex)->GetStaticField(0x115B8);
		}
		static ::System::Int32* StaticGet_CheekIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EmoFaceBlusherMixer_TypeDefinitionIndex)->GetStaticField(0x115BC);
		}
		::UnityEngine::SkinnedMeshRenderer* Renderer; // 0x10
		::RPGTools::Timeline::BlusherData* OriginData; // 0x18
		::System::Boolean FirstFrame; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOFACEBLUSHERMIXER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOFACEBLUSHERMIXER__CCTOR_OFFSET))();
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOFACEBLUSHERMIXER_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOFACEBLUSHERMIXER_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		static ::UnityEngine::Color Method_2_96D8D9FE684DFFAE(::UnityEngine::Color a1, ::System::Single a2)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOFACEBLUSHERMIXER_METHOD_2_96D8D9FE684DFFAE_OFFSET))(a1, a2);
		}

		::System::Void Method_2_8109799954907A39(::RPGTools::Timeline::BlusherData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::BlusherData*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOFACEBLUSHERMIXER_METHOD_2_8109799954907A39_OFFSET))(this, a1);
		}

		::System::Int32 Method_2_B4C7FF14B7DA1CD3(::UnityEngine::SkinnedMeshRenderer* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOFACEBLUSHERMIXER_METHOD_2_B4C7FF14B7DA1CD3_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOFACEBLUSHERMIXER___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOFACEBLUSHERMIXER___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}
	};
}

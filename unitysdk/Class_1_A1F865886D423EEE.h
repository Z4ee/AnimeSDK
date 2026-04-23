#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A1F865886D423EEE_MixerType.h"
#include "unitysdk/RPG/Client/Emotion/EmoPartType.h"
#include "unitysdk/Struct_2_CF025126BE358084.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Animations/AnimationClipPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationLayerMixerPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationMixerPlayable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace RPG::Client { class MonoEmoPlayableGraph; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }

#define CLASS_1_A1F865886D423EEE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9242940)
#define CLASS_1_A1F865886D423EEE_METHOD_1_0561AC0B333408CE_OFFSET UNITYSDK_OFFSET(0x9244AB0)
#define CLASS_1_A1F865886D423EEE_METHOD_1_212AF17406B18044_OFFSET UNITYSDK_OFFSET(0x92437F0)
#define CLASS_1_A1F865886D423EEE_METHOD_1_2853790203C3B9A0_OFFSET UNITYSDK_OFFSET(0x9243530)
#define CLASS_1_A1F865886D423EEE_METHOD_1_3787A0F2EA7FE74E_OFFSET UNITYSDK_OFFSET(0x9243BF0)
#define CLASS_1_A1F865886D423EEE_METHOD_1_38E69361EEE42B73_OFFSET UNITYSDK_OFFSET(0x9243990)
#define CLASS_1_A1F865886D423EEE_METHOD_1_3A99FBD95F050B8E_OFFSET UNITYSDK_OFFSET(0x92429F0)
#define CLASS_1_A1F865886D423EEE_METHOD_1_46859238AB0A73BC_OFFSET UNITYSDK_OFFSET(0x9242DC0)
#define CLASS_1_A1F865886D423EEE_METHOD_1_5C7D56ED9C011146_OFFSET UNITYSDK_OFFSET(0x9244560)
#define CLASS_1_A1F865886D423EEE_METHOD_1_6208FA43F279AEEE_OFFSET UNITYSDK_OFFSET(0x9242B40)
#define CLASS_1_A1F865886D423EEE_METHOD_1_7BD278425D663CED_1_OFFSET UNITYSDK_OFFSET(0x9243F40)
#define CLASS_1_A1F865886D423EEE_METHOD_1_7BD278425D663CED_OFFSET UNITYSDK_OFFSET(0x9243C70)
#define CLASS_1_A1F865886D423EEE_METHOD_1_912401BC254EA138_OFFSET UNITYSDK_OFFSET(0x9243B50)
#define CLASS_1_A1F865886D423EEE_METHOD_1_9258752F7C89A5F1_OFFSET UNITYSDK_OFFSET(0x9243050)
#define CLASS_1_A1F865886D423EEE_METHOD_1_96E471E14B60639F_OFFSET UNITYSDK_OFFSET(0x92449B0)
#define CLASS_1_A1F865886D423EEE_METHOD_1_9F6ECC272DF0C4BB_1_OFFSET UNITYSDK_OFFSET(0x92433A0)
#define CLASS_1_A1F865886D423EEE_METHOD_1_9F6ECC272DF0C4BB_OFFSET UNITYSDK_OFFSET(0x9243210)
#define CLASS_1_A1F865886D423EEE_METHOD_1_B450FF0D131C4D0D_OFFSET UNITYSDK_OFFSET(0x92447F0)
#define CLASS_1_A1F865886D423EEE_METHOD_1_B54C722164482C65_OFFSET UNITYSDK_OFFSET(0x9243860)
#define CLASS_1_A1F865886D423EEE_METHOD_1_FAF388C79ED9715D_OFFSET UNITYSDK_OFFSET(0x9244210)
#define CLASS_1_A1F865886D423EEE__CTOR_OFFSET UNITYSDK_OFFSET(0x9244B40)

inline static constexpr unsigned int Class_1_A1F865886D423EEE_TypeDefinitionIndex = 67703;

class Class_1_A1F865886D423EEE : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A1F865886D423EEE_TypeDefinitionIndex)->GetStaticField(0x118E0);
	}
	::UnityEngine::AnimationClip* Field_1_9; // 0x10
	::RPG::Client::MonoEmoPlayableGraph* Field_1_8; // 0x18
	::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>* Field_1_0; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Animations::AnimationClipPlayable>* Field_1_7; // 0x28
	::System::Int32 Field_1_11; // 0x30
	::Class_1_A1F865886D423EEE_MixerType Field_1_4; // 0x34
	::RPG::Client::Emotion::EmoPartType Field_1_10; // 0x38
	::System::Boolean Field_1_1; // 0x3C
	::UnityEngine::Animations::AnimationLayerMixerPlayable Field_1_3; // 0x40
	::UnityEngine::Animations::AnimationMixerPlayable Field_1_2; // 0x50
	::UnityEngine::Animations::AnimationClipPlayable Field_1_6; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1F865886D423EEE__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1F865886D423EEE_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_3A99FBD95F050B8E(::UnityEngine::Playables::PlayableGraph& a1, ::UnityEngine::Animations::AnimationMixerPlayable& a2, ::RPG::Client::Emotion::EmoPartType a3, ::RPG::Client::MonoEmoPlayableGraph* a4, ::System::Boolean a5, ::UnityEngine::AnimationClip* a6, ::System::Int32 a7)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph&, ::UnityEngine::Animations::AnimationMixerPlayable&, ::RPG::Client::Emotion::EmoPartType, ::RPG::Client::MonoEmoPlayableGraph*, ::System::Boolean, ::UnityEngine::AnimationClip*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A1F865886D423EEE_METHOD_1_3A99FBD95F050B8E_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_9258752F7C89A5F1(::UnityEngine::Playables::PlayableGraph& a1, ::UnityEngine::Animations::AnimationMixerPlayable& a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph&, ::UnityEngine::Animations::AnimationMixerPlayable&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A1F865886D423EEE_METHOD_1_9258752F7C89A5F1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2853790203C3B9A0(::UnityEngine::Playables::PlayableGraph& a1, ::UnityEngine::Animations::AnimationMixerPlayable& a2, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph&, ::UnityEngine::Animations::AnimationMixerPlayable&, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>*))((::PBYTE)hIl2Cpp + CLASS_1_A1F865886D423EEE_METHOD_1_2853790203C3B9A0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_38E69361EEE42B73(::UnityEngine::Playables::PlayableGraph& a1, ::UnityEngine::Animations::AnimationMixerPlayable& a2, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>* a3, ::Class_1_A1F865886D423EEE_MixerType a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph&, ::UnityEngine::Animations::AnimationMixerPlayable&, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>*, ::Class_1_A1F865886D423EEE_MixerType))((::PBYTE)hIl2Cpp + CLASS_1_A1F865886D423EEE_METHOD_1_38E69361EEE42B73_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_912401BC254EA138(::UnityEngine::Playables::PlayableGraph& a1, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph&, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>*))((::PBYTE)hIl2Cpp + CLASS_1_A1F865886D423EEE_METHOD_1_912401BC254EA138_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3787A0F2EA7FE74E(::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>*))((::PBYTE)hIl2Cpp + CLASS_1_A1F865886D423EEE_METHOD_1_3787A0F2EA7FE74E_OFFSET))(this, a1);
	}

	::System::Void Method_1_9F6ECC272DF0C4BB(::UnityEngine::Playables::PlayableGraph& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph&))((::PBYTE)hIl2Cpp + CLASS_1_A1F865886D423EEE_METHOD_1_9F6ECC272DF0C4BB_OFFSET))(this, a1);
	}

	::System::Void Method_1_6208FA43F279AEEE(::UnityEngine::Playables::PlayableGraph& a1, ::UnityEngine::Animations::AnimationMixerPlayable& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph&, ::UnityEngine::Animations::AnimationMixerPlayable&))((::PBYTE)hIl2Cpp + CLASS_1_A1F865886D423EEE_METHOD_1_6208FA43F279AEEE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7BD278425D663CED(::UnityEngine::Playables::PlayableGraph& a1, ::UnityEngine::Animations::AnimationMixerPlayable& a2, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph&, ::UnityEngine::Animations::AnimationMixerPlayable&, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A1F865886D423EEE_METHOD_1_7BD278425D663CED_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_FAF388C79ED9715D(::UnityEngine::Playables::PlayableGraph& a1, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph&, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>*))((::PBYTE)hIl2Cpp + CLASS_1_A1F865886D423EEE_METHOD_1_FAF388C79ED9715D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B450FF0D131C4D0D(::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>*))((::PBYTE)hIl2Cpp + CLASS_1_A1F865886D423EEE_METHOD_1_B450FF0D131C4D0D_OFFSET))(this, a1);
	}

	::System::Void Method_1_9F6ECC272DF0C4BB_1(::UnityEngine::Playables::PlayableGraph& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph&))((::PBYTE)hIl2Cpp + CLASS_1_A1F865886D423EEE_METHOD_1_9F6ECC272DF0C4BB_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_46859238AB0A73BC(::UnityEngine::Playables::PlayableGraph& a1, ::UnityEngine::Animations::AnimationMixerPlayable& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph&, ::UnityEngine::Animations::AnimationMixerPlayable&))((::PBYTE)hIl2Cpp + CLASS_1_A1F865886D423EEE_METHOD_1_46859238AB0A73BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7BD278425D663CED_1(::UnityEngine::Playables::PlayableGraph& a1, ::UnityEngine::Animations::AnimationMixerPlayable& a2, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph&, ::UnityEngine::Animations::AnimationMixerPlayable&, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A1F865886D423EEE_METHOD_1_7BD278425D663CED_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_5C7D56ED9C011146(::UnityEngine::Playables::PlayableGraph& a1, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph&, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>*))((::PBYTE)hIl2Cpp + CLASS_1_A1F865886D423EEE_METHOD_1_5C7D56ED9C011146_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_96E471E14B60639F(::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>*))((::PBYTE)hIl2Cpp + CLASS_1_A1F865886D423EEE_METHOD_1_96E471E14B60639F_OFFSET))(this, a1);
	}

	::Class_1_A1F865886D423EEE_MixerType Method_1_212AF17406B18044(::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>* a1)
	{
		return ((::Class_1_A1F865886D423EEE_MixerType(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>*))((::PBYTE)hIl2Cpp + CLASS_1_A1F865886D423EEE_METHOD_1_212AF17406B18044_OFFSET))(this, a1);
	}

	::System::Void Method_1_B54C722164482C65(::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>* a1, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>* a2, ::System::Boolean& a3, ::System::Boolean& a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>*, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>*, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_A1F865886D423EEE_METHOD_1_B54C722164482C65_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::AnimationClip* Method_1_0561AC0B333408CE(::System::String* a1)
	{
		return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A1F865886D423EEE_METHOD_1_0561AC0B333408CE_OFFSET))(this, a1);
	}
};

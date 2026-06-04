#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Emotion/EmoPartType.h"
#include "unitysdk/Struct_2_CF025126BE358084.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Animations/AnimationClipPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationLayerMixerPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationMixerPlayable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

class Class_1_913398509518AE8D;
namespace RPG::Client { class MonoEmoPlayableGraph; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AvatarMask; }

#define CLASS_1_C3442CFB67797449_METHOD_1_4DA75A84B4031672_OFFSET UNITYSDK_OFFSET(0xACB1D00)
#define CLASS_1_C3442CFB67797449_METHOD_1_53BE96F98780AE85_OFFSET UNITYSDK_OFFSET(0xACB1BE0)
#define CLASS_1_C3442CFB67797449_METHOD_1_6BA7BB45F0BA72F4_OFFSET UNITYSDK_OFFSET(0xACB1350)
#define CLASS_1_C3442CFB67797449_METHOD_1_783225B2A0229A54_OFFSET UNITYSDK_OFFSET(0xACB1710)
#define CLASS_1_C3442CFB67797449_METHOD_1_B679E9E5B94C6DE8_OFFSET UNITYSDK_OFFSET(0xACB1E30)
#define CLASS_1_C3442CFB67797449_METHOD_1_CC220716308E7D40_OFFSET UNITYSDK_OFFSET(0xACB1940)
#define CLASS_1_C3442CFB67797449_METHOD_1_F00B760D9C546ACF_OFFSET UNITYSDK_OFFSET(0xACB1620)
#define CLASS_1_C3442CFB67797449__CTOR_OFFSET UNITYSDK_OFFSET(0xACB0860)

inline static constexpr unsigned int Class_1_C3442CFB67797449_TypeDefinitionIndex = 68660;

class Class_1_C3442CFB67797449 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C3442CFB67797449_TypeDefinitionIndex)->GetStaticField(0x8490);
	}
	::Class_1_913398509518AE8D* Field_1_1; // 0x10
	::RPG::Client::MonoEmoPlayableGraph* Field_1_2; // 0x18
	::Class_1_913398509518AE8D* Field_1_3; // 0x20
	::Class_1_913398509518AE8D* Field_1_4; // 0x28
	::Class_1_913398509518AE8D* Field_1_5; // 0x30
	::UnityEngine::Animations::AnimationClipPlayable Field_1_6; // 0x38
	::UnityEngine::Animations::AnimationClipPlayable Field_1_7; // 0x48
	::RPG::Client::Emotion::EmoPartType Field_1_8; // 0x58
	::System::Boolean Field_1_9; // 0x5C
	::System::Boolean Field_1_10; // 0x5D
	::UnityEngine::Animations::AnimationMixerPlayable Field_1_11; // 0x60
	::UnityEngine::Animations::AnimationMixerPlayable Field_1_12; // 0x70
	::UnityEngine::Animations::AnimationMixerPlayable Field_1_13; // 0x80
	::UnityEngine::Animations::AnimationMixerPlayable Field_1_14; // 0x90
	::UnityEngine::Animations::AnimationLayerMixerPlayable Field_1_15; // 0xA0

	::System::Void _ctor(::UnityEngine::Playables::PlayableGraph& a1, ::RPG::Client::Emotion::EmoPartType a2, ::RPG::Client::MonoEmoPlayableGraph* a3, ::UnityEngine::AvatarMask* a4, ::UnityEngine::AnimationClip* a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph&, ::RPG::Client::Emotion::EmoPartType, ::RPG::Client::MonoEmoPlayableGraph*, ::UnityEngine::AvatarMask*, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + CLASS_1_C3442CFB67797449__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_6BA7BB45F0BA72F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3442CFB67797449_METHOD_1_6BA7BB45F0BA72F4_OFFSET))(this);
	}

	::System::Void Method_1_F00B760D9C546ACF(::UnityEngine::Playables::PlayableGraph& a1, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>* a2, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph&, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>*, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C3442CFB67797449_METHOD_1_F00B760D9C546ACF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_783225B2A0229A54(::UnityEngine::Playables::PlayableGraph& a1, ::UnityEngine::AnimationClip* a2, ::UnityEngine::AnimationClip* a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph&, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C3442CFB67797449_METHOD_1_783225B2A0229A54_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_CC220716308E7D40(::System::Single a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C3442CFB67797449_METHOD_1_CC220716308E7D40_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_53BE96F98780AE85(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C3442CFB67797449_METHOD_1_53BE96F98780AE85_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4DA75A84B4031672(::UnityEngine::Playables::PlayableGraph& a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C3442CFB67797449_METHOD_1_4DA75A84B4031672_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B679E9E5B94C6DE8(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C3442CFB67797449_METHOD_1_B679E9E5B94C6DE8_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Emotion/EmoPartType.h"
#include "unitysdk/Struct_2_CF025126BE358084.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Animations/AnimationClipPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationLayerMixerPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationMixerPlayable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

class Class_1_A1F865886D423EEE;
namespace RPG::Client { class MonoEmoPlayableGraph; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AvatarMask; }

#define CLASS_1_BCECFCD0C8771868_METHOD_1_2676091ED3B32FBB_OFFSET UNITYSDK_OFFSET(0x11654EB0)
#define CLASS_1_BCECFCD0C8771868_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x116547A0)
#define CLASS_1_BCECFCD0C8771868_METHOD_1_53BE96F98780AE85_OFFSET UNITYSDK_OFFSET(0x11654D90)
#define CLASS_1_BCECFCD0C8771868_METHOD_1_AE91585BB97FBA03_OFFSET UNITYSDK_OFFSET(0x11654840)
#define CLASS_1_BCECFCD0C8771868_METHOD_1_B679E9E5B94C6DE8_OFFSET UNITYSDK_OFFSET(0x11654FE0)
#define CLASS_1_BCECFCD0C8771868_METHOD_1_CC220716308E7D40_OFFSET UNITYSDK_OFFSET(0x11654AF0)
#define CLASS_1_BCECFCD0C8771868_METHOD_1_EAEE1A6C5BF7DB7F_OFFSET UNITYSDK_OFFSET(0x11654930)
#define CLASS_1_BCECFCD0C8771868__CTOR_OFFSET UNITYSDK_OFFSET(0x11653CC0)

inline static constexpr unsigned int Class_1_BCECFCD0C8771868_TypeDefinitionIndex = 60284;

class Class_1_BCECFCD0C8771868 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BCECFCD0C8771868_TypeDefinitionIndex)->GetStaticField(0x12610);
	}
	::Class_1_A1F865886D423EEE* Field_1_11; // 0x10
	::Class_1_A1F865886D423EEE* Field_1_10; // 0x18
	::RPG::Client::MonoEmoPlayableGraph* Field_1_13; // 0x20
	::Class_1_A1F865886D423EEE* Field_1_6; // 0x28
	::Class_1_A1F865886D423EEE* Field_1_5; // 0x30
	::UnityEngine::Animations::AnimationLayerMixerPlayable Field_1_1; // 0x38
	::UnityEngine::Animations::AnimationMixerPlayable Field_1_2; // 0x48
	::UnityEngine::Animations::AnimationMixerPlayable Field_1_8; // 0x58
	::System::Boolean Field_1_15; // 0x68
	::System::Boolean Field_1_14; // 0x69
	::RPG::Client::Emotion::EmoPartType Field_1_0; // 0x6C
	::UnityEngine::Animations::AnimationClipPlayable Field_1_4; // 0x70
	::UnityEngine::Animations::AnimationClipPlayable Field_1_9; // 0x80
	::UnityEngine::Animations::AnimationMixerPlayable Field_1_3; // 0x90
	::UnityEngine::Animations::AnimationMixerPlayable Field_1_7; // 0xA0

	::System::Void _ctor(::UnityEngine::Playables::PlayableGraph& a1, ::RPG::Client::Emotion::EmoPartType a2, ::RPG::Client::MonoEmoPlayableGraph* a3, ::UnityEngine::AvatarMask* a4, ::UnityEngine::AnimationClip* a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph&, ::RPG::Client::Emotion::EmoPartType, ::RPG::Client::MonoEmoPlayableGraph*, ::UnityEngine::AvatarMask*, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + CLASS_1_BCECFCD0C8771868__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCECFCD0C8771868_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_AE91585BB97FBA03(::UnityEngine::Playables::PlayableGraph& a1, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>* a2, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph&, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>*, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BCECFCD0C8771868_METHOD_1_AE91585BB97FBA03_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_EAEE1A6C5BF7DB7F(::UnityEngine::Playables::PlayableGraph& a1, ::UnityEngine::AnimationClip* a2, ::UnityEngine::AnimationClip* a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph&, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BCECFCD0C8771868_METHOD_1_EAEE1A6C5BF7DB7F_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_CC220716308E7D40(::System::Single a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BCECFCD0C8771868_METHOD_1_CC220716308E7D40_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_53BE96F98780AE85(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BCECFCD0C8771868_METHOD_1_53BE96F98780AE85_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2676091ED3B32FBB(::UnityEngine::Playables::PlayableGraph& a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BCECFCD0C8771868_METHOD_1_2676091ED3B32FBB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B679E9E5B94C6DE8(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BCECFCD0C8771868_METHOD_1_B679E9E5B94C6DE8_OFFSET))(this, a1, a2);
	}
};

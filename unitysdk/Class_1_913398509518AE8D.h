#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_913398509518AE8D_MixerType.h"
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

#define CLASS_1_913398509518AE8D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4402A0)
#define CLASS_1_913398509518AE8D_METHOD_1_0561AC0B333408CE_OFFSET UNITYSDK_OFFSET(0xC442500)
#define CLASS_1_913398509518AE8D_METHOD_1_212AF17406B18044_OFFSET UNITYSDK_OFFSET(0xC4410D0)
#define CLASS_1_913398509518AE8D_METHOD_1_38E69361EEE42B73_OFFSET UNITYSDK_OFFSET(0xC4412D0)
#define CLASS_1_913398509518AE8D_METHOD_1_46859238AB0A73BC_OFFSET UNITYSDK_OFFSET(0xC4406F0)
#define CLASS_1_913398509518AE8D_METHOD_1_563C59C17604D14E_1_OFFSET UNITYSDK_OFFSET(0xC441F10)
#define CLASS_1_913398509518AE8D_METHOD_1_563C59C17604D14E_OFFSET UNITYSDK_OFFSET(0xC441B50)
#define CLASS_1_913398509518AE8D_METHOD_1_5FB1373E8E0055DC_OFFSET UNITYSDK_OFFSET(0xC440E80)
#define CLASS_1_913398509518AE8D_METHOD_1_6208FA43F279AEEE_OFFSET UNITYSDK_OFFSET(0xC440470)
#define CLASS_1_913398509518AE8D_METHOD_1_68B8C33DE0EB9090_OFFSET UNITYSDK_OFFSET(0xC441530)
#define CLASS_1_913398509518AE8D_METHOD_1_7BD278425D663CED_1_OFFSET UNITYSDK_OFFSET(0xC441880)
#define CLASS_1_913398509518AE8D_METHOD_1_7BD278425D663CED_OFFSET UNITYSDK_OFFSET(0xC4415B0)
#define CLASS_1_913398509518AE8D_METHOD_1_8E7A18194BF0EB2C_OFFSET UNITYSDK_OFFSET(0xC442200)
#define CLASS_1_913398509518AE8D_METHOD_1_9258752F7C89A5F1_OFFSET UNITYSDK_OFFSET(0xC440980)
#define CLASS_1_913398509518AE8D_METHOD_1_9370E860FD1240D0_OFFSET UNITYSDK_OFFSET(0xC441490)
#define CLASS_1_913398509518AE8D_METHOD_1_9F6ECC272DF0C4BB_1_OFFSET UNITYSDK_OFFSET(0xC440CE0)
#define CLASS_1_913398509518AE8D_METHOD_1_9F6ECC272DF0C4BB_OFFSET UNITYSDK_OFFSET(0xC440B40)
#define CLASS_1_913398509518AE8D_METHOD_1_B450FF0D131C4D0D_OFFSET UNITYSDK_OFFSET(0xC4423E0)
#define CLASS_1_913398509518AE8D_METHOD_1_D863039DF5865808_OFFSET UNITYSDK_OFFSET(0xC441160)
#define CLASS_1_913398509518AE8D_METHOD_1_E37E81B1F1A73317_OFFSET UNITYSDK_OFFSET(0xC440330)
#define CLASS_1_913398509518AE8D__CTOR_OFFSET UNITYSDK_OFFSET(0xC442590)

inline static constexpr unsigned int Class_1_913398509518AE8D_TypeDefinitionIndex = 68661;

class Class_1_913398509518AE8D : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_913398509518AE8D_TypeDefinitionIndex)->GetStaticField(0x14050);
	}
	::UnityEngine::AnimationClip* Field_1_1; // 0x10
	::RPG::Client::MonoEmoPlayableGraph* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>* Field_1_3; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Animations::AnimationClipPlayable>* Field_1_4; // 0x28
	::System::Boolean Field_1_5; // 0x30
	::RPG::Client::Emotion::EmoPartType Field_1_6; // 0x34
	::UnityEngine::Animations::AnimationClipPlayable Field_1_7; // 0x38
	::UnityEngine::Animations::AnimationLayerMixerPlayable Field_1_8; // 0x48
	::UnityEngine::Animations::AnimationMixerPlayable Field_1_9; // 0x58
	::Class_1_913398509518AE8D_MixerType Field_1_10; // 0x68
	::System::Int32 Field_1_11; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_913398509518AE8D__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_913398509518AE8D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_E37E81B1F1A73317(::UnityEngine::Playables::PlayableGraph& a1, ::UnityEngine::Animations::AnimationMixerPlayable& a2, ::RPG::Client::Emotion::EmoPartType a3, ::RPG::Client::MonoEmoPlayableGraph* a4, ::System::Boolean a5, ::UnityEngine::AnimationClip* a6, ::System::Int32 a7)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph&, ::UnityEngine::Animations::AnimationMixerPlayable&, ::RPG::Client::Emotion::EmoPartType, ::RPG::Client::MonoEmoPlayableGraph*, ::System::Boolean, ::UnityEngine::AnimationClip*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_913398509518AE8D_METHOD_1_E37E81B1F1A73317_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_9258752F7C89A5F1(::UnityEngine::Playables::PlayableGraph& a1, ::UnityEngine::Animations::AnimationMixerPlayable& a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph&, ::UnityEngine::Animations::AnimationMixerPlayable&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_913398509518AE8D_METHOD_1_9258752F7C89A5F1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5FB1373E8E0055DC(::UnityEngine::Playables::PlayableGraph& a1, ::UnityEngine::Animations::AnimationMixerPlayable& a2, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph&, ::UnityEngine::Animations::AnimationMixerPlayable&, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>*))((::PBYTE)hIl2Cpp + CLASS_1_913398509518AE8D_METHOD_1_5FB1373E8E0055DC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_38E69361EEE42B73(::UnityEngine::Playables::PlayableGraph& a1, ::UnityEngine::Animations::AnimationMixerPlayable& a2, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>* a3, ::Class_1_913398509518AE8D_MixerType a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph&, ::UnityEngine::Animations::AnimationMixerPlayable&, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>*, ::Class_1_913398509518AE8D_MixerType))((::PBYTE)hIl2Cpp + CLASS_1_913398509518AE8D_METHOD_1_38E69361EEE42B73_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_9370E860FD1240D0(::UnityEngine::Playables::PlayableGraph& a1, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph&, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>*))((::PBYTE)hIl2Cpp + CLASS_1_913398509518AE8D_METHOD_1_9370E860FD1240D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_68B8C33DE0EB9090(::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>*))((::PBYTE)hIl2Cpp + CLASS_1_913398509518AE8D_METHOD_1_68B8C33DE0EB9090_OFFSET))(this, a1);
	}

	::System::Void Method_1_9F6ECC272DF0C4BB(::UnityEngine::Playables::PlayableGraph& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph&))((::PBYTE)hIl2Cpp + CLASS_1_913398509518AE8D_METHOD_1_9F6ECC272DF0C4BB_OFFSET))(this, a1);
	}

	::System::Void Method_1_6208FA43F279AEEE(::UnityEngine::Playables::PlayableGraph& a1, ::UnityEngine::Animations::AnimationMixerPlayable& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph&, ::UnityEngine::Animations::AnimationMixerPlayable&))((::PBYTE)hIl2Cpp + CLASS_1_913398509518AE8D_METHOD_1_6208FA43F279AEEE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7BD278425D663CED(::UnityEngine::Playables::PlayableGraph& a1, ::UnityEngine::Animations::AnimationMixerPlayable& a2, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph&, ::UnityEngine::Animations::AnimationMixerPlayable&, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_913398509518AE8D_METHOD_1_7BD278425D663CED_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_563C59C17604D14E(::UnityEngine::Playables::PlayableGraph& a1, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph&, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>*))((::PBYTE)hIl2Cpp + CLASS_1_913398509518AE8D_METHOD_1_563C59C17604D14E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8E7A18194BF0EB2C(::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>*))((::PBYTE)hIl2Cpp + CLASS_1_913398509518AE8D_METHOD_1_8E7A18194BF0EB2C_OFFSET))(this, a1);
	}

	::System::Void Method_1_9F6ECC272DF0C4BB_1(::UnityEngine::Playables::PlayableGraph& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph&))((::PBYTE)hIl2Cpp + CLASS_1_913398509518AE8D_METHOD_1_9F6ECC272DF0C4BB_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_46859238AB0A73BC(::UnityEngine::Playables::PlayableGraph& a1, ::UnityEngine::Animations::AnimationMixerPlayable& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph&, ::UnityEngine::Animations::AnimationMixerPlayable&))((::PBYTE)hIl2Cpp + CLASS_1_913398509518AE8D_METHOD_1_46859238AB0A73BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7BD278425D663CED_1(::UnityEngine::Playables::PlayableGraph& a1, ::UnityEngine::Animations::AnimationMixerPlayable& a2, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph&, ::UnityEngine::Animations::AnimationMixerPlayable&, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_913398509518AE8D_METHOD_1_7BD278425D663CED_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_563C59C17604D14E_1(::UnityEngine::Playables::PlayableGraph& a1, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph&, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>*))((::PBYTE)hIl2Cpp + CLASS_1_913398509518AE8D_METHOD_1_563C59C17604D14E_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B450FF0D131C4D0D(::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>*))((::PBYTE)hIl2Cpp + CLASS_1_913398509518AE8D_METHOD_1_B450FF0D131C4D0D_OFFSET))(this, a1);
	}

	::Class_1_913398509518AE8D_MixerType Method_1_212AF17406B18044(::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>* a1)
	{
		return ((::Class_1_913398509518AE8D_MixerType(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>*))((::PBYTE)hIl2Cpp + CLASS_1_913398509518AE8D_METHOD_1_212AF17406B18044_OFFSET))(this, a1);
	}

	::System::Void Method_1_D863039DF5865808(::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>* a1, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>* a2, ::System::Boolean& a3, ::System::Boolean& a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>*, ::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>*, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_913398509518AE8D_METHOD_1_D863039DF5865808_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::AnimationClip* Method_1_0561AC0B333408CE(::System::String* a1)
	{
		return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_913398509518AE8D_METHOD_1_0561AC0B333408CE_OFFSET))(this, a1);
	}
};

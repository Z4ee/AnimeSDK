#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/Emotion/EmoTrackType.h"
#include "unitysdk/Struct_2_55E0E0B13F9B9D89.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Animations/AnimationMixerPlayable.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace RPG::Client { class MonoEmoPlayableGraph; }
namespace RPG::Client { class TalkEmotionPoseData; }
namespace System { class String; }

#define CLASS_1_33F02A008C928A60_METHOD_1_121676A145221F89_OFFSET UNITYSDK_OFFSET(0x18391F00)
#define CLASS_1_33F02A008C928A60_METHOD_1_211AB1AC27565AAD_OFFSET UNITYSDK_OFFSET(0x18392580)
#define CLASS_1_33F02A008C928A60_METHOD_1_2FAAB6661091E3B2_OFFSET UNITYSDK_OFFSET(0x18390FD0)
#define CLASS_1_33F02A008C928A60_METHOD_1_5B816D65C691FFF5_OFFSET UNITYSDK_OFFSET(0x18392120)
#define CLASS_1_33F02A008C928A60_METHOD_1_5FF514E44337B43F_OFFSET UNITYSDK_OFFSET(0x18391C90)
#define CLASS_1_33F02A008C928A60_METHOD_1_6713A9BAEB1E8B8C_OFFSET UNITYSDK_OFFSET(0x18390EF0)
#define CLASS_1_33F02A008C928A60_METHOD_1_75B5F788206B186D_OFFSET UNITYSDK_OFFSET(0x18391B30)
#define CLASS_1_33F02A008C928A60_METHOD_1_83D16BB38971EB6A_OFFSET UNITYSDK_OFFSET(0x18391D30)
#define CLASS_1_33F02A008C928A60_METHOD_1_8B5BBF642B106205_OFFSET UNITYSDK_OFFSET(0x18390F40)
#define CLASS_1_33F02A008C928A60_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x183920A0)
#define CLASS_1_33F02A008C928A60_METHOD_1_A9256500DE3BA51A_OFFSET UNITYSDK_OFFSET(0x18391120)
#define CLASS_1_33F02A008C928A60_METHOD_1_B79ED96752B9AEE7_OFFSET UNITYSDK_OFFSET(0x183912D0)
#define CLASS_1_33F02A008C928A60_METHOD_1_CE9EF9EAF1A453CC_OFFSET UNITYSDK_OFFSET(0x18391480)
#define CLASS_1_33F02A008C928A60_METHOD_1_D4E1804C25B5032C_OFFSET UNITYSDK_OFFSET(0x18392520)
#define CLASS_1_33F02A008C928A60_METHOD_1_DD42D3BB03FB3233_OFFSET UNITYSDK_OFFSET(0x18392820)
#define CLASS_1_33F02A008C928A60_METHOD_1_E5519DE0D30100CA_OFFSET UNITYSDK_OFFSET(0x183924B0)
#define CLASS_1_33F02A008C928A60_METHOD_1_FBFC6F0F255A4D05_OFFSET UNITYSDK_OFFSET(0x18391910)
#define CLASS_1_33F02A008C928A60_METHOD_1_FE72BF2F281C4FA8_OFFSET UNITYSDK_OFFSET(0x18391E80)
#define CLASS_1_33F02A008C928A60__CTOR_OFFSET UNITYSDK_OFFSET(0x18390EA0)

inline static constexpr unsigned int Class_1_33F02A008C928A60_TypeDefinitionIndex = 67927;

class Class_1_33F02A008C928A60 : public ::System::Object
{
public:
	::Struct_2_55E0E0B13F9B9D89 Field_1_0; // 0x10
	::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>* Field_1_1; // 0x28
	::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>* Field_1_2; // 0x30
	::RPG::Client::MonoEmoPlayableGraph* Field_1_3; // 0x38
	::UnityEngine::Playables::PlayableGraph Field_1_4; // 0x40
	::System::Int32 Field_1_5; // 0x50
	::System::Single Field_1_6; // 0x54
	::System::Single Field_1_7; // 0x58
	::System::Boolean Field_1_8; // 0x5C
	::UnityEngine::Animations::AnimationMixerPlayable Field_1_9; // 0x60
	::RPGTools::Timeline::Emotion::EmoTrackType Field_1_10; // 0x70

	::System::Void _ctor(::RPG::Client::MonoEmoPlayableGraph* a1, ::RPGTools::Timeline::Emotion::EmoTrackType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEmoPlayableGraph*, ::RPGTools::Timeline::Emotion::EmoTrackType))((::PBYTE)hIl2Cpp + CLASS_1_33F02A008C928A60__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6713A9BAEB1E8B8C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33F02A008C928A60_METHOD_1_6713A9BAEB1E8B8C_OFFSET))(this);
	}

	::System::Void Method_1_2FAAB6661091E3B2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_33F02A008C928A60_METHOD_1_2FAAB6661091E3B2_OFFSET))(this, a1);
	}

	::System::Void Method_1_A9256500DE3BA51A(::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>*))((::PBYTE)hIl2Cpp + CLASS_1_33F02A008C928A60_METHOD_1_A9256500DE3BA51A_OFFSET))(this, a1);
	}

	::System::Void Method_1_B79ED96752B9AEE7(::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_33F02A008C928A60_METHOD_1_B79ED96752B9AEE7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8B5BBF642B106205(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_33F02A008C928A60_METHOD_1_8B5BBF642B106205_OFFSET))(this, a1);
	}

	::System::Void Method_1_83D16BB38971EB6A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_33F02A008C928A60_METHOD_1_83D16BB38971EB6A_OFFSET))(this, a1);
	}

	::System::Void Method_1_5FF514E44337B43F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_33F02A008C928A60_METHOD_1_5FF514E44337B43F_OFFSET))(this, a1);
	}

	::System::Void Method_1_75B5F788206B186D(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_33F02A008C928A60_METHOD_1_75B5F788206B186D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33F02A008C928A60_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_121676A145221F89(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_33F02A008C928A60_METHOD_1_121676A145221F89_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CE9EF9EAF1A453CC(::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>*))((::PBYTE)hIl2Cpp + CLASS_1_33F02A008C928A60_METHOD_1_CE9EF9EAF1A453CC_OFFSET))(this, a1);
	}

	::System::Void Method_1_FE72BF2F281C4FA8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33F02A008C928A60_METHOD_1_FE72BF2F281C4FA8_OFFSET))(this);
	}

	::System::Void Method_1_E5519DE0D30100CA(::UnityEngine::Animations::AnimationMixerPlayable a1, ::UnityEngine::Playables::PlayableGraph a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationMixerPlayable, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + CLASS_1_33F02A008C928A60_METHOD_1_E5519DE0D30100CA_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_D4E1804C25B5032C(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33F02A008C928A60_METHOD_1_D4E1804C25B5032C_OFFSET))(this, a1);
	}

	::System::Void Method_1_FBFC6F0F255A4D05(::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>*))((::PBYTE)hIl2Cpp + CLASS_1_33F02A008C928A60_METHOD_1_FBFC6F0F255A4D05_OFFSET))(this, a1);
	}

	::System::Void Method_1_5B816D65C691FFF5(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_33F02A008C928A60_METHOD_1_5B816D65C691FFF5_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Playables::Playable Method_1_211AB1AC27565AAD(::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>* a1, ::RPGTools::Timeline::Emotion::EmoTrackType a2)
	{
		return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>*, ::RPGTools::Timeline::Emotion::EmoTrackType))((::PBYTE)hIl2Cpp + CLASS_1_33F02A008C928A60_METHOD_1_211AB1AC27565AAD_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Playables::Playable Method_1_DD42D3BB03FB3233(::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>* a1, ::RPGTools::Timeline::Emotion::EmoTrackType a2, ::System::Int32 a3)
	{
		return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>*, ::RPGTools::Timeline::Emotion::EmoTrackType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33F02A008C928A60_METHOD_1_DD42D3BB03FB3233_OFFSET))(this, a1, a2, a3);
	}
};

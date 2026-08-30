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

#define CLASS_1_33F02A008C928A60_METHOD_1_121676A145221F89_OFFSET UNITYSDK_OFFSET(0x1987DE30)
#define CLASS_1_33F02A008C928A60_METHOD_1_211AB1AC27565AAD_OFFSET UNITYSDK_OFFSET(0x1987E4B0)
#define CLASS_1_33F02A008C928A60_METHOD_1_2FAAB6661091E3B2_OFFSET UNITYSDK_OFFSET(0x1987CF00)
#define CLASS_1_33F02A008C928A60_METHOD_1_5B816D65C691FFF5_OFFSET UNITYSDK_OFFSET(0x1987E050)
#define CLASS_1_33F02A008C928A60_METHOD_1_5FF514E44337B43F_OFFSET UNITYSDK_OFFSET(0x1987DBC0)
#define CLASS_1_33F02A008C928A60_METHOD_1_6713A9BAEB1E8B8C_OFFSET UNITYSDK_OFFSET(0x1987CE20)
#define CLASS_1_33F02A008C928A60_METHOD_1_75B5F788206B186D_OFFSET UNITYSDK_OFFSET(0x1987DA60)
#define CLASS_1_33F02A008C928A60_METHOD_1_83D16BB38971EB6A_OFFSET UNITYSDK_OFFSET(0x1987DC60)
#define CLASS_1_33F02A008C928A60_METHOD_1_8B5BBF642B106205_OFFSET UNITYSDK_OFFSET(0x1987CE70)
#define CLASS_1_33F02A008C928A60_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1987DFD0)
#define CLASS_1_33F02A008C928A60_METHOD_1_A9256500DE3BA51A_OFFSET UNITYSDK_OFFSET(0x1987D050)
#define CLASS_1_33F02A008C928A60_METHOD_1_B79ED96752B9AEE7_OFFSET UNITYSDK_OFFSET(0x1987D200)
#define CLASS_1_33F02A008C928A60_METHOD_1_CE9EF9EAF1A453CC_OFFSET UNITYSDK_OFFSET(0x1987D3B0)
#define CLASS_1_33F02A008C928A60_METHOD_1_D4E1804C25B5032C_OFFSET UNITYSDK_OFFSET(0x1987E450)
#define CLASS_1_33F02A008C928A60_METHOD_1_DD42D3BB03FB3233_OFFSET UNITYSDK_OFFSET(0x1987E750)
#define CLASS_1_33F02A008C928A60_METHOD_1_E5519DE0D30100CA_OFFSET UNITYSDK_OFFSET(0x1987E3E0)
#define CLASS_1_33F02A008C928A60_METHOD_1_FBFC6F0F255A4D05_OFFSET UNITYSDK_OFFSET(0x1987D840)
#define CLASS_1_33F02A008C928A60_METHOD_1_FE72BF2F281C4FA8_OFFSET UNITYSDK_OFFSET(0x1987DDB0)
#define CLASS_1_33F02A008C928A60__CTOR_OFFSET UNITYSDK_OFFSET(0x1987CDD0)

inline static constexpr unsigned int Class_1_33F02A008C928A60_TypeDefinitionIndex = 71100;

class Class_1_33F02A008C928A60 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>* JCMMMINANHC; // 0x10
	::Struct_2_55E0E0B13F9B9D89 DBJCCKOJHBG; // 0x18
	::RPG::Client::MonoEmoPlayableGraph* CFKHNPGEAJA; // 0x30
	::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>* KLKCGPCHOPL; // 0x38
	::System::Boolean JKBHMODGKME; // 0x40
	::System::Single ELJHGJIMMDJ; // 0x44
	::System::Single HDKKECHDBCN; // 0x48
	::System::Int32 BKAANCMCAAA; // 0x4C
	::UnityEngine::Playables::PlayableGraph ABGDLKJGIFH; // 0x50
	::RPGTools::Timeline::Emotion::EmoTrackType MAJCIFGMKCH; // 0x60
	::UnityEngine::Animations::AnimationMixerPlayable JFOADFEHHMJ; // 0x68

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

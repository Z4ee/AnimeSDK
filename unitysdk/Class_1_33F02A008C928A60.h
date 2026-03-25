#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/Emotion/EmoTrackType.h"
#include "unitysdk/Struct_2_2A9144AA173D64D2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Animations/AnimationMixerPlayable.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace RPG::Client { class MonoEmoPlayableGraph; }
namespace RPG::Client { class TalkEmotionPoseData; }
namespace System { class String; }

#define CLASS_1_33F02A008C928A60_METHOD_1_1985F79750B0A28D_OFFSET UNITYSDK_OFFSET(0x8949100)
#define CLASS_1_33F02A008C928A60_METHOD_1_211AB1AC27565AAD_OFFSET UNITYSDK_OFFSET(0x894A510)
#define CLASS_1_33F02A008C928A60_METHOD_1_2C8CE2721E051CCF_OFFSET UNITYSDK_OFFSET(0x8948E70)
#define CLASS_1_33F02A008C928A60_METHOD_1_5B816D65C691FFF5_OFFSET UNITYSDK_OFFSET(0x894A0B0)
#define CLASS_1_33F02A008C928A60_METHOD_1_5FF514E44337B43F_OFFSET UNITYSDK_OFFSET(0x8949BE0)
#define CLASS_1_33F02A008C928A60_METHOD_1_75B5F788206B186D_OFFSET UNITYSDK_OFFSET(0x8949A80)
#define CLASS_1_33F02A008C928A60_METHOD_1_83D16BB38971EB6A_OFFSET UNITYSDK_OFFSET(0x8949C80)
#define CLASS_1_33F02A008C928A60_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x894A030)
#define CLASS_1_33F02A008C928A60_METHOD_1_A88CDF038776FAA5_OFFSET UNITYSDK_OFFSET(0x8948F50)
#define CLASS_1_33F02A008C928A60_METHOD_1_B6176A23CF378D07_OFFSET UNITYSDK_OFFSET(0x89494F0)
#define CLASS_1_33F02A008C928A60_METHOD_1_D4E1804C25B5032C_OFFSET UNITYSDK_OFFSET(0x894A4B0)
#define CLASS_1_33F02A008C928A60_METHOD_1_D555A798DC52739B_OFFSET UNITYSDK_OFFSET(0x8948EC0)
#define CLASS_1_33F02A008C928A60_METHOD_1_D88A96F1EC939874_OFFSET UNITYSDK_OFFSET(0x8949E60)
#define CLASS_1_33F02A008C928A60_METHOD_1_DD42D3BB03FB3233_OFFSET UNITYSDK_OFFSET(0x894A7B0)
#define CLASS_1_33F02A008C928A60_METHOD_1_E5519DE0D30100CA_OFFSET UNITYSDK_OFFSET(0x894A440)
#define CLASS_1_33F02A008C928A60_METHOD_1_F6654E653788B69D_OFFSET UNITYSDK_OFFSET(0x8949320)
#define CLASS_1_33F02A008C928A60_METHOD_1_FBFC6F0F255A4D05_OFFSET UNITYSDK_OFFSET(0x8949860)
#define CLASS_1_33F02A008C928A60_METHOD_1_FE72BF2F281C4FA8_OFFSET UNITYSDK_OFFSET(0x8949DE0)
#define CLASS_1_33F02A008C928A60__CTOR_OFFSET UNITYSDK_OFFSET(0x8948E20)

inline static constexpr unsigned int Class_1_33F02A008C928A60_TypeDefinitionIndex = 58274;

class Class_1_33F02A008C928A60 : public ::System::Object
{
public:
	::RPG::Client::MonoEmoPlayableGraph* Field_1_0; // 0x10
	::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>* Field_1_6; // 0x18
	::Struct_2_2A9144AA173D64D2 Field_1_5; // 0x20
	::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>* Field_1_7; // 0x38
	::RPGTools::Timeline::Emotion::EmoTrackType Field_1_1; // 0x40
	::System::Single Field_1_2; // 0x44
	::System::Boolean Field_1_4; // 0x48
	::UnityEngine::Playables::PlayableGraph Field_1_9; // 0x50
	::UnityEngine::Animations::AnimationMixerPlayable Field_1_8; // 0x60
	::System::Int32 Field_1_10; // 0x70
	::System::Single Field_1_3; // 0x74

	::System::Void _ctor(::RPG::Client::MonoEmoPlayableGraph* a1, ::RPGTools::Timeline::Emotion::EmoTrackType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEmoPlayableGraph*, ::RPGTools::Timeline::Emotion::EmoTrackType))((::PBYTE)hIl2Cpp + CLASS_1_33F02A008C928A60__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2C8CE2721E051CCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33F02A008C928A60_METHOD_1_2C8CE2721E051CCF_OFFSET))(this);
	}

	::System::Void Method_1_A88CDF038776FAA5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_33F02A008C928A60_METHOD_1_A88CDF038776FAA5_OFFSET))(this, a1);
	}

	::System::Void Method_1_1985F79750B0A28D(::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>*))((::PBYTE)hIl2Cpp + CLASS_1_33F02A008C928A60_METHOD_1_1985F79750B0A28D_OFFSET))(this, a1);
	}

	::System::Void Method_1_F6654E653788B69D(::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_33F02A008C928A60_METHOD_1_F6654E653788B69D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D555A798DC52739B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_33F02A008C928A60_METHOD_1_D555A798DC52739B_OFFSET))(this, a1);
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

	::System::Void Method_1_D88A96F1EC939874(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_33F02A008C928A60_METHOD_1_D88A96F1EC939874_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B6176A23CF378D07(::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>*))((::PBYTE)hIl2Cpp + CLASS_1_33F02A008C928A60_METHOD_1_B6176A23CF378D07_OFFSET))(this, a1);
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

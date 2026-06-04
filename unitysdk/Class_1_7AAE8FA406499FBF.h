#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/Emotion/EmoTrackType.h"
#include "unitysdk/Struct_2_55E0E0B13F9B9D89.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Animations/AnimationLayerMixerPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationPlayableOutput.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

class Class_1_C3442CFB67797449;
namespace RPG::Client { class MonoEmoPlayableGraph; }
namespace System { class String; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animator; }

#define CLASS_1_7AAE8FA406499FBF_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xA6C8E20)
#define CLASS_1_7AAE8FA406499FBF_METHOD_1_166FCE95AF172ABC_OFFSET UNITYSDK_OFFSET(0xA6C88B0)
#define CLASS_1_7AAE8FA406499FBF_METHOD_1_23EFCEB999C1D825_OFFSET UNITYSDK_OFFSET(0xA6CA590)
#define CLASS_1_7AAE8FA406499FBF_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xA6C90E0)
#define CLASS_1_7AAE8FA406499FBF_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xA6C9080)
#define CLASS_1_7AAE8FA406499FBF_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA6C9020)
#define CLASS_1_7AAE8FA406499FBF_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xA6C8A00)
#define CLASS_1_7AAE8FA406499FBF_METHOD_1_5903A6947D49E37C_OFFSET UNITYSDK_OFFSET(0xA6C95F0)
#define CLASS_1_7AAE8FA406499FBF_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0xA6C8ED0)
#define CLASS_1_7AAE8FA406499FBF_METHOD_1_9999F3E4D60BFCCC_OFFSET UNITYSDK_OFFSET(0xA6C9F80)
#define CLASS_1_7AAE8FA406499FBF_METHOD_1_99C2D4DED85BBB24_OFFSET UNITYSDK_OFFSET(0xA6C91C0)
#define CLASS_1_7AAE8FA406499FBF_METHOD_1_C31D75E0B090D0CD_OFFSET UNITYSDK_OFFSET(0xA6C9580)
#define CLASS_1_7AAE8FA406499FBF_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA6CA140)
#define CLASS_1_7AAE8FA406499FBF_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xA6C9130)
#define CLASS_1_7AAE8FA406499FBF_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0xA6CA1B0)
#define CLASS_1_7AAE8FA406499FBF_METHOD_1_DBDE806671808CE7_OFFSET UNITYSDK_OFFSET(0xA6C9500)
#define CLASS_1_7AAE8FA406499FBF_METHOD_1_E8F71BC8471C5469_OFFSET UNITYSDK_OFFSET(0xA6C89A0)
#define CLASS_1_7AAE8FA406499FBF_METHOD_1_EF17FAB3022DE07B_1_OFFSET UNITYSDK_OFFSET(0xA6C9B30)
#define CLASS_1_7AAE8FA406499FBF_METHOD_1_EF17FAB3022DE07B_OFFSET UNITYSDK_OFFSET(0xA6C96E0)
#define CLASS_1_7AAE8FA406499FBF__CTOR_OFFSET UNITYSDK_OFFSET(0xA6C88C0)

inline static constexpr unsigned int Class_1_7AAE8FA406499FBF_TypeDefinitionIndex = 68664;

class Class_1_7AAE8FA406499FBF : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Class_1_C3442CFB67797449* Field_1_1; // 0x18
	::UnityEngine::AnimationClip* Field_1_2; // 0x20
	::Class_1_C3442CFB67797449* Field_1_3; // 0x28
	::UnityEngine::AnimationClip* Field_1_4; // 0x30
	::UnityEngine::AnimationClip* Field_1_5; // 0x38
	::Class_1_C3442CFB67797449* Field_1_6; // 0x40
	::RPG::Client::MonoEmoPlayableGraph* Field_1_7; // 0x48
	::UnityEngine::Animator* Field_1_8; // 0x50
	::UnityEngine::AnimationClip* Field_1_9; // 0x58
	::Class_1_C3442CFB67797449* Field_1_10; // 0x60
	::Class_1_C3442CFB67797449* Field_1_11; // 0x68
	::UnityEngine::AnimationClip* Field_1_12; // 0x70
	::UnityEngine::Animations::AnimationPlayableOutput Field_1_13; // 0x78
	::UnityEngine::Animations::AnimationPlayableOutput Field_1_14; // 0x88
	::UnityEngine::Playables::PlayableGraph Field_1_15; // 0x98
	::System::Single Field_1_16; // 0xA8
	::System::Single Field_1_17; // 0xAC
	::System::Single Field_1_18; // 0xB0
	::System::Int32 Field_1_19; // 0xB4
	::UnityEngine::Animations::AnimationPlayableOutput Field_1_20; // 0xB8
	::UnityEngine::Animations::AnimationLayerMixerPlayable Field_1_21; // 0xC8
	::System::Single Field_1_22; // 0xD8
	::System::Single Field_1_23; // 0xDC
	::UnityEngine::Animations::AnimationPlayableOutput Field_1_24; // 0xE0

	::System::Void _ctor(::UnityEngine::Animator* a1, ::RPG::Client::MonoEmoPlayableGraph* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::RPG::Client::MonoEmoPlayableGraph*))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF__CTOR_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Playables::PlayableGraph Method_1_166FCE95AF172ABC()
	{
		return ((::UnityEngine::Playables::PlayableGraph(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF_METHOD_1_166FCE95AF172ABC_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF_METHOD_1_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_1_99C2D4DED85BBB24(::Struct_2_55E0E0B13F9B9D89 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_55E0E0B13F9B9D89, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF_METHOD_1_99C2D4DED85BBB24_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DBDE806671808CE7(::System::Int32 a1, ::System::Single a2, ::RPGTools::Timeline::Emotion::EmoTrackType a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::RPGTools::Timeline::Emotion::EmoTrackType))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF_METHOD_1_DBDE806671808CE7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C31D75E0B090D0CD(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF_METHOD_1_C31D75E0B090D0CD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5903A6947D49E37C(::System::Single a1, ::RPGTools::Timeline::Emotion::EmoTrackType a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::RPGTools::Timeline::Emotion::EmoTrackType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF_METHOD_1_5903A6947D49E37C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_1_EF17FAB3022DE07B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF_METHOD_1_EF17FAB3022DE07B_OFFSET))(this);
	}

	::System::Void Method_1_EF17FAB3022DE07B_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF_METHOD_1_EF17FAB3022DE07B_1_OFFSET))(this);
	}

	::System::Void Method_1_9999F3E4D60BFCCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF_METHOD_1_9999F3E4D60BFCCC_OFFSET))(this);
	}

	::System::Void Method_1_E8F71BC8471C5469()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF_METHOD_1_E8F71BC8471C5469_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_23EFCEB999C1D825(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7AAE8FA406499FBF_METHOD_1_23EFCEB999C1D825_OFFSET))(this, a1);
	}
};

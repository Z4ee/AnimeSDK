#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Object; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Texture; }

#define CLASS_2_12A27648F0DDF507_METHOD_2_324AEE341AAA7A1B_1_OFFSET UNITYSDK_OFFSET(0xF9E9600)
#define CLASS_2_12A27648F0DDF507_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xF9E95C0)
#define CLASS_2_12A27648F0DDF507_METHOD_2_79ED6854413CA2F4_1_OFFSET UNITYSDK_OFFSET(0xF9E95F0)
#define CLASS_2_12A27648F0DDF507_METHOD_2_79ED6854413CA2F4_2_OFFSET UNITYSDK_OFFSET(0xF9E9610)
#define CLASS_2_12A27648F0DDF507_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0xF9E95D0)
#define CLASS_2_12A27648F0DDF507_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0xF9E95E0)
#define CLASS_2_12A27648F0DDF507_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xF9E91E0)
#define CLASS_2_12A27648F0DDF507_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xF9E9160)
#define CLASS_2_12A27648F0DDF507_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xF9E90C0)
#define CLASS_2_12A27648F0DDF507_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xF9E9110)
#define CLASS_2_12A27648F0DDF507_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0xF9E9260)
#define CLASS_2_12A27648F0DDF507_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xF9E92E0)
#define CLASS_2_12A27648F0DDF507__CTOR_OFFSET UNITYSDK_OFFSET(0xF9E9490)

inline static constexpr unsigned int Class_2_12A27648F0DDF507_TypeDefinitionIndex = 72251;

class Class_2_12A27648F0DDF507 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::Texture* Field_2_30; // 0x10
	::UnityEngine::Gradient* Field_2_5; // 0x18
	::System::Single Field_2_53; // 0x20
	::System::Single Field_2_45; // 0x24
	::UnityEngine::Vector3 Field_2_17; // 0x28
	::UnityEngine::Color Field_2_10; // 0x34
	::UnityEngine::Color Field_2_23; // 0x44
	::System::Single Field_2_20; // 0x54
	::System::Single Field_2_54; // 0x58
	::System::Single Field_2_39; // 0x5C
	::UnityEngine::Vector3 Field_2_34; // 0x60
	::System::Single Field_2_2; // 0x6C
	::System::Single Field_2_49; // 0x70
	::System::Single Field_2_36; // 0x74
	::UnityEngine::Color Field_2_43; // 0x78
	::System::Single Field_2_9; // 0x88
	::System::Single Field_2_12; // 0x8C
	::UnityEngine::Vector2 Field_2_13; // 0x90
	::System::Single Field_2_26; // 0x98
	::UnityEngine::Color Field_2_7; // 0x9C
	::System::Single Field_2_14; // 0xAC
	::System::Int32 Field_2_55; // 0xB0
	::UnityEngine::Color Field_2_8; // 0xB4
	::System::Int32 Field_2_56; // 0xC4
	::System::Single Field_2_6; // 0xC8
	::UnityEngine::Vector2 Field_2_33; // 0xCC
	::UnityEngine::Color Field_2_25; // 0xD4
	::System::Single Field_2_38; // 0xE4
	::System::Single Field_2_16; // 0xE8
	::System::Single Field_2_57; // 0xEC
	::System::Single Field_2_37; // 0xF0
	::System::Single Field_2_28; // 0xF4
	::UnityEngine::Color Field_2_3; // 0xF8
	::System::Single Field_2_46; // 0x108
	::System::Single Field_2_22; // 0x10C
	::System::Single Field_2_50; // 0x110
	::System::Single Field_2_21; // 0x114
	::System::Single Field_2_11; // 0x118
	::System::Single Field_2_52; // 0x11C
	::System::Single Field_2_51; // 0x120
	::System::Single Field_2_40; // 0x124
	::System::Boolean Field_2_0; // 0x128
	::System::Boolean Field_2_19; // 0x129
	::System::Boolean Field_2_32; // 0x12A
	::System::Boolean Field_2_47; // 0x12B
	::System::Single Field_2_44; // 0x12C
	::System::Single Field_2_41; // 0x130
	::System::Single Field_2_27; // 0x134
	::UnityEngine::Vector4 Field_2_31; // 0x138
	::System::Single Field_2_1; // 0x148
	::System::Single Field_2_42; // 0x14C
	::System::Single Field_2_29; // 0x150
	::System::Single Field_2_4; // 0x154
	::UnityEngine::Color Field_2_24; // 0x158
	::System::Single Field_2_15; // 0x168
	::System::Boolean Field_2_18; // 0x16C
	::System::Boolean Field_2_48; // 0x16D
	::System::Boolean Field_2_35; // 0x16E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12A27648F0DDF507__CTOR_OFFSET))(this);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_12A27648F0DDF507_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_12A27648F0DDF507_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_12A27648F0DDF507_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_12A27648F0DDF507_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}

	::System::Void PrepareFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_12A27648F0DDF507_PREPAREFRAME_OFFSET))(this, a1, a2);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_12A27648F0DDF507_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_12A27648F0DDF507_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_12A27648F0DDF507_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_12A27648F0DDF507_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_79ED6854413CA2F4_1(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_12A27648F0DDF507_METHOD_2_79ED6854413CA2F4_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_324AEE341AAA7A1B_1(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_12A27648F0DDF507_METHOD_2_324AEE341AAA7A1B_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_79ED6854413CA2F4_2(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_12A27648F0DDF507_METHOD_2_79ED6854413CA2F4_2_OFFSET))(this, a1, a2);
	}
};

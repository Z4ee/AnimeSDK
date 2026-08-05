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

#define CLASS_2_12A27648F0DDF507_METHOD_2_324AEE341AAA7A1B_1_OFFSET UNITYSDK_OFFSET(0x11B27960)
#define CLASS_2_12A27648F0DDF507_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x11B27920)
#define CLASS_2_12A27648F0DDF507_METHOD_2_79ED6854413CA2F4_1_OFFSET UNITYSDK_OFFSET(0x11B27940)
#define CLASS_2_12A27648F0DDF507_METHOD_2_79ED6854413CA2F4_2_OFFSET UNITYSDK_OFFSET(0x11B27970)
#define CLASS_2_12A27648F0DDF507_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x11B27930)
#define CLASS_2_12A27648F0DDF507_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x11B27950)
#define CLASS_2_12A27648F0DDF507_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x11B27540)
#define CLASS_2_12A27648F0DDF507_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x11B274C0)
#define CLASS_2_12A27648F0DDF507_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x11B27420)
#define CLASS_2_12A27648F0DDF507_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x11B27470)
#define CLASS_2_12A27648F0DDF507_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x11B275C0)
#define CLASS_2_12A27648F0DDF507_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x11B27640)
#define CLASS_2_12A27648F0DDF507__CTOR_OFFSET UNITYSDK_OFFSET(0x11B27800)

inline static constexpr unsigned int Class_2_12A27648F0DDF507_TypeDefinitionIndex = 77996;

class Class_2_12A27648F0DDF507 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::Gradient* Field_2_4; // 0x10
	::UnityEngine::Texture* Field_2_35; // 0x18
	::UnityEngine::Color Field_2_25; // 0x20
	::System::Single Field_2_5; // 0x30
	::System::Single Field_2_55; // 0x34
	::UnityEngine::Color Field_2_10; // 0x38
	::System::Single Field_2_53; // 0x48
	::UnityEngine::Vector2 Field_2_32; // 0x4C
	::System::Boolean Field_2_1; // 0x54
	::System::Boolean Field_2_38; // 0x55
	::System::Boolean Field_2_23; // 0x56
	::System::Single Field_2_41; // 0x58
	::System::Single Field_2_29; // 0x5C
	::UnityEngine::Vector4 Field_2_34; // 0x60
	::System::Single Field_2_42; // 0x70
	::UnityEngine::Color Field_2_46; // 0x74
	::System::Single Field_2_21; // 0x84
	::UnityEngine::Color Field_2_24; // 0x88
	::System::Single Field_2_11; // 0x98
	::System::Single Field_2_51; // 0x9C
	::System::Int32 Field_2_58; // 0xA0
	::UnityEngine::Color Field_2_6; // 0xA4
	::System::Single Field_2_0; // 0xB4
	::System::Single Field_2_27; // 0xB8
	::UnityEngine::Vector3 Field_2_16; // 0xBC
	::System::Single Field_2_30; // 0xC8
	::System::Single Field_2_20; // 0xCC
	::System::Single Field_2_54; // 0xD0
	::UnityEngine::Color Field_2_9; // 0xD4
	::System::Single Field_2_48; // 0xE4
	::System::Single Field_2_37; // 0xE8
	::UnityEngine::Color Field_2_15; // 0xEC
	::System::Single Field_2_7; // 0xFC
	::UnityEngine::Vector3 Field_2_39; // 0x100
	::System::Single Field_2_47; // 0x10C
	::System::Single Field_2_18; // 0x110
	::System::Single Field_2_31; // 0x114
	::System::Single Field_2_59; // 0x118
	::System::Single Field_2_14; // 0x11C
	::UnityEngine::Vector2 Field_2_12; // 0x120
	::System::Single Field_2_28; // 0x128
	::System::Single Field_2_44; // 0x12C
	::UnityEngine::Color Field_2_26; // 0x130
	::System::Single Field_2_13; // 0x140
	::System::Single Field_2_43; // 0x144
	::System::Single Field_2_45; // 0x148
	::System::Single Field_2_56; // 0x14C
	::System::Single Field_2_17; // 0x150
	::System::Single Field_2_36; // 0x154
	::System::Single Field_2_8; // 0x158
	::System::Single Field_2_40; // 0x15C
	::System::Int32 Field_2_57; // 0x160
	::System::Boolean Field_2_49; // 0x164
	::System::Boolean Field_2_22; // 0x165
	::System::Boolean Field_2_33; // 0x166
	::System::Boolean Field_2_50; // 0x167
	::System::Single Field_2_19; // 0x168
	::System::Single Field_2_52; // 0x16C

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

	::System::Void Method_2_79ED6854413CA2F4_1(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_12A27648F0DDF507_METHOD_2_79ED6854413CA2F4_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_12A27648F0DDF507_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
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

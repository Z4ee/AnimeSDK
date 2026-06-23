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

#define CLASS_2_12A27648F0DDF507_METHOD_2_324AEE341AAA7A1B_1_OFFSET UNITYSDK_OFFSET(0x1389E960)
#define CLASS_2_12A27648F0DDF507_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x1389E950)
#define CLASS_2_12A27648F0DDF507_METHOD_2_79ED6854413CA2F4_1_OFFSET UNITYSDK_OFFSET(0x1389E920)
#define CLASS_2_12A27648F0DDF507_METHOD_2_79ED6854413CA2F4_2_OFFSET UNITYSDK_OFFSET(0x1389E930)
#define CLASS_2_12A27648F0DDF507_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x1389E910)
#define CLASS_2_12A27648F0DDF507_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x1389E940)
#define CLASS_2_12A27648F0DDF507_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1389E540)
#define CLASS_2_12A27648F0DDF507_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1389E4C0)
#define CLASS_2_12A27648F0DDF507_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x1389E420)
#define CLASS_2_12A27648F0DDF507_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x1389E470)
#define CLASS_2_12A27648F0DDF507_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x1389E5C0)
#define CLASS_2_12A27648F0DDF507_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1389E640)
#define CLASS_2_12A27648F0DDF507__CTOR_OFFSET UNITYSDK_OFFSET(0x1389E7F0)

inline static constexpr unsigned int Class_2_12A27648F0DDF507_TypeDefinitionIndex = 41495;

class Class_2_12A27648F0DDF507 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::Gradient* Field_2_5; // 0x10
	::UnityEngine::Texture* Field_2_30; // 0x18
	::System::Single Field_2_11; // 0x20
	::System::Single Field_2_20; // 0x24
	::System::Single Field_2_38; // 0x28
	::System::Single Field_2_45; // 0x2C
	::UnityEngine::Color Field_2_25; // 0x30
	::UnityEngine::Vector2 Field_2_13; // 0x40
	::System::Single Field_2_50; // 0x48
	::UnityEngine::Color Field_2_7; // 0x4C
	::System::Single Field_2_39; // 0x5C
	::System::Single Field_2_57; // 0x60
	::UnityEngine::Color Field_2_3; // 0x64
	::System::Single Field_2_51; // 0x74
	::System::Single Field_2_54; // 0x78
	::System::Single Field_2_14; // 0x7C
	::System::Single Field_2_40; // 0x80
	::System::Single Field_2_16; // 0x84
	::System::Single Field_2_26; // 0x88
	::System::Single Field_2_42; // 0x8C
	::System::Single Field_2_12; // 0x90
	::System::Single Field_2_36; // 0x94
	::System::Single Field_2_49; // 0x98
	::System::Single Field_2_41; // 0x9C
	::UnityEngine::Color Field_2_10; // 0xA0
	::System::Boolean Field_2_18; // 0xB0
	::System::Boolean Field_2_35; // 0xB1
	::System::Boolean Field_2_47; // 0xB2
	::System::Boolean Field_2_32; // 0xB3
	::System::Single Field_2_6; // 0xB4
	::System::Single Field_2_52; // 0xB8
	::UnityEngine::Vector3 Field_2_17; // 0xBC
	::System::Single Field_2_9; // 0xC8
	::System::Single Field_2_37; // 0xCC
	::UnityEngine::Color Field_2_23; // 0xD0
	::UnityEngine::Vector3 Field_2_34; // 0xE0
	::System::Single Field_2_15; // 0xEC
	::System::Single Field_2_29; // 0xF0
	::System::Int32 Field_2_56; // 0xF4
	::UnityEngine::Color Field_2_8; // 0xF8
	::UnityEngine::Color Field_2_24; // 0x108
	::UnityEngine::Vector4 Field_2_31; // 0x118
	::System::Single Field_2_4; // 0x128
	::System::Int32 Field_2_55; // 0x12C
	::UnityEngine::Color Field_2_43; // 0x130
	::System::Single Field_2_28; // 0x140
	::System::Single Field_2_53; // 0x144
	::UnityEngine::Vector2 Field_2_33; // 0x148
	::System::Boolean Field_2_0; // 0x150
	::System::Boolean Field_2_48; // 0x151
	::System::Boolean Field_2_19; // 0x152
	::System::Single Field_2_46; // 0x154
	::System::Single Field_2_1; // 0x158
	::System::Single Field_2_44; // 0x15C
	::System::Single Field_2_2; // 0x160
	::System::Single Field_2_21; // 0x164
	::System::Single Field_2_27; // 0x168
	::System::Single Field_2_22; // 0x16C

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

	::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_12A27648F0DDF507_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_79ED6854413CA2F4_1(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_12A27648F0DDF507_METHOD_2_79ED6854413CA2F4_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_79ED6854413CA2F4_2(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_12A27648F0DDF507_METHOD_2_79ED6854413CA2F4_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_12A27648F0DDF507_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_12A27648F0DDF507_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_2_324AEE341AAA7A1B_1(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_12A27648F0DDF507_METHOD_2_324AEE341AAA7A1B_1_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9201EB3268983C13.h"
#include "unitysdk/Class_4_121B841D6D63A1D3_17_Struct_2_52AD02145F5FCE3A_25.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class ColorAdjustmentsBehaviour; }
namespace System { class Object; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class ColorAdjustments; }

#define CLASS_4_121B841D6D63A1D3_17_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x18601C50)
#define CLASS_4_121B841D6D63A1D3_17_METHOD_4_6020519A7F0B2328_OFFSET UNITYSDK_OFFSET(0x185FF7B0)
#define CLASS_4_121B841D6D63A1D3_17_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x18601C70)
#define CLASS_4_121B841D6D63A1D3_17_METHOD_4_B247C6D88E785B91_OFFSET UNITYSDK_OFFSET(0x185FF160)
#define CLASS_4_121B841D6D63A1D3_17_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x18601C60)
#define CLASS_4_121B841D6D63A1D3_17_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x185FF560)
#define CLASS_4_121B841D6D63A1D3_17_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x18600D40)
#define CLASS_4_121B841D6D63A1D3_17__CTOR_OFFSET UNITYSDK_OFFSET(0x18601C30)

inline static constexpr unsigned int Class_4_121B841D6D63A1D3_17_TypeDefinitionIndex = 73661;

class Class_4_121B841D6D63A1D3_17 : public ::Class_3_9201EB3268983C13<::UnityEngine::Rendering::Universal::ColorAdjustments*, ::MoleMole::Timeline::ColorAdjustmentsBehaviour*>
{
public:
	::Class_4_121B841D6D63A1D3_17_Struct_2_52AD02145F5FCE3A_25 Field_4_0; // 0x38
	::UnityEngine::Texture* Field_4_26; // 0xC0
	::System::Boolean Field_4_30; // 0xC8
	::System::Boolean Field_4_20; // 0xC9
	::System::Boolean Field_4_1; // 0xCA
	::System::Boolean Field_4_32; // 0xCB
	::UnityEngine::Color Field_4_12; // 0xCC
	::System::Boolean Field_4_23; // 0xDC
	::System::Boolean Field_4_25; // 0xDD
	::System::Boolean Field_4_9; // 0xDE
	::System::Boolean Field_4_15; // 0xDF
	::System::Single Field_4_14; // 0xE0
	::System::Single Field_4_4; // 0xE4
	::System::Single Field_4_8; // 0xE8
	::System::Single Field_4_6; // 0xEC
	::System::Single Field_4_2; // 0xF0
	::System::Single Field_4_28; // 0xF4
	::System::Single Field_4_22; // 0xF8
	::System::Single Field_4_16; // 0xFC
	::System::Boolean Field_4_5; // 0x100
	::System::Boolean Field_4_17; // 0x101
	::System::Boolean Field_4_21; // 0x102
	::System::Boolean Field_4_29; // 0x103
	::System::Boolean Field_4_31; // 0x104
	::System::Boolean Field_4_27; // 0x105
	::System::Boolean Field_4_19; // 0x106
	::System::Single Field_4_24; // 0x108
	::System::Single Field_4_18; // 0x10C
	::System::Single Field_4_10; // 0x110
	::System::Boolean Field_4_13; // 0x114
	::System::Boolean Field_4_11; // 0x115
	::System::Boolean Field_4_3; // 0x116
	::System::Boolean Field_4_7; // 0x117

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_17__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_B247C6D88E785B91()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_17_METHOD_4_B247C6D88E785B91_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_17_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_17_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_6020519A7F0B2328(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_17_METHOD_4_6020519A7F0B2328_OFFSET))(this, a1);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_17_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_17_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_17_METHOD_4_832295EC279E5994_OFFSET))(this);
	}
};

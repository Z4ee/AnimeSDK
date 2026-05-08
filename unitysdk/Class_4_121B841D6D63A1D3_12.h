#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9C33AF57B038AFD8.h"
#include "unitysdk/Class_4_121B841D6D63A1D3_12_Struct_2_52AD02145F5FCE3A_16.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class ColorAdjustmentsBehaviour; }
namespace System { class Object; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class ColorAdjustments; }

#define CLASS_4_121B841D6D63A1D3_12_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x1020AFC0)
#define CLASS_4_121B841D6D63A1D3_12_METHOD_4_6020519A7F0B2328_OFFSET UNITYSDK_OFFSET(0x10208AF0)
#define CLASS_4_121B841D6D63A1D3_12_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1020AFD0)
#define CLASS_4_121B841D6D63A1D3_12_METHOD_4_B247C6D88E785B91_OFFSET UNITYSDK_OFFSET(0x10208490)
#define CLASS_4_121B841D6D63A1D3_12_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x1020AFE0)
#define CLASS_4_121B841D6D63A1D3_12_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x10208890)
#define CLASS_4_121B841D6D63A1D3_12_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1020A090)
#define CLASS_4_121B841D6D63A1D3_12__CTOR_OFFSET UNITYSDK_OFFSET(0x1020AFA0)

inline static constexpr unsigned int Class_4_121B841D6D63A1D3_12_TypeDefinitionIndex = 55473;

class Class_4_121B841D6D63A1D3_12 : public ::Class_3_9C33AF57B038AFD8<::UnityEngine::Rendering::Universal::ColorAdjustments*, ::MoleMole::Timeline::ColorAdjustmentsBehaviour*>
{
public:
	::UnityEngine::Texture* Field_4_26; // 0x38
	::Class_4_121B841D6D63A1D3_12_Struct_2_52AD02145F5FCE3A_16 Field_4_0; // 0x40
	::System::Single Field_4_6; // 0xC8
	::System::Single Field_4_4; // 0xCC
	::System::Boolean Field_4_32; // 0xD0
	::System::Boolean Field_4_17; // 0xD1
	::System::Boolean Field_4_1; // 0xD2
	::System::Boolean Field_4_25; // 0xD3
	::System::Boolean Field_4_23; // 0xD4
	::System::Boolean Field_4_3; // 0xD5
	::System::Boolean Field_4_30; // 0xD6
	::System::Boolean Field_4_7; // 0xD7
	::System::Single Field_4_18; // 0xD8
	::System::Single Field_4_14; // 0xDC
	::UnityEngine::Color Field_4_12; // 0xE0
	::System::Boolean Field_4_5; // 0xF0
	::System::Boolean Field_4_27; // 0xF1
	::System::Boolean Field_4_13; // 0xF2
	::System::Single Field_4_10; // 0xF4
	::System::Boolean Field_4_20; // 0xF8
	::System::Boolean Field_4_9; // 0xF9
	::System::Boolean Field_4_21; // 0xFA
	::System::Boolean Field_4_29; // 0xFB
	::System::Single Field_4_22; // 0xFC
	::System::Boolean Field_4_15; // 0x100
	::System::Boolean Field_4_19; // 0x101
	::System::Boolean Field_4_31; // 0x102
	::System::Boolean Field_4_11; // 0x103
	::System::Single Field_4_2; // 0x104
	::System::Single Field_4_24; // 0x108
	::System::Single Field_4_16; // 0x10C
	::System::Single Field_4_28; // 0x110
	::System::Single Field_4_8; // 0x114

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_12__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_B247C6D88E785B91()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_12_METHOD_4_B247C6D88E785B91_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_12_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_12_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_12_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_12_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_6020519A7F0B2328(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_12_METHOD_4_6020519A7F0B2328_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_12_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}
};

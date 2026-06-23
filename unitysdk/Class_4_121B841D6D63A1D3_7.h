#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9201EB3268983C13.h"
#include "unitysdk/Class_4_121B841D6D63A1D3_7_Struct_2_52AD02145F5FCE36_15.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class CullingBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class Culling; }

#define CLASS_4_121B841D6D63A1D3_7_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x133800C0)
#define CLASS_4_121B841D6D63A1D3_7_METHOD_4_3E06E2491B129B22_OFFSET UNITYSDK_OFFSET(0x1337D170)
#define CLASS_4_121B841D6D63A1D3_7_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x133800B0)
#define CLASS_4_121B841D6D63A1D3_7_METHOD_4_A88DC3524C352DE6_OFFSET UNITYSDK_OFFSET(0x1337D690)
#define CLASS_4_121B841D6D63A1D3_7_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x133800A0)
#define CLASS_4_121B841D6D63A1D3_7_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1337D490)
#define CLASS_4_121B841D6D63A1D3_7_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1337F1B0)
#define CLASS_4_121B841D6D63A1D3_7__CTOR_OFFSET UNITYSDK_OFFSET(0x13380050)

inline static constexpr unsigned int Class_4_121B841D6D63A1D3_7_TypeDefinitionIndex = 57565;

class Class_4_121B841D6D63A1D3_7 : public ::Class_3_9201EB3268983C13<::UnityEngine::Rendering::Universal::Culling*, ::MoleMole::Timeline::CullingBehaviour*>
{
public:
	::System::Boolean Field_4_17; // 0x38
	::System::Boolean Field_4_32; // 0x39
	::System::Boolean Field_4_8; // 0x3A
	::System::Boolean Field_4_23; // 0x3B
	::System::Boolean Field_4_18; // 0x3C
	::System::Boolean Field_4_6; // 0x3D
	::System::Boolean Field_4_10; // 0x3E
	::System::Boolean Field_4_29; // 0x3F
	::System::Boolean Field_4_11; // 0x40
	::System::Boolean Field_4_31; // 0x41
	::System::Boolean Field_4_21; // 0x42
	::System::Boolean Field_4_2; // 0x43
	::System::Single Field_4_28; // 0x44
	::UnityEngine::Color Field_4_16; // 0x48
	::System::Boolean Field_4_25; // 0x58
	::System::Boolean Field_4_19; // 0x59
	::System::Boolean Field_4_30; // 0x5A
	::System::Boolean Field_4_22; // 0x5B
	::Class_4_121B841D6D63A1D3_7_Struct_2_52AD02145F5FCE36_15 Field_4_0; // 0x5C
	::System::Boolean Field_4_9; // 0xB8
	::System::Boolean Field_4_27; // 0xB9
	::System::Boolean Field_4_5; // 0xBA
	::System::Boolean Field_4_15; // 0xBB
	::UnityEngine::Color Field_4_24; // 0xBC
	::System::Single Field_4_26; // 0xCC
	::System::Boolean Field_4_13; // 0xD0
	::System::Boolean Field_4_14; // 0xD1
	::System::Boolean Field_4_3; // 0xD2
	::System::Boolean Field_4_1; // 0xD3
	::System::Boolean Field_4_7; // 0xD4
	::System::Boolean Field_4_12; // 0xD5
	::System::Boolean Field_4_20; // 0xD6
	::System::Boolean Field_4_4; // 0xD7

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_7__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_3E06E2491B129B22()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_7_METHOD_4_3E06E2491B129B22_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_7_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_7_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_7_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_A88DC3524C352DE6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_7_METHOD_4_A88DC3524C352DE6_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_7_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_7_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};

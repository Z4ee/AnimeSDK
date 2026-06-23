#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9201EB3268983C13.h"
#include "unitysdk/Class_4_121B841D6D63A1D3_23_Struct_2_52AD02145F5FCE36_42.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DepthOfFieldMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DofDebugMode.h"

namespace MoleMole::Timeline { class DepthOfFieldBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class DepthOfField; }

#define CLASS_4_121B841D6D63A1D3_23_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x142C71C0)
#define CLASS_4_121B841D6D63A1D3_23_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x142C71B0)
#define CLASS_4_121B841D6D63A1D3_23_METHOD_4_9D8CB5E47C1952BD_OFFSET UNITYSDK_OFFSET(0x142C4680)
#define CLASS_4_121B841D6D63A1D3_23_METHOD_4_A88DC3524C352DE6_OFFSET UNITYSDK_OFFSET(0x142C4B00)
#define CLASS_4_121B841D6D63A1D3_23_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x142C71A0)
#define CLASS_4_121B841D6D63A1D3_23_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x142C48E0)
#define CLASS_4_121B841D6D63A1D3_23_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x142C6250)
#define CLASS_4_121B841D6D63A1D3_23__CTOR_OFFSET UNITYSDK_OFFSET(0x142C7150)

inline static constexpr unsigned int Class_4_121B841D6D63A1D3_23_TypeDefinitionIndex = 86059;

class Class_4_121B841D6D63A1D3_23 : public ::Class_3_9201EB3268983C13<::UnityEngine::Rendering::Universal::DepthOfField*, ::MoleMole::Timeline::DepthOfFieldBehaviour*>
{
public:
	::System::Boolean Field_4_28; // 0x38
	::System::Single Field_4_4; // 0x3C
	::System::Single Field_4_22; // 0x40
	::System::Boolean Field_4_13; // 0x44
	::System::Boolean Field_4_25; // 0x45
	::System::Boolean Field_4_15; // 0x46
	::System::Boolean Field_4_21; // 0x47
	::System::Single Field_4_12; // 0x48
	::System::Single Field_4_8; // 0x4C
	::System::Boolean Field_4_29; // 0x50
	::System::Boolean Field_4_30; // 0x51
	::System::Boolean Field_4_7; // 0x52
	::System::Boolean Field_4_10; // 0x53
	::UnityEngine::Rendering::Universal::DepthOfFieldMode Field_4_2; // 0x54
	::System::Single Field_4_20; // 0x58
	::System::Single Field_4_14; // 0x5C
	::System::Boolean Field_4_32; // 0x60
	::System::Boolean Field_4_27; // 0x61
	::System::Boolean Field_4_5; // 0x62
	::System::Boolean Field_4_9; // 0x63
	::UnityEngine::Rendering::Universal::DofDebugMode Field_4_24; // 0x64
	::System::Int32 Field_4_18; // 0x68
	::System::Boolean Field_4_31; // 0x6C
	::System::Boolean Field_4_26; // 0x6D
	::System::Boolean Field_4_17; // 0x6E
	::System::Boolean Field_4_3; // 0x6F
	::System::Boolean Field_4_1; // 0x70
	::System::Boolean Field_4_11; // 0x71
	::System::Boolean Field_4_19; // 0x72
	::System::Boolean Field_4_23; // 0x73
	::System::Single Field_4_6; // 0x74
	::Class_4_121B841D6D63A1D3_23_Struct_2_52AD02145F5FCE36_42 Field_4_0; // 0x78
	::System::Single Field_4_16; // 0xE0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_23__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9D8CB5E47C1952BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_23_METHOD_4_9D8CB5E47C1952BD_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_23_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_23_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_23_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_23_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_A88DC3524C352DE6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_23_METHOD_4_A88DC3524C352DE6_OFFSET))(this, a1);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_23_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};

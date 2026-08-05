#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3E5380ECFB145ED5.h"
#include "unitysdk/Class_4_121B841D6D63A1D3_7_Struct_2_52AD02145F5FCE36_8.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DepthOfFieldMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DofDebugMode.h"

namespace MoleMole::Timeline { class DepthOfFieldBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class DepthOfField; }

#define CLASS_4_121B841D6D63A1D3_7_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x14EE3C90)
#define CLASS_4_121B841D6D63A1D3_7_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x14EE3CA0)
#define CLASS_4_121B841D6D63A1D3_7_METHOD_4_9D8CB5E47C1952BD_OFFSET UNITYSDK_OFFSET(0x14EE1170)
#define CLASS_4_121B841D6D63A1D3_7_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x14EE3C80)
#define CLASS_4_121B841D6D63A1D3_7_METHOD_4_EE1F78879782CC8A_OFFSET UNITYSDK_OFFSET(0x14EE1600)
#define CLASS_4_121B841D6D63A1D3_7_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x14EE13E0)
#define CLASS_4_121B841D6D63A1D3_7_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x14EE2D20)
#define CLASS_4_121B841D6D63A1D3_7__CTOR_OFFSET UNITYSDK_OFFSET(0x14EE3C30)

inline static constexpr unsigned int Class_4_121B841D6D63A1D3_7_TypeDefinitionIndex = 52969;

class Class_4_121B841D6D63A1D3_7 : public ::Class_3_3E5380ECFB145ED5<::UnityEngine::Rendering::Universal::DepthOfField*, ::MoleMole::Timeline::DepthOfFieldBehaviour*>
{
public:
	::System::Boolean Field_4_12; // 0x38
	::System::Boolean Field_4_28; // 0x39
	::System::Boolean Field_4_8; // 0x3A
	::System::Boolean Field_4_30; // 0x3B
	::UnityEngine::Rendering::Universal::DofDebugMode Field_4_25; // 0x3C
	::System::Single Field_4_9; // 0x40
	::System::Single Field_4_21; // 0x44
	::System::Single Field_4_19; // 0x48
	::System::Boolean Field_4_22; // 0x4C
	::System::Boolean Field_4_15; // 0x4D
	::System::Single Field_4_13; // 0x50
	::System::Boolean Field_4_34; // 0x54
	::System::Boolean Field_4_0; // 0x55
	::System::Boolean Field_4_29; // 0x56
	::System::Boolean Field_4_6; // 0x57
	::System::Boolean Field_4_14; // 0x58
	::System::Boolean Field_4_35; // 0x59
	::System::Boolean Field_4_24; // 0x5A
	::System::Boolean Field_4_31; // 0x5B
	::System::Single Field_4_17; // 0x5C
	::UnityEngine::Rendering::Universal::DepthOfFieldMode Field_4_7; // 0x60
	::System::Single Field_4_5; // 0x64
	::System::Boolean Field_4_10; // 0x68
	::System::Boolean Field_4_4; // 0x69
	::System::Boolean Field_4_26; // 0x6A
	::Class_4_121B841D6D63A1D3_7_Struct_2_52AD02145F5FCE36_8 Field_4_1; // 0x6C
	::System::Int32 Field_4_23; // 0xD4
	::System::Single Field_4_27; // 0xD8
	::System::Single Field_4_11; // 0xDC
	::System::Boolean Field_4_33; // 0xE0
	::System::Boolean Field_4_18; // 0xE1
	::System::Boolean Field_4_16; // 0xE2
	::System::Boolean Field_4_20; // 0xE3

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_7__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9D8CB5E47C1952BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_7_METHOD_4_9D8CB5E47C1952BD_OFFSET))(this);
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

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_7_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_EE1F78879782CC8A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_7_METHOD_4_EE1F78879782CC8A_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_7_METHOD_4_832295EC279E5994_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3E5380ECFB145ED5.h"
#include "unitysdk/Class_4_121B841D6D63A1D3_12_Struct_2_52AD02145F5FCE36_16.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class CullingBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class Culling; }

#define CLASS_4_121B841D6D63A1D3_12_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x1B33F770)
#define CLASS_4_121B841D6D63A1D3_12_METHOD_4_3E06E2491B129B22_OFFSET UNITYSDK_OFFSET(0x1B33C370)
#define CLASS_4_121B841D6D63A1D3_12_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1B33F760)
#define CLASS_4_121B841D6D63A1D3_12_METHOD_4_C56684D46320D793_OFFSET UNITYSDK_OFFSET(0x1B33C940)
#define CLASS_4_121B841D6D63A1D3_12_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x1B33F780)
#define CLASS_4_121B841D6D63A1D3_12_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1B33C6F0)
#define CLASS_4_121B841D6D63A1D3_12_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1B33E6C0)
#define CLASS_4_121B841D6D63A1D3_12__CTOR_OFFSET UNITYSDK_OFFSET(0x1B33F710)

inline static constexpr unsigned int Class_4_121B841D6D63A1D3_12_TypeDefinitionIndex = 64653;

class Class_4_121B841D6D63A1D3_12 : public ::Class_3_3E5380ECFB145ED5<::UnityEngine::Rendering::Universal::Culling*, ::MoleMole::Timeline::CullingBehaviour*>
{
public:
	::System::Boolean Field_4_37; // 0x38
	::System::Boolean Field_4_10; // 0x39
	::System::Boolean Field_4_28; // 0x3A
	::System::Boolean Field_4_30; // 0x3B
	::System::Boolean Field_4_4; // 0x3C
	::System::Boolean Field_4_21; // 0x3D
	::System::Boolean Field_4_11; // 0x3E
	::System::Boolean Field_4_20; // 0x3F
	::System::Boolean Field_4_7; // 0x40
	::System::Boolean Field_4_35; // 0x41
	::UnityEngine::Color Field_4_39; // 0x44
	::System::Boolean Field_4_32; // 0x54
	::System::Boolean Field_4_8; // 0x55
	::System::Boolean Field_4_9; // 0x56
	::System::Boolean Field_4_18; // 0x57
	::System::Boolean Field_4_16; // 0x58
	::System::Boolean Field_4_13; // 0x59
	::System::Boolean Field_4_19; // 0x5A
	::System::Boolean Field_4_26; // 0x5B
	::System::Boolean Field_4_27; // 0x5C
	::System::Boolean Field_4_0; // 0x5D
	::System::Boolean Field_4_34; // 0x5E
	::System::Boolean Field_4_38; // 0x5F
	::System::Single Field_4_29; // 0x60
	::UnityEngine::Color Field_4_17; // 0x64
	::Class_4_121B841D6D63A1D3_12_Struct_2_52AD02145F5FCE36_16 Field_4_1; // 0x74
	::UnityEngine::Color Field_4_33; // 0xF8
	::System::Boolean Field_4_22; // 0x108
	::System::Boolean Field_4_24; // 0x109
	::System::Boolean Field_4_23; // 0x10A
	::System::Boolean Field_4_5; // 0x10B
	::System::Single Field_4_31; // 0x10C
	::System::Boolean Field_4_14; // 0x110
	::System::Boolean Field_4_12; // 0x111
	::System::Boolean Field_4_6; // 0x112
	::System::Boolean Field_4_15; // 0x113
	::UnityEngine::Color Field_4_25; // 0x114

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_12__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_3E06E2491B129B22()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_12_METHOD_4_3E06E2491B129B22_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_12_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_12_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_12_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_12_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_C56684D46320D793(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_12_METHOD_4_C56684D46320D793_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_12_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}
};

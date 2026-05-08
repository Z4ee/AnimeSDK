#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9C33AF57B038AFD8.h"
#include "unitysdk/Class_4_121B841D6D63A1D3_6_Struct_2_52AD02145F5FCE36_8.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class FXFogBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class FXFog; }

#define CLASS_4_121B841D6D63A1D3_6_METHOD_4_045F1AAB54606068_OFFSET UNITYSDK_OFFSET(0x11E79750)
#define CLASS_4_121B841D6D63A1D3_6_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x11E7D820)
#define CLASS_4_121B841D6D63A1D3_6_METHOD_4_3BEE750D88C8D903_OFFSET UNITYSDK_OFFSET(0x11E7A020)
#define CLASS_4_121B841D6D63A1D3_6_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x11E7D810)
#define CLASS_4_121B841D6D63A1D3_6_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x11E7D800)
#define CLASS_4_121B841D6D63A1D3_6_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x11E79CB0)
#define CLASS_4_121B841D6D63A1D3_6_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x11E7C2D0)
#define CLASS_4_121B841D6D63A1D3_6__CTOR_OFFSET UNITYSDK_OFFSET(0x11E7D760)

inline static constexpr unsigned int Class_4_121B841D6D63A1D3_6_TypeDefinitionIndex = 46153;

class Class_4_121B841D6D63A1D3_6 : public ::Class_3_9C33AF57B038AFD8<::UnityEngine::Rendering::Universal::FXFog*, ::MoleMole::Timeline::FXFogBehaviour*>
{
public:
	::System::Single Field_4_26; // 0x38
	::System::Boolean Field_4_37; // 0x3C
	::System::Boolean Field_4_11; // 0x3D
	::System::Boolean Field_4_25; // 0x3E
	::System::Boolean Field_4_30; // 0x3F
	::System::Boolean Field_4_35; // 0x40
	::System::Boolean Field_4_19; // 0x41
	::System::Boolean Field_4_49; // 0x42
	::System::Boolean Field_4_43; // 0x43
	::System::Single Field_4_18; // 0x44
	::UnityEngine::Color Field_4_10; // 0x48
	::System::Single Field_4_40; // 0x58
	::System::Single Field_4_22; // 0x5C
	::System::Boolean Field_4_5; // 0x60
	::System::Boolean Field_4_31; // 0x61
	::System::Boolean Field_4_29; // 0x62
	::System::Boolean Field_4_21; // 0x63
	::System::Single Field_4_46; // 0x64
	::System::Single Field_4_12; // 0x68
	::System::Boolean Field_4_1; // 0x6C
	::System::Boolean Field_4_33; // 0x6D
	::System::Boolean Field_4_50; // 0x6E
	::System::Boolean Field_4_44; // 0x6F
	::System::Boolean Field_4_45; // 0x70
	::System::Boolean Field_4_3; // 0x71
	::System::Boolean Field_4_17; // 0x72
	::System::Boolean Field_4_23; // 0x73
	::UnityEngine::Color Field_4_20; // 0x74
	::Class_4_121B841D6D63A1D3_6_Struct_2_52AD02145F5FCE36_8 Field_4_0; // 0x84
	::System::Single Field_4_34; // 0x154
	::UnityEngine::Color Field_4_28; // 0x158
	::System::Boolean Field_4_2; // 0x168
	::System::Boolean Field_4_14; // 0x169
	::System::Boolean Field_4_27; // 0x16A
	::System::Boolean Field_4_9; // 0x16B
	::System::Single Field_4_38; // 0x16C
	::System::Single Field_4_4; // 0x170
	::System::Single Field_4_6; // 0x174
	::System::Boolean Field_4_13; // 0x178
	::System::Boolean Field_4_47; // 0x179
	::System::Boolean Field_4_39; // 0x17A
	::System::Boolean Field_4_16; // 0x17B
	::System::Single Field_4_8; // 0x17C
	::UnityEngine::Color Field_4_24; // 0x180
	::System::Single Field_4_48; // 0x190
	::System::Single Field_4_32; // 0x194
	::System::Single Field_4_36; // 0x198
	::System::Boolean Field_4_15; // 0x19C
	::System::Boolean Field_4_41; // 0x19D
	::System::Boolean Field_4_7; // 0x19E
	::System::Boolean Field_4_42; // 0x19F

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_6__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_045F1AAB54606068()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_6_METHOD_4_045F1AAB54606068_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_6_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_6_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_3BEE750D88C8D903(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_6_METHOD_4_3BEE750D88C8D903_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_6_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_6_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_6_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};

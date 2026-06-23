#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9201EB3268983C13.h"
#include "unitysdk/Class_4_121B841D6D63A1D3_3_Struct_2_52AD02145F5FCE36_8.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class FXFogBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class FXFog; }

#define CLASS_4_121B841D6D63A1D3_3_METHOD_4_045F1AAB54606068_OFFSET UNITYSDK_OFFSET(0x1953C6A0)
#define CLASS_4_121B841D6D63A1D3_3_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x19540760)
#define CLASS_4_121B841D6D63A1D3_3_METHOD_4_3BEE750D88C8D903_OFFSET UNITYSDK_OFFSET(0x1953CF90)
#define CLASS_4_121B841D6D63A1D3_3_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x19540750)
#define CLASS_4_121B841D6D63A1D3_3_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x19540740)
#define CLASS_4_121B841D6D63A1D3_3_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1953CC10)
#define CLASS_4_121B841D6D63A1D3_3_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1953F240)
#define CLASS_4_121B841D6D63A1D3_3__CTOR_OFFSET UNITYSDK_OFFSET(0x195406C0)

inline static constexpr unsigned int Class_4_121B841D6D63A1D3_3_TypeDefinitionIndex = 49550;

class Class_4_121B841D6D63A1D3_3 : public ::Class_3_9201EB3268983C13<::UnityEngine::Rendering::Universal::FXFog*, ::MoleMole::Timeline::FXFogBehaviour*>
{
public:
	::System::Boolean Field_4_33; // 0x38
	::System::Boolean Field_4_45; // 0x39
	::System::Boolean Field_4_16; // 0x3A
	::System::Boolean Field_4_7; // 0x3B
	::System::Boolean Field_4_50; // 0x3C
	::System::Boolean Field_4_37; // 0x3D
	::System::Boolean Field_4_2; // 0x3E
	::System::Boolean Field_4_43; // 0x3F
	::UnityEngine::Color Field_4_10; // 0x40
	::System::Single Field_4_40; // 0x50
	::UnityEngine::Color Field_4_20; // 0x54
	::System::Boolean Field_4_17; // 0x64
	::System::Boolean Field_4_9; // 0x65
	::System::Boolean Field_4_14; // 0x66
	::System::Boolean Field_4_25; // 0x67
	::System::Boolean Field_4_5; // 0x68
	::System::Boolean Field_4_27; // 0x69
	::System::Boolean Field_4_42; // 0x6A
	::System::Boolean Field_4_1; // 0x6B
	::System::Single Field_4_38; // 0x6C
	::System::Single Field_4_46; // 0x70
	::System::Single Field_4_36; // 0x74
	::System::Single Field_4_8; // 0x78
	::System::Single Field_4_12; // 0x7C
	::Class_4_121B841D6D63A1D3_3_Struct_2_52AD02145F5FCE36_8 Field_4_0; // 0x80
	::System::Boolean Field_4_31; // 0x150
	::System::Boolean Field_4_15; // 0x151
	::System::Boolean Field_4_19; // 0x152
	::System::Boolean Field_4_47; // 0x153
	::System::Single Field_4_32; // 0x154
	::System::Single Field_4_48; // 0x158
	::System::Boolean Field_4_13; // 0x15C
	::System::Boolean Field_4_41; // 0x15D
	::System::Boolean Field_4_21; // 0x15E
	::System::Boolean Field_4_39; // 0x15F
	::System::Boolean Field_4_3; // 0x160
	::System::Boolean Field_4_29; // 0x161
	::System::Boolean Field_4_49; // 0x162
	::System::Boolean Field_4_30; // 0x163
	::System::Single Field_4_4; // 0x164
	::System::Single Field_4_6; // 0x168
	::System::Single Field_4_34; // 0x16C
	::System::Single Field_4_18; // 0x170
	::System::Single Field_4_26; // 0x174
	::UnityEngine::Color Field_4_28; // 0x178
	::System::Boolean Field_4_23; // 0x188
	::System::Boolean Field_4_35; // 0x189
	::System::Boolean Field_4_44; // 0x18A
	::System::Boolean Field_4_11; // 0x18B
	::System::Single Field_4_22; // 0x18C
	::UnityEngine::Color Field_4_24; // 0x190

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_045F1AAB54606068()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_3_METHOD_4_045F1AAB54606068_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_3_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_3_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_3_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_3_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_3_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_3BEE750D88C8D903(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_3_METHOD_4_3BEE750D88C8D903_OFFSET))(this, a1);
	}
};

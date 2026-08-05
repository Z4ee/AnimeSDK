#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3E5380ECFB145ED5.h"
#include "unitysdk/Class_4_121B841D6D63A1D3_17_Struct_2_52AD02145F5FCE36_30.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class FXFogBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class FXFog; }

#define CLASS_4_121B841D6D63A1D3_17_METHOD_4_045F1AAB54606068_OFFSET UNITYSDK_OFFSET(0x17F08E40)
#define CLASS_4_121B841D6D63A1D3_17_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x174F7C20)
#define CLASS_4_121B841D6D63A1D3_17_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x174F7C00)
#define CLASS_4_121B841D6D63A1D3_17_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x174F7C10)
#define CLASS_4_121B841D6D63A1D3_17_METHOD_4_E5F4273C5EEF6F21_OFFSET UNITYSDK_OFFSET(0x174F7C30)
#define CLASS_4_121B841D6D63A1D3_17_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x17F093F0)
#define CLASS_4_121B841D6D63A1D3_17_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x17F09760)
#define CLASS_4_121B841D6D63A1D3_17__CTOR_OFFSET UNITYSDK_OFFSET(0x174F7B80)

inline static constexpr unsigned int Class_4_121B841D6D63A1D3_17_TypeDefinitionIndex = 79138;

class Class_4_121B841D6D63A1D3_17 : public ::Class_3_3E5380ECFB145ED5<::UnityEngine::Rendering::Universal::FXFog*, ::MoleMole::Timeline::FXFogBehaviour*>
{
public:
	::Class_4_121B841D6D63A1D3_17_Struct_2_52AD02145F5FCE36_30 Field_4_1; // 0x38
	::System::Single Field_4_39; // 0x108
	::System::Boolean Field_4_50; // 0x10C
	::System::Boolean Field_4_22; // 0x10D
	::System::Boolean Field_4_0; // 0x10E
	::System::Boolean Field_4_18; // 0x10F
	::System::Boolean Field_4_24; // 0x110
	::System::Boolean Field_4_16; // 0x111
	::System::Boolean Field_4_26; // 0x112
	::System::Boolean Field_4_45; // 0x113
	::UnityEngine::Color Field_4_29; // 0x114
	::System::Boolean Field_4_47; // 0x124
	::System::Boolean Field_4_35; // 0x125
	::System::Boolean Field_4_19; // 0x126
	::System::Boolean Field_4_4; // 0x127
	::UnityEngine::Color Field_4_21; // 0x128
	::System::Single Field_4_33; // 0x138
	::System::Boolean Field_4_44; // 0x13C
	::System::Boolean Field_4_20; // 0x13D
	::System::Boolean Field_4_12; // 0x13E
	::System::Boolean Field_4_42; // 0x13F
	::System::Boolean Field_4_28; // 0x140
	::System::Boolean Field_4_6; // 0x141
	::System::Boolean Field_4_34; // 0x142
	::System::Boolean Field_4_48; // 0x143
	::System::Single Field_4_11; // 0x144
	::UnityEngine::Color Field_4_25; // 0x148
	::UnityEngine::Color Field_4_15; // 0x158
	::System::Single Field_4_43; // 0x168
	::System::Single Field_4_5; // 0x16C
	::System::Single Field_4_9; // 0x170
	::System::Boolean Field_4_8; // 0x174
	::System::Boolean Field_4_17; // 0x175
	::System::Boolean Field_4_36; // 0x176
	::System::Boolean Field_4_55; // 0x177
	::System::Single Field_4_31; // 0x178
	::System::Single Field_4_13; // 0x17C
	::System::Single Field_4_41; // 0x180
	::System::Single Field_4_51; // 0x184
	::System::Single Field_4_23; // 0x188
	::System::Single Field_4_49; // 0x18C
	::System::Single Field_4_37; // 0x190
	::System::Single Field_4_27; // 0x194
	::System::Boolean Field_4_10; // 0x198
	::System::Boolean Field_4_32; // 0x199
	::System::Boolean Field_4_30; // 0x19A
	::System::Boolean Field_4_46; // 0x19B
	::System::Boolean Field_4_40; // 0x19C
	::System::Boolean Field_4_7; // 0x19D
	::System::Boolean Field_4_38; // 0x19E
	::System::Boolean Field_4_14; // 0x19F

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_17__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_045F1AAB54606068()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_17_METHOD_4_045F1AAB54606068_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_17_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_17_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_17_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_17_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_17_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5F4273C5EEF6F21(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_17_METHOD_4_E5F4273C5EEF6F21_OFFSET))(this, a1);
	}
};

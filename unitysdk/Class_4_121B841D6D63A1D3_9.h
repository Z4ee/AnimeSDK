#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3E5380ECFB145ED5.h"
#include "unitysdk/Class_4_121B841D6D63A1D3_9_Struct_2_52AD02145F5FCE36_9.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Timeline { class LensDistortionBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class LensDistortion; }

#define CLASS_4_121B841D6D63A1D3_9_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x18B5AE70)
#define CLASS_4_121B841D6D63A1D3_9_METHOD_4_344253BE4CAD911F_OFFSET UNITYSDK_OFFSET(0x18B59B90)
#define CLASS_4_121B841D6D63A1D3_9_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x18B5AE80)
#define CLASS_4_121B841D6D63A1D3_9_METHOD_4_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0x18B59900)
#define CLASS_4_121B841D6D63A1D3_9_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x18B5AE60)
#define CLASS_4_121B841D6D63A1D3_9_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x18B59A80)
#define CLASS_4_121B841D6D63A1D3_9_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x18B5A590)
#define CLASS_4_121B841D6D63A1D3_9__CTOR_OFFSET UNITYSDK_OFFSET(0x18B5AE30)

inline static constexpr unsigned int Class_4_121B841D6D63A1D3_9_TypeDefinitionIndex = 55440;

class Class_4_121B841D6D63A1D3_9 : public ::Class_3_3E5380ECFB145ED5<::UnityEngine::Rendering::Universal::LensDistortion*, ::MoleMole::Timeline::LensDistortionBehaviour*>
{
public:
	::System::Single Field_4_15; // 0x38
	::System::Single Field_4_7; // 0x3C
	::Class_4_121B841D6D63A1D3_9_Struct_2_52AD02145F5FCE36_9 Field_4_3; // 0x40
	::System::Single Field_4_1; // 0x78
	::System::Single Field_4_5; // 0x7C
	::UnityEngine::Vector2 Field_4_11; // 0x80
	::System::Single Field_4_9; // 0x88
	::System::Boolean Field_4_8; // 0x8C
	::System::Boolean Field_4_13; // 0x8D
	::System::Boolean Field_4_0; // 0x8E
	::System::Boolean Field_4_2; // 0x8F
	::System::Boolean Field_4_14; // 0x90
	::System::Boolean Field_4_10; // 0x91
	::System::Boolean Field_4_4; // 0x92
	::System::Boolean Field_4_6; // 0x93

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_9__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_B768DA94E3FD91D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_9_METHOD_4_B768DA94E3FD91D9_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_9_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_9_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_9_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_9_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_9_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_344253BE4CAD911F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_9_METHOD_4_344253BE4CAD911F_OFFSET))(this, a1);
	}
};

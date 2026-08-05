#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3E5380ECFB145ED5.h"
#include "unitysdk/Class_4_9D07C99CA0E3FDE0_Struct_2_52AD02145F5FCE36_17.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DownSampleLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SampleDistanceMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Timeline { class DirectionalBlurBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class DirectionalBlur; }

#define CLASS_4_9D07C99CA0E3FDE0_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x185DF240)
#define CLASS_4_9D07C99CA0E3FDE0_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x185DF230)
#define CLASS_4_9D07C99CA0E3FDE0_METHOD_4_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x185DDEB0)
#define CLASS_4_9D07C99CA0E3FDE0_METHOD_4_C56684D46320D793_OFFSET UNITYSDK_OFFSET(0x185DE090)
#define CLASS_4_9D07C99CA0E3FDE0_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x185DF220)
#define CLASS_4_9D07C99CA0E3FDE0_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x185DDFB0)
#define CLASS_4_9D07C99CA0E3FDE0_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x185DEA10)
#define CLASS_4_9D07C99CA0E3FDE0__CTOR_OFFSET UNITYSDK_OFFSET(0x185DF1F0)

inline static constexpr unsigned int Class_4_9D07C99CA0E3FDE0_TypeDefinitionIndex = 67369;

class Class_4_9D07C99CA0E3FDE0 : public ::Class_3_3E5380ECFB145ED5<::UnityEngine::Rendering::Universal::DirectionalBlur*, ::MoleMole::Timeline::DirectionalBlurBehaviour*>
{
public:
	::System::Boolean Field_4_8; // 0x38
	::System::Boolean Field_4_15; // 0x39
	::System::Boolean Field_4_2; // 0x3A
	::System::Int32 Field_4_5; // 0x3C
	::UnityEngine::Rendering::Universal::DownSampleLevel Field_4_1; // 0x40
	::System::Single Field_4_11; // 0x44
	::System::Boolean Field_4_4; // 0x48
	::System::Boolean Field_4_0; // 0x49
	::System::Boolean Field_4_10; // 0x4A
	::System::Boolean Field_4_6; // 0x4B
	::UnityEngine::Rendering::Universal::SampleDistanceMode Field_4_7; // 0x4C
	::Class_4_9D07C99CA0E3FDE0_Struct_2_52AD02145F5FCE36_17 Field_4_3; // 0x50
	::UnityEngine::Vector2 Field_4_9; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9D07C99CA0E3FDE0__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9D07C99CA0E3FDE0_METHOD_4_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_9D07C99CA0E3FDE0_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_9D07C99CA0E3FDE0_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_9D07C99CA0E3FDE0_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9D07C99CA0E3FDE0_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_C56684D46320D793(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_9D07C99CA0E3FDE0_METHOD_4_C56684D46320D793_OFFSET))(this, a1);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_9D07C99CA0E3FDE0_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};

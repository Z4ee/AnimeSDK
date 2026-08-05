#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3E5380ECFB145ED5.h"
#include "unitysdk/Class_4_D3ADAFFC8A5FA104_Struct_2_52AD02145F5FCE36_24.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Timeline { class VignetteBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class Vignette; }

#define CLASS_4_D3ADAFFC8A5FA104_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x10B27390)
#define CLASS_4_D3ADAFFC8A5FA104_METHOD_4_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x10B25FE0)
#define CLASS_4_D3ADAFFC8A5FA104_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x10B273A0)
#define CLASS_4_D3ADAFFC8A5FA104_METHOD_4_C56684D46320D793_OFFSET UNITYSDK_OFFSET(0x10B26200)
#define CLASS_4_D3ADAFFC8A5FA104_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x10B273B0)
#define CLASS_4_D3ADAFFC8A5FA104_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x10B26110)
#define CLASS_4_D3ADAFFC8A5FA104_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x10B26B60)
#define CLASS_4_D3ADAFFC8A5FA104__CTOR_OFFSET UNITYSDK_OFFSET(0x10B27350)

inline static constexpr unsigned int Class_4_D3ADAFFC8A5FA104_TypeDefinitionIndex = 72567;

class Class_4_D3ADAFFC8A5FA104 : public ::Class_3_3E5380ECFB145ED5<::UnityEngine::Rendering::Universal::Vignette*, ::MoleMole::Timeline::VignetteBehaviour*>
{
public:
	::Class_4_D3ADAFFC8A5FA104_Struct_2_52AD02145F5FCE36_24 Field_4_0; // 0x38
	::UnityEngine::Vector2 Field_4_4; // 0x70
	::System::Boolean Field_4_11; // 0x78
	::System::Boolean Field_4_12; // 0x79
	::System::Boolean Field_4_13; // 0x7A
	::System::Boolean Field_4_9; // 0x7B
	::System::Single Field_4_8; // 0x7C
	::System::Single Field_4_10; // 0x80
	::System::Boolean Field_4_5; // 0x84
	::System::Boolean Field_4_7; // 0x85
	::System::Boolean Field_4_14; // 0x86
	::System::Boolean Field_4_15; // 0x87
	::UnityEngine::Color Field_4_6; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D3ADAFFC8A5FA104__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D3ADAFFC8A5FA104_METHOD_4_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_D3ADAFFC8A5FA104_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_D3ADAFFC8A5FA104_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_D3ADAFFC8A5FA104_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D3ADAFFC8A5FA104_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_C56684D46320D793(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_D3ADAFFC8A5FA104_METHOD_4_C56684D46320D793_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_D3ADAFFC8A5FA104_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9201EB3268983C13.h"
#include "unitysdk/Class_4_0832FA22DB95B49D_Struct_2_52AD02145F5FCE36_2.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class UnsharpMaskBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class UnsharpMask; }

#define CLASS_4_0832FA22DB95B49D_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x15C8B040)
#define CLASS_4_0832FA22DB95B49D_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x15C8B060)
#define CLASS_4_0832FA22DB95B49D_METHOD_4_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x15C89A80)
#define CLASS_4_0832FA22DB95B49D_METHOD_4_C56684D46320D793_OFFSET UNITYSDK_OFFSET(0x15C89C80)
#define CLASS_4_0832FA22DB95B49D_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x15C8B050)
#define CLASS_4_0832FA22DB95B49D_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x15C89B90)
#define CLASS_4_0832FA22DB95B49D_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x15C8A780)
#define CLASS_4_0832FA22DB95B49D__CTOR_OFFSET UNITYSDK_OFFSET(0x15C8B020)

inline static constexpr unsigned int Class_4_0832FA22DB95B49D_TypeDefinitionIndex = 41993;

class Class_4_0832FA22DB95B49D : public ::Class_3_9201EB3268983C13<::UnityEngine::Rendering::Universal::UnsharpMask*, ::MoleMole::Timeline::UnsharpMaskBehaviour*>
{
public:
	::System::Boolean Field_4_11; // 0x38
	::System::Boolean Field_4_1; // 0x39
	::System::Boolean Field_4_3; // 0x3A
	::System::Boolean Field_4_14; // 0x3B
	::System::Boolean Field_4_13; // 0x3C
	::System::Boolean Field_4_9; // 0x3D
	::System::Boolean Field_4_5; // 0x3E
	::System::Boolean Field_4_2; // 0x3F
	::System::Boolean Field_4_7; // 0x40
	::System::Boolean Field_4_12; // 0x41
	::System::Int32 Field_4_8; // 0x44
	::System::Single Field_4_4; // 0x48
	::Class_4_0832FA22DB95B49D_Struct_2_52AD02145F5FCE36_2 Field_4_0; // 0x4C
	::System::Single Field_4_6; // 0x74
	::System::Single Field_4_10; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0832FA22DB95B49D__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0832FA22DB95B49D_METHOD_4_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_0832FA22DB95B49D_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_0832FA22DB95B49D_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_0832FA22DB95B49D_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_C56684D46320D793(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_0832FA22DB95B49D_METHOD_4_C56684D46320D793_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_0832FA22DB95B49D_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0832FA22DB95B49D_METHOD_4_832295EC279E5994_OFFSET))(this);
	}
};

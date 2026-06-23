#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9201EB3268983C13.h"
#include "unitysdk/Class_4_0832FA22DB95B49D_1_Struct_2_52AD02145F5FCE36_3.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurDirection.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurQuality.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class MotionBlurBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class MotionBlur; }

#define CLASS_4_0832FA22DB95B49D_1_METHOD_4_1D9EE327BF7D6281_OFFSET UNITYSDK_OFFSET(0x19E1D940)
#define CLASS_4_0832FA22DB95B49D_1_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x19E1EB40)
#define CLASS_4_0832FA22DB95B49D_1_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x19E1EB50)
#define CLASS_4_0832FA22DB95B49D_1_METHOD_4_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x19E1D720)
#define CLASS_4_0832FA22DB95B49D_1_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x19E1EB30)
#define CLASS_4_0832FA22DB95B49D_1_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x19E1D840)
#define CLASS_4_0832FA22DB95B49D_1_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x19E1E290)
#define CLASS_4_0832FA22DB95B49D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19E1EB00)

inline static constexpr unsigned int Class_4_0832FA22DB95B49D_1_TypeDefinitionIndex = 42822;

class Class_4_0832FA22DB95B49D_1 : public ::Class_3_9201EB3268983C13<::UnityEngine::Rendering::Universal::MotionBlur*, ::MoleMole::Timeline::MotionBlurBehaviour*>
{
public:
	::System::Single Field_4_6; // 0x38
	::UnityEngine::NAPRenderPipeline0::MotionBlurQuality Field_4_8; // 0x3C
	::System::Single Field_4_12; // 0x40
	::System::Boolean Field_4_1; // 0x44
	::System::Boolean Field_4_9; // 0x45
	::System::Boolean Field_4_14; // 0x46
	::System::Boolean Field_4_3; // 0x47
	::UnityEngine::NAPRenderPipeline0::MotionBlurMode Field_4_2; // 0x48
	::System::Boolean Field_4_11; // 0x4C
	::System::Boolean Field_4_7; // 0x4D
	::System::Boolean Field_4_5; // 0x4E
	::System::Boolean Field_4_13; // 0x4F
	::Class_4_0832FA22DB95B49D_1_Struct_2_52AD02145F5FCE36_3 Field_4_0; // 0x50
	::UnityEngine::NAPRenderPipeline0::MotionBlurDirection Field_4_10; // 0x84
	::System::Single Field_4_4; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0832FA22DB95B49D_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0832FA22DB95B49D_1_METHOD_4_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_0832FA22DB95B49D_1_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_0832FA22DB95B49D_1_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_1D9EE327BF7D6281(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_0832FA22DB95B49D_1_METHOD_4_1D9EE327BF7D6281_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_0832FA22DB95B49D_1_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_0832FA22DB95B49D_1_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0832FA22DB95B49D_1_METHOD_4_832295EC279E5994_OFFSET))(this);
	}
};

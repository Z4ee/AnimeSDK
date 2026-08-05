#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3E5380ECFB145ED5.h"
#include "unitysdk/Class_4_0832FA22DB95B49D_Struct_2_52AD02145F5FCE36_11.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/TonemappingMode.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class TonemappingBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class Tonemapping; }

#define CLASS_4_0832FA22DB95B49D_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x193CB490)
#define CLASS_4_0832FA22DB95B49D_METHOD_4_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x193C9E90)
#define CLASS_4_0832FA22DB95B49D_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x193CB4B0)
#define CLASS_4_0832FA22DB95B49D_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x193CB4A0)
#define CLASS_4_0832FA22DB95B49D_METHOD_4_F3D7D2AD64A5C158_OFFSET UNITYSDK_OFFSET(0x193CA110)
#define CLASS_4_0832FA22DB95B49D_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x193C9FE0)
#define CLASS_4_0832FA22DB95B49D_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x193CAB80)
#define CLASS_4_0832FA22DB95B49D__CTOR_OFFSET UNITYSDK_OFFSET(0x193CB460)

inline static constexpr unsigned int Class_4_0832FA22DB95B49D_TypeDefinitionIndex = 56071;

class Class_4_0832FA22DB95B49D : public ::Class_3_3E5380ECFB145ED5<::UnityEngine::Rendering::Universal::Tonemapping*, ::MoleMole::Timeline::TonemappingBehaviour*>
{
public:
	::System::Single Field_4_15; // 0x38
	::System::Boolean Field_4_10; // 0x3C
	::System::Boolean Field_4_12; // 0x3D
	::System::Boolean Field_4_2; // 0x3E
	::System::Boolean Field_4_4; // 0x3F
	::System::Boolean Field_4_14; // 0x40
	::System::Single Field_4_7; // 0x44
	::System::Single Field_4_9; // 0x48
	::System::Single Field_4_5; // 0x4C
	::Class_4_0832FA22DB95B49D_Struct_2_52AD02145F5FCE36_11 Field_4_3; // 0x50
	::System::Single Field_4_13; // 0x8C
	::System::Boolean Field_4_6; // 0x90
	::System::Boolean Field_4_19; // 0x91
	::System::Boolean Field_4_0; // 0x92
	::System::Boolean Field_4_8; // 0x93
	::System::Single Field_4_11; // 0x94
	::UnityEngine::NAPRenderPipeline0::TonemappingMode Field_4_1; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0832FA22DB95B49D__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0832FA22DB95B49D_METHOD_4_79830F666EE579C0_OFFSET))(this);
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

	::System::Void Method_4_F3D7D2AD64A5C158(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_0832FA22DB95B49D_METHOD_4_F3D7D2AD64A5C158_OFFSET))(this, a1);
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

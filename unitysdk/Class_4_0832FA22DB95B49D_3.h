#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9C33AF57B038AFD8.h"
#include "unitysdk/Class_4_0832FA22DB95B49D_3_Struct_2_52AD02145F5FCE36_39.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/TonemappingMode.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class TonemappingBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class Tonemapping; }

#define CLASS_4_0832FA22DB95B49D_3_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xF08B120)
#define CLASS_4_0832FA22DB95B49D_3_METHOD_4_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0xF089AD0)
#define CLASS_4_0832FA22DB95B49D_3_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xF08B110)
#define CLASS_4_0832FA22DB95B49D_3_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0xF08B100)
#define CLASS_4_0832FA22DB95B49D_3_METHOD_4_F3D7D2AD64A5C158_OFFSET UNITYSDK_OFFSET(0xF089D40)
#define CLASS_4_0832FA22DB95B49D_3_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xF089C20)
#define CLASS_4_0832FA22DB95B49D_3_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xF08A7B0)
#define CLASS_4_0832FA22DB95B49D_3__CTOR_OFFSET UNITYSDK_OFFSET(0xF08B0D0)

inline static constexpr unsigned int Class_4_0832FA22DB95B49D_3_TypeDefinitionIndex = 77556;

class Class_4_0832FA22DB95B49D_3 : public ::Class_3_9C33AF57B038AFD8<::UnityEngine::Rendering::Universal::Tonemapping*, ::MoleMole::Timeline::TonemappingBehaviour*>
{
public:
	::System::Boolean Field_4_15; // 0x38
	::System::Boolean Field_4_9; // 0x39
	::System::Boolean Field_4_11; // 0x3A
	::System::Boolean Field_4_13; // 0x3B
	::System::Boolean Field_4_3; // 0x3C
	::System::Boolean Field_4_1; // 0x3D
	::System::Boolean Field_4_7; // 0x3E
	::System::Boolean Field_4_16; // 0x3F
	::System::Single Field_4_8; // 0x40
	::System::Single Field_4_4; // 0x44
	::System::Single Field_4_6; // 0x48
	::System::Single Field_4_10; // 0x4C
	::Class_4_0832FA22DB95B49D_3_Struct_2_52AD02145F5FCE36_39 Field_4_0; // 0x50
	::UnityEngine::NAPRenderPipeline0::TonemappingMode Field_4_2; // 0x8C
	::System::Boolean Field_4_5; // 0x90
	::System::Single Field_4_12; // 0x94
	::System::Single Field_4_14; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0832FA22DB95B49D_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0832FA22DB95B49D_3_METHOD_4_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_0832FA22DB95B49D_3_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_0832FA22DB95B49D_3_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_F3D7D2AD64A5C158(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_0832FA22DB95B49D_3_METHOD_4_F3D7D2AD64A5C158_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_0832FA22DB95B49D_3_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0832FA22DB95B49D_3_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_0832FA22DB95B49D_3_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};

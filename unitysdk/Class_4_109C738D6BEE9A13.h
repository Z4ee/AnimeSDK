#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3E5380ECFB145ED5.h"
#include "unitysdk/Class_4_109C738D6BEE9A13_Struct_2_2DFEB74E3D4B48CA_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class SplitToningBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class SplitToning; }

#define CLASS_4_109C738D6BEE9A13_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x140353A0)
#define CLASS_4_109C738D6BEE9A13_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x14035390)
#define CLASS_4_109C738D6BEE9A13_METHOD_4_8A3E316C82E9B764_OFFSET UNITYSDK_OFFSET(0x140346D0)
#define CLASS_4_109C738D6BEE9A13_METHOD_4_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x14034540)
#define CLASS_4_109C738D6BEE9A13_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x14035380)
#define CLASS_4_109C738D6BEE9A13_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x14034610)
#define CLASS_4_109C738D6BEE9A13_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x14034CB0)
#define CLASS_4_109C738D6BEE9A13__CTOR_OFFSET UNITYSDK_OFFSET(0x14035350)

inline static constexpr unsigned int Class_4_109C738D6BEE9A13_TypeDefinitionIndex = 62653;

class Class_4_109C738D6BEE9A13 : public ::Class_3_3E5380ECFB145ED5<::UnityEngine::Rendering::Universal::SplitToning*, ::MoleMole::Timeline::SplitToningBehaviour*>
{
public:
	::UnityEngine::Color Field_4_7; // 0x38
	::System::Boolean Field_4_2; // 0x48
	::System::Boolean Field_4_11; // 0x49
	::System::Boolean Field_4_6; // 0x4A
	::System::Boolean Field_4_0; // 0x4B
	::Class_4_109C738D6BEE9A13_Struct_2_2DFEB74E3D4B48CA_1 Field_4_3; // 0x4C
	::System::Boolean Field_4_4; // 0x80
	::UnityEngine::Color Field_4_1; // 0x84
	::System::Single Field_4_5; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_109C738D6BEE9A13__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_109C738D6BEE9A13_METHOD_4_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_109C738D6BEE9A13_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_109C738D6BEE9A13_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_8A3E316C82E9B764(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_109C738D6BEE9A13_METHOD_4_8A3E316C82E9B764_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_109C738D6BEE9A13_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_109C738D6BEE9A13_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_109C738D6BEE9A13_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};

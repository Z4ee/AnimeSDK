#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3E5380ECFB145ED5.h"
#include "unitysdk/Class_4_0DF44C6A92A6D32F_1_Struct_2_52AD02145F5FCE36_15.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class PartialBlurBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class PartialBlur; }

#define CLASS_4_0DF44C6A92A6D32F_1_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x1532FAF0)
#define CLASS_4_0DF44C6A92A6D32F_1_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1532FAE0)
#define CLASS_4_0DF44C6A92A6D32F_1_METHOD_4_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x1532E760)
#define CLASS_4_0DF44C6A92A6D32F_1_METHOD_4_C56684D46320D793_OFFSET UNITYSDK_OFFSET(0x1532E930)
#define CLASS_4_0DF44C6A92A6D32F_1_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x1532FB00)
#define CLASS_4_0DF44C6A92A6D32F_1_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1532E850)
#define CLASS_4_0DF44C6A92A6D32F_1_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1532F330)
#define CLASS_4_0DF44C6A92A6D32F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1532FAC0)

inline static constexpr unsigned int Class_4_0DF44C6A92A6D32F_1_TypeDefinitionIndex = 63811;

class Class_4_0DF44C6A92A6D32F_1 : public ::Class_3_3E5380ECFB145ED5<::UnityEngine::Rendering::Universal::PartialBlur*, ::MoleMole::Timeline::PartialBlurBehaviour*>
{
public:
	::System::Boolean Field_4_15; // 0x38
	::System::Boolean Field_4_12; // 0x39
	::System::Boolean Field_4_5; // 0x3A
	::System::Boolean Field_4_11; // 0x3B
	::System::Int32 Field_4_6; // 0x3C
	::Class_4_0DF44C6A92A6D32F_1_Struct_2_52AD02145F5FCE36_15 Field_4_0; // 0x40
	::System::Single Field_4_10; // 0x68
	::System::Single Field_4_4; // 0x6C
	::System::Boolean Field_4_14; // 0x70
	::System::Boolean Field_4_7; // 0x71
	::System::Boolean Field_4_13; // 0x72
	::System::Boolean Field_4_9; // 0x73
	::System::Int32 Field_4_8; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0DF44C6A92A6D32F_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0DF44C6A92A6D32F_1_METHOD_4_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_0DF44C6A92A6D32F_1_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_0DF44C6A92A6D32F_1_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_C56684D46320D793(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_0DF44C6A92A6D32F_1_METHOD_4_C56684D46320D793_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0DF44C6A92A6D32F_1_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_0DF44C6A92A6D32F_1_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_0DF44C6A92A6D32F_1_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}
};

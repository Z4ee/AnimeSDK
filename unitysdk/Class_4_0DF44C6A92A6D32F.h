#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9201EB3268983C13.h"
#include "unitysdk/Class_4_0DF44C6A92A6D32F_Struct_2_52AD02145F5FCE36_4.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class PartialBlurBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class PartialBlur; }

#define CLASS_4_0DF44C6A92A6D32F_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x15591E10)
#define CLASS_4_0DF44C6A92A6D32F_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x15591E20)
#define CLASS_4_0DF44C6A92A6D32F_METHOD_4_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x15590A40)
#define CLASS_4_0DF44C6A92A6D32F_METHOD_4_C56684D46320D793_OFFSET UNITYSDK_OFFSET(0x15590C10)
#define CLASS_4_0DF44C6A92A6D32F_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x15591E00)
#define CLASS_4_0DF44C6A92A6D32F_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x15590B30)
#define CLASS_4_0DF44C6A92A6D32F_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x15591610)
#define CLASS_4_0DF44C6A92A6D32F__CTOR_OFFSET UNITYSDK_OFFSET(0x15591DE0)

inline static constexpr unsigned int Class_4_0DF44C6A92A6D32F_TypeDefinitionIndex = 43680;

class Class_4_0DF44C6A92A6D32F : public ::Class_3_9201EB3268983C13<::UnityEngine::Rendering::Universal::PartialBlur*, ::MoleMole::Timeline::PartialBlurBehaviour*>
{
public:
	::System::Single Field_4_4; // 0x38
	::System::Int32 Field_4_8; // 0x3C
	::System::Int32 Field_4_2; // 0x40
	::Class_4_0DF44C6A92A6D32F_Struct_2_52AD02145F5FCE36_4 Field_4_0; // 0x44
	::System::Single Field_4_6; // 0x6C
	::System::Boolean Field_4_9; // 0x70
	::System::Boolean Field_4_7; // 0x71
	::System::Boolean Field_4_11; // 0x72
	::System::Boolean Field_4_10; // 0x73
	::System::Boolean Field_4_5; // 0x74
	::System::Boolean Field_4_1; // 0x75
	::System::Boolean Field_4_12; // 0x76
	::System::Boolean Field_4_3; // 0x77

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0DF44C6A92A6D32F__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0DF44C6A92A6D32F_METHOD_4_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_0DF44C6A92A6D32F_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_0DF44C6A92A6D32F_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_C56684D46320D793(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_0DF44C6A92A6D32F_METHOD_4_C56684D46320D793_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_0DF44C6A92A6D32F_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_0DF44C6A92A6D32F_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0DF44C6A92A6D32F_METHOD_4_832295EC279E5994_OFFSET))(this);
	}
};

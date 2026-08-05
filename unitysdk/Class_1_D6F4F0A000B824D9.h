#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/Struct_2_4355D25F091C65D0.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"

namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_D6F4F0A000B824D9_METHOD_1_94120EC4EA10370D_OFFSET UNITYSDK_OFFSET(0x194F4D00)
#define CLASS_1_D6F4F0A000B824D9_METHOD_1_CF5D6CA4722C55D0_OFFSET UNITYSDK_OFFSET(0x194F49E0)

inline static constexpr unsigned int Class_1_D6F4F0A000B824D9_TypeDefinitionIndex = 72879;

class Class_1_D6F4F0A000B824D9 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x0; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x2; // 0x0

	static ::System::Void Method_1_CF5D6CA4722C55D0(::UnityEngine::AnimationCurve* a1, ::Foundation::NativeMemoryBuilder* a2, ::System::Span_1<::Foundation::NativeMemoryRequestHandle> a3)
	{
		return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::Foundation::NativeMemoryBuilder*, ::System::Span_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + CLASS_1_D6F4F0A000B824D9_METHOD_1_CF5D6CA4722C55D0_OFFSET))(a1, a2, a3);
	}

	static ::Struct_2_4355D25F091C65D0 Method_1_94120EC4EA10370D(::UnityEngine::AnimationCurve* a1, ::Foundation::NativeMemory* a2, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle> a3)
	{
		return ((::Struct_2_4355D25F091C65D0(*)(::UnityEngine::AnimationCurve*, ::Foundation::NativeMemory*, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + CLASS_1_D6F4F0A000B824D9_METHOD_1_94120EC4EA10370D_OFFSET))(a1, a2, a3);
	}
};

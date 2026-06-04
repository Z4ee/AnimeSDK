#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }

#define CLASS_1_A767C3DCD789E4BF_METHOD_1_146F59774371ACCD_OFFSET UNITYSDK_OFFSET(0x13C41780)
#define CLASS_1_A767C3DCD789E4BF_METHOD_1_3B5E81E976A08A3C_OFFSET UNITYSDK_OFFSET(0x13C41560)
#define CLASS_1_A767C3DCD789E4BF_METHOD_1_66CDC68B6C884A76_OFFSET UNITYSDK_OFFSET(0x13C414F0)
#define CLASS_1_A767C3DCD789E4BF__CTOR_OFFSET UNITYSDK_OFFSET(0x13C41550)

inline static constexpr unsigned int Class_1_A767C3DCD789E4BF_TypeDefinitionIndex = 66595;

class Class_1_A767C3DCD789E4BF : public ::System::Object
{
public:
	::UnityEngine::Animator* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A767C3DCD789E4BF__CTOR_OFFSET))(this);
	}

	static ::Class_1_A767C3DCD789E4BF* Method_1_66CDC68B6C884A76(::UnityEngine::Animator* a1)
	{
		return ((::Class_1_A767C3DCD789E4BF*(*)(::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_A767C3DCD789E4BF_METHOD_1_66CDC68B6C884A76_OFFSET))(a1);
	}

	::System::Void Method_1_3B5E81E976A08A3C(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A767C3DCD789E4BF_METHOD_1_3B5E81E976A08A3C_OFFSET))(this, a1);
	}

	::System::Void Method_1_146F59774371ACCD(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A767C3DCD789E4BF_METHOD_1_146F59774371ACCD_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_2_BE37E8E5B7815649_METHOD_2_9AF9F778CB2EF62A_OFFSET UNITYSDK_OFFSET(0x1A035260)
#define CLASS_2_BE37E8E5B7815649__CTOR_OFFSET UNITYSDK_OFFSET(0x1A035300)
#define CLASS_2_BE37E8E5B7815649__ONBIND_OFFSET UNITYSDK_OFFSET(0x1A035200)

inline static constexpr unsigned int Class_2_BE37E8E5B7815649_TypeDefinitionIndex = 71843;

class Class_2_BE37E8E5B7815649 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* PJGPDOBIALF; // 0x0
	// static const ::System::String* FBMLNNHEALE; // 0x0
	::UnityEngine::Animation* JPHOOFFIAAH; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE37E8E5B7815649__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE37E8E5B7815649__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_9AF9F778CB2EF62A(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BE37E8E5B7815649_METHOD_2_9AF9F778CB2EF62A_OFFSET))(this, a1, a2);
	}
};

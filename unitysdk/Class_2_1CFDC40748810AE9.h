#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A3172A5E6971D457.h"

namespace System { class Object; }
namespace System { class Type; }
namespace UnityEngine::Events { class UnityEvent; }

#define CLASS_2_1CFDC40748810AE9_METHOD_2_2ED6C3773AA1E488_OFFSET UNITYSDK_OFFSET(0x1D0EB330)
#define CLASS_2_1CFDC40748810AE9_METHOD_2_3095BEE394F7510C_OFFSET UNITYSDK_OFFSET(0x1D0EB280)
#define CLASS_2_1CFDC40748810AE9_METHOD_2_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x1D0EB170)
#define CLASS_2_1CFDC40748810AE9_METHOD_2_9AC6CF729C0A70E0_OFFSET UNITYSDK_OFFSET(0x1D0EB1D0)
#define CLASS_2_1CFDC40748810AE9__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0E2220)

inline static constexpr unsigned int Class_2_1CFDC40748810AE9_TypeDefinitionIndex = 41425;

class Class_2_1CFDC40748810AE9 : public ::Class_1_A3172A5E6971D457<::UnityEngine::Events::UnityEvent*>
{
public:
	::System::Void _ctor(::System::Object* a1, ::UnityEngine::Events::UnityEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Events::UnityEvent*))((::PBYTE)hIl2Cpp + CLASS_2_1CFDC40748810AE9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Type* Method_2_4FB5F56430673EA6()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CFDC40748810AE9_METHOD_2_4FB5F56430673EA6_OFFSET))(this);
	}

	::System::Void Method_2_9AC6CF729C0A70E0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CFDC40748810AE9_METHOD_2_9AC6CF729C0A70E0_OFFSET))(this);
	}

	::System::Void Method_2_3095BEE394F7510C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CFDC40748810AE9_METHOD_2_3095BEE394F7510C_OFFSET))(this);
	}

	::System::Void Method_2_2ED6C3773AA1E488()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CFDC40748810AE9_METHOD_2_2ED6C3773AA1E488_OFFSET))(this);
	}
};

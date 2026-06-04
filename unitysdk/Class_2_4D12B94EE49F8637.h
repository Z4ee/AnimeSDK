#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A3172A5E6971D457.h"

namespace System { class Object; }
namespace System { class Type; }
namespace UnityEngine::Events { class UnityEvent; }

#define CLASS_2_4D12B94EE49F8637_METHOD_2_2BC55A66CB2B0118_OFFSET UNITYSDK_OFFSET(0x1AC39000)
#define CLASS_2_4D12B94EE49F8637_METHOD_2_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x1AC38E10)
#define CLASS_2_4D12B94EE49F8637_METHOD_2_8894E534FED3129C_OFFSET UNITYSDK_OFFSET(0x1AC38F20)
#define CLASS_2_4D12B94EE49F8637_METHOD_2_9AC6CF729C0A70E0_OFFSET UNITYSDK_OFFSET(0x1AC38E70)
#define CLASS_2_4D12B94EE49F8637__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC30EE0)

inline static constexpr unsigned int Class_2_4D12B94EE49F8637_TypeDefinitionIndex = 40610;

class Class_2_4D12B94EE49F8637 : public ::Class_1_A3172A5E6971D457<::UnityEngine::Events::UnityEvent*>
{
public:
	::System::Void _ctor(::System::Object* a1, ::UnityEngine::Events::UnityEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Events::UnityEvent*))((::PBYTE)hIl2Cpp + CLASS_2_4D12B94EE49F8637__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Type* Method_2_4FB5F56430673EA6()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D12B94EE49F8637_METHOD_2_4FB5F56430673EA6_OFFSET))(this);
	}

	::System::Void Method_2_9AC6CF729C0A70E0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D12B94EE49F8637_METHOD_2_9AC6CF729C0A70E0_OFFSET))(this);
	}

	::System::Void Method_2_8894E534FED3129C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D12B94EE49F8637_METHOD_2_8894E534FED3129C_OFFSET))(this);
	}

	::System::Void Method_2_2BC55A66CB2B0118()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D12B94EE49F8637_METHOD_2_2BC55A66CB2B0118_OFFSET))(this);
	}
};

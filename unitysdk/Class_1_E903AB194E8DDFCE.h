#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }
namespace System { class Action; }
namespace UnityEngine { class Animation; }

#define CLASS_1_E903AB194E8DDFCE_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xD59F490)
#define CLASS_1_E903AB194E8DDFCE_METHOD_1_E535FE3B272F388C_OFFSET UNITYSDK_OFFSET(0xD59F600)
#define CLASS_1_E903AB194E8DDFCE__CTOR_OFFSET UNITYSDK_OFFSET(0xD59F420)

inline static constexpr unsigned int Class_1_E903AB194E8DDFCE_TypeDefinitionIndex = 62234;

class Class_1_E903AB194E8DDFCE : public ::System::Object
{
public:
	::System::Action* Field_1_2; // 0x10
	::UnityEngine::Animation* Field_1_0; // 0x18
	::Foundation::Coroutine::CoroutineHandle Field_1_1; // 0x20

	::System::Void _ctor(::UnityEngine::Animation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + CLASS_1_E903AB194E8DDFCE__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E903AB194E8DDFCE_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_E535FE3B272F388C(::MoleMole::UIBaseController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_1_E903AB194E8DDFCE_METHOD_1_E535FE3B272F388C_OFFSET))(this, a1);
	}
};

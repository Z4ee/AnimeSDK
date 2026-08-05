#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_87756D01449F367E_METHOD_1_10160D24E5FC44AB_OFFSET UNITYSDK_OFFSET(0x15B7A980)
#define CLASS_1_87756D01449F367E_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x15B7A9E0)
#define CLASS_1_87756D01449F367E_METHOD_1_C2C10E2BA8A55C5E_OFFSET UNITYSDK_OFFSET(0x15B7AA80)
#define CLASS_1_87756D01449F367E_METHOD_1_D956F187BA8BE548_OFFSET UNITYSDK_OFFSET(0x15B7AAD0)
#define CLASS_1_87756D01449F367E__CTOR_OFFSET UNITYSDK_OFFSET(0x15B7A920)

inline static constexpr unsigned int Class_1_87756D01449F367E_TypeDefinitionIndex = 41062;

class Class_1_87756D01449F367E : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* Field_1_5; // 0x10
	::System::Action_1<::System::Single>* Field_1_3; // 0x18
	::System::Action_1<::System::Single>* Field_1_2; // 0x20
	::System::Single Field_1_6; // 0x28
	::Foundation::Coroutine::CoroutineHandle Field_1_1; // 0x2C
	::System::Single Field_1_7; // 0x30
	::System::Single Field_1_0; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87756D01449F367E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_10160D24E5FC44AB(::System::Action_1<::System::Single>* a1, ::System::Action_1<::System::Single>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_87756D01449F367E_METHOD_1_10160D24E5FC44AB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_87756D01449F367E_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_1_C2C10E2BA8A55C5E(::UnityEngine::AnimationCurve* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_87756D01449F367E_METHOD_1_C2C10E2BA8A55C5E_OFFSET))(this, a1);
	}

	::System::Void Method_1_D956F187BA8BE548(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_87756D01449F367E_METHOD_1_D956F187BA8BE548_OFFSET))(this, a1, a2);
	}
};

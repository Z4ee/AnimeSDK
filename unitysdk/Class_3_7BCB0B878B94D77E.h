#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_9C4E0E0141829F67.h"

namespace UnityEngine { class Transform; }

#define CLASS_3_7BCB0B878B94D77E_ISDONE_OFFSET UNITYSDK_OFFSET(0xB8FF390)
#define CLASS_3_7BCB0B878B94D77E_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xB8FF460)
#define CLASS_3_7BCB0B878B94D77E_METHOD_3_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0xB8FF240)
#define CLASS_3_7BCB0B878B94D77E_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0xB8FF3D0)
#define CLASS_3_7BCB0B878B94D77E_STEP_OFFSET UNITYSDK_OFFSET(0xB8FF2C0)
#define CLASS_3_7BCB0B878B94D77E__CTOR_OFFSET UNITYSDK_OFFSET(0xB8FF4C0)

inline static constexpr unsigned int Class_3_7BCB0B878B94D77E_TypeDefinitionIndex = 73426;

class Class_3_7BCB0B878B94D77E : public ::Class_2_9C4E0E0141829F67
{
public:
	::System::Boolean DDAMPOLEPBB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7BCB0B878B94D77E__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7BCB0B878B94D77E_METHOD_3_455E250D679F9642_OFFSET))(this);
	}

	::System::Boolean IsDone()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7BCB0B878B94D77E_ISDONE_OFFSET))(this);
	}

	::System::Void StartWithTarget(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_7BCB0B878B94D77E_STARTWITHTARGET_OFFSET))(this, a1);
	}

	::System::Void Step(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7BCB0B878B94D77E_STEP_OFFSET))(this, a1);
	}

	::System::Void Method_3_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7BCB0B878B94D77E_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
	}
};

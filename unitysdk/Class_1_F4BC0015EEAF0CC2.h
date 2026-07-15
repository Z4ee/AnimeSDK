#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_F4BC0015EEAF0CC2_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x176F47D0)
#define CLASS_1_F4BC0015EEAF0CC2__CTOR_OFFSET UNITYSDK_OFFSET(0x176F4820)

inline static constexpr unsigned int Class_1_F4BC0015EEAF0CC2_TypeDefinitionIndex = 61536;

class Class_1_F4BC0015EEAF0CC2 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_F4BC0015EEAF0CC2__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4BC0015EEAF0CC2_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};

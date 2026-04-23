#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_F4BC0015EEAF0CC2_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xD3A3D00)
#define CLASS_1_F4BC0015EEAF0CC2__CTOR_OFFSET UNITYSDK_OFFSET(0xD3A3D10)

inline static constexpr unsigned int Class_1_F4BC0015EEAF0CC2_TypeDefinitionIndex = 59312;

class Class_1_F4BC0015EEAF0CC2 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x18

	::System::Void _ctor(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_F4BC0015EEAF0CC2__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4BC0015EEAF0CC2_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};

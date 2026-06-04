#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_6565B3A91153CD08_METHOD_1_D66FD197FFC5F33F_OFFSET UNITYSDK_OFFSET(0x13C1ABE0)
#define CLASS_1_6565B3A91153CD08__CTOR_OFFSET UNITYSDK_OFFSET(0x13C1ABA0)

inline static constexpr unsigned int Class_1_6565B3A91153CD08_TypeDefinitionIndex = 64454;

class Class_1_6565B3A91153CD08 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x18
	::UnityEngine::Vector3 Field_1_2; // 0x24

	::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_6565B3A91153CD08__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D66FD197FFC5F33F(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_6565B3A91153CD08_METHOD_1_D66FD197FFC5F33F_OFFSET))(this, a1);
	}
};

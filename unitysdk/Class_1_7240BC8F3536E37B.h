#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

#define CLASS_1_7240BC8F3536E37B_METHOD_1_9FD8E221709F0371_OFFSET UNITYSDK_OFFSET(0x15E31670)
#define CLASS_1_7240BC8F3536E37B_METHOD_1_FEA241CA014F8043_1_OFFSET UNITYSDK_OFFSET(0x15E31770)
#define CLASS_1_7240BC8F3536E37B_METHOD_1_FEA241CA014F8043_OFFSET UNITYSDK_OFFSET(0x15E31590)
#define CLASS_1_7240BC8F3536E37B__CTOR_OFFSET UNITYSDK_OFFSET(0x15E31820)

inline static constexpr unsigned int Class_1_7240BC8F3536E37B_TypeDefinitionIndex = 49688;

class Class_1_7240BC8F3536E37B : public ::System::Object
{
public:
	::System::Single Field_1_0; // 0x10
	::UnityEngine::Vector3Int Field_1_1; // 0x14
	::UnityEngine::Vector3Int Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7240BC8F3536E37B__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_FEA241CA014F8043(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_7240BC8F3536E37B_METHOD_1_FEA241CA014F8043_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3Int Method_1_9FD8E221709F0371(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3Int(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_7240BC8F3536E37B_METHOD_1_9FD8E221709F0371_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_FEA241CA014F8043_1(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_7240BC8F3536E37B_METHOD_1_FEA241CA014F8043_1_OFFSET))(this, a1);
	}
};

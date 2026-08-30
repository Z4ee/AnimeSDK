#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

#define CLASS_1_7240BC8F3536E37B_METHOD_1_9FD8E221709F0371_OFFSET UNITYSDK_OFFSET(0x17A95B80)
#define CLASS_1_7240BC8F3536E37B_METHOD_1_FEA241CA014F8043_1_OFFSET UNITYSDK_OFFSET(0x17A95C80)
#define CLASS_1_7240BC8F3536E37B_METHOD_1_FEA241CA014F8043_OFFSET UNITYSDK_OFFSET(0x17A95AA0)
#define CLASS_1_7240BC8F3536E37B__CTOR_OFFSET UNITYSDK_OFFSET(0x17A95D30)

inline static constexpr unsigned int Class_1_7240BC8F3536E37B_TypeDefinitionIndex = 52346;

class Class_1_7240BC8F3536E37B : public ::System::Object
{
public:
	::UnityEngine::Vector3Int OGPDIJFMIHM; // 0x10
	::UnityEngine::Vector3Int BBFOLEOPPPL; // 0x1C
	::System::Single HAHMJKDKEKC; // 0x28

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

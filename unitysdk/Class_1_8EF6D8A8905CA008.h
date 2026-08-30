#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Rigidbody; }

#define CLASS_1_8EF6D8A8905CA008__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3AE540)

inline static constexpr unsigned int Class_1_8EF6D8A8905CA008_TypeDefinitionIndex = 41556;

class Class_1_8EF6D8A8905CA008 : public ::System::Object
{
public:
	::UnityEngine::Rigidbody* LLBAAKBKFLC; // 0x10
	::System::Single NGFAGMJHKJO; // 0x18
	::UnityEngine::Vector3 NIBGNGICDOO; // 0x1C
	::UnityEngine::Vector3 IKNAAOPEKFP; // 0x28
	::UnityEngine::Vector3 EAHFKEGAHKE; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8EF6D8A8905CA008__CTOR_OFFSET))(this);
	}
};

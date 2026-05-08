#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_956C5F706DFDF849_METHOD_1_4E8DF6F8A37B229A_1_OFFSET UNITYSDK_OFFSET(0x112320B0)
#define CLASS_1_956C5F706DFDF849_METHOD_1_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0x11232080)
#define CLASS_1_956C5F706DFDF849_METHOD_1_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x112320C0)
#define CLASS_1_956C5F706DFDF849_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x11232090)
#define CLASS_1_956C5F706DFDF849__CTOR_OFFSET UNITYSDK_OFFSET(0x11232060)

inline static constexpr unsigned int Class_1_956C5F706DFDF849_TypeDefinitionIndex = 44059;

class Class_1_956C5F706DFDF849 : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_2; // 0x14
	::UnityEngine::Vector3 Field_1_1; // 0x20

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_956C5F706DFDF849__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_956C5F706DFDF849_METHOD_1_4E8DF6F8A37B229A_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_956C5F706DFDF849_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Void Method_1_4E8DF6F8A37B229A_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_956C5F706DFDF849_METHOD_1_4E8DF6F8A37B229A_1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_956C5F706DFDF849_METHOD_1_D37FAD0A6AA04B25_1_OFFSET))(this);
	}
};

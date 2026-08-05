#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_38DE07FB580FE5E9.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_581B880F1146BE79;

#define CLASS_2_95666F8705D1F141_METHOD_2_1E082DBF317F50B8_OFFSET UNITYSDK_OFFSET(0x15066430)
#define CLASS_2_95666F8705D1F141_METHOD_2_A869A2D944B4A769_OFFSET UNITYSDK_OFFSET(0x150665D0)
#define CLASS_2_95666F8705D1F141__CTOR_OFFSET UNITYSDK_OFFSET(0x150663B0)

inline static constexpr unsigned int Class_2_95666F8705D1F141_TypeDefinitionIndex = 51785;

class Class_2_95666F8705D1F141 : public ::Class_1_38DE07FB580FE5E9
{
public:
	::System::Void _ctor(::Class_2_581B880F1146BE79* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_581B880F1146BE79*))((::PBYTE)hIl2Cpp + CLASS_2_95666F8705D1F141__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_1E082DBF317F50B8(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_95666F8705D1F141_METHOD_2_1E082DBF317F50B8_OFFSET))(this, a1);
	}

	::System::Void Method_2_A869A2D944B4A769(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_95666F8705D1F141_METHOD_2_A869A2D944B4A769_OFFSET))(this, a1);
	}
};

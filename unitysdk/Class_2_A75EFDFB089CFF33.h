#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace UnityEngine { class Transform; }

#define CLASS_2_A75EFDFB089CFF33_METHOD_2_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0x15A4D840)
#define CLASS_2_A75EFDFB089CFF33__CTOR_OFFSET UNITYSDK_OFFSET(0x15A4D8B0)
#define CLASS_2_A75EFDFB089CFF33__ONBIND_OFFSET UNITYSDK_OFFSET(0x15A4D750)

inline static constexpr unsigned int Class_2_A75EFDFB089CFF33_TypeDefinitionIndex = 71256;

class Class_2_A75EFDFB089CFF33 : public ::Class_1_34917908B7833130
{
public:
	::UnityEngine::Transform* GHGAKNDLKGM; // 0x60
	::UnityEngine::Transform* NLOFDELKDOI; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A75EFDFB089CFF33__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A75EFDFB089CFF33__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_F07808AF19FA033A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A75EFDFB089CFF33_METHOD_2_F07808AF19FA033A_OFFSET))(this, a1);
	}
};

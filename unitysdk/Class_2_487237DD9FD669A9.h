#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9D0E32A076015FD9.h"
#include "unitysdk/UnityEngine/KeyCode.h"

#define CLASS_2_487237DD9FD669A9_METHOD_2_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x16062AF0)
#define CLASS_2_487237DD9FD669A9_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x16062AA0)
#define CLASS_2_487237DD9FD669A9__CTOR_OFFSET UNITYSDK_OFFSET(0x16062A90)

inline static constexpr unsigned int Class_2_487237DD9FD669A9_TypeDefinitionIndex = 75495;

class Class_2_487237DD9FD669A9 : public ::Class_1_9D0E32A076015FD9
{
public:
	::UnityEngine::KeyCode KPFAMGNDMPK; // 0x18

	::System::Void _ctor(::UnityEngine::KeyCode a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + CLASS_2_487237DD9FD669A9__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_487237DD9FD669A9_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_487237DD9FD669A9_METHOD_2_391A84BCD9F51317_1_OFFSET))(this);
	}
};

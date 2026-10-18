#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

namespace UnityEngine { class Coroutine; }

#define CLASS_2_CE6C7818289E64FD_METHOD_2_37629504F82EDF78_OFFSET UNITYSDK_OFFSET(0xB227190)
#define CLASS_2_CE6C7818289E64FD_METHOD_2_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xB2273C0)
#define CLASS_2_CE6C7818289E64FD_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB227310)
#define CLASS_2_CE6C7818289E64FD_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xB227370)
#define CLASS_2_CE6C7818289E64FD_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xB227220)
#define CLASS_2_CE6C7818289E64FD__CTOR_OFFSET UNITYSDK_OFFSET(0xB227420)

inline static constexpr unsigned int Class_2_CE6C7818289E64FD_TypeDefinitionIndex = 80846;

class Class_2_CE6C7818289E64FD : public ::Class_1_3713064DEE761936
{
public:
	::UnityEngine::Coroutine* NAEJCNNMAKA; // 0x20
	::System::Single HBDJCFFDGDD; // 0x28
	::System::Boolean BEMMCKLJICI; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE6C7818289E64FD__CTOR_OFFSET))(this);
	}

	static ::Class_2_CE6C7818289E64FD* Method_2_37629504F82EDF78(::System::Single a1)
	{
		return ((::Class_2_CE6C7818289E64FD*(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CE6C7818289E64FD_METHOD_2_37629504F82EDF78_OFFSET))(a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE6C7818289E64FD_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE6C7818289E64FD_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE6C7818289E64FD_ONCLEAR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE6C7818289E64FD_METHOD_2_4343F372F34C05BF_1_OFFSET))(this);
	}
};

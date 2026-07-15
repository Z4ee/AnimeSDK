#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

namespace UnityEngine { class Coroutine; }

#define CLASS_2_CE6C7818289E64FD_METHOD_2_37629504F82EDF78_OFFSET UNITYSDK_OFFSET(0x1587B040)
#define CLASS_2_CE6C7818289E64FD_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1587B350)
#define CLASS_2_CE6C7818289E64FD_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1587B240)
#define CLASS_2_CE6C7818289E64FD_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1587B300)
#define CLASS_2_CE6C7818289E64FD_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1587B0D0)
#define CLASS_2_CE6C7818289E64FD__CTOR_OFFSET UNITYSDK_OFFSET(0x1587B3B0)

inline static constexpr unsigned int Class_2_CE6C7818289E64FD_TypeDefinitionIndex = 75889;

class Class_2_CE6C7818289E64FD : public ::Class_1_3713064DEE761936
{
public:
	::UnityEngine::Coroutine* Field_2_0; // 0x20
	::System::Single Field_2_1; // 0x28
	::System::Boolean Field_2_2; // 0x2C

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

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE6C7818289E64FD_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE6C7818289E64FD_ONCLEAR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE6C7818289E64FD_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_499;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_3713064DEE761936_CLEAR_OFFSET UNITYSDK_OFFSET(0xB9AE0B0)
#define CLASS_1_3713064DEE761936_METHOD_1_1A7F9F3B13A09C96_OFFSET UNITYSDK_OFFSET(0xB9AE230)
#define CLASS_1_3713064DEE761936_METHOD_1_4A41C63BFE58D26F_OFFSET UNITYSDK_OFFSET(0xB9AE2E0)
#define CLASS_1_3713064DEE761936_METHOD_1_A8990A6ECDC359C1_OFFSET UNITYSDK_OFFSET(0xB9AE170)
#define CLASS_1_3713064DEE761936_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB9AE480)
#define CLASS_1_3713064DEE761936_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xB9AE440)
#define CLASS_1_3713064DEE761936_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xB9AE400)
#define CLASS_1_3713064DEE761936__CTOR_OFFSET UNITYSDK_OFFSET(0xB9AE4C0)

inline static constexpr unsigned int Class_1_3713064DEE761936_TypeDefinitionIndex = 71112;

class Class_1_3713064DEE761936 : public ::System::Object
{
public:
	::System::Action_2<::Class_0_16E4307DCC419505_499*, ::System::Boolean>* LGAOOKPFIMF; // 0x10
	::System::Boolean MEIOBBAOACJ; // 0x18
	::System::Boolean APHAAOCDAGN; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3713064DEE761936__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3713064DEE761936_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_A8990A6ECDC359C1(::System::Action_2<::Class_0_16E4307DCC419505_499*, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::Class_0_16E4307DCC419505_499*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_3713064DEE761936_METHOD_1_A8990A6ECDC359C1_OFFSET))(this, a1);
	}

	::System::Void Method_1_1A7F9F3B13A09C96(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3713064DEE761936_METHOD_1_1A7F9F3B13A09C96_OFFSET))(this, a1);
	}

	::System::Void Method_1_4A41C63BFE58D26F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3713064DEE761936_METHOD_1_4A41C63BFE58D26F_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3713064DEE761936_ONEXECUTE_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3713064DEE761936_ONCLEAR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3713064DEE761936_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};

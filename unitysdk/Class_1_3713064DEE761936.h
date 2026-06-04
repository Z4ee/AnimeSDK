#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_354;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_3713064DEE761936_CLEAR_OFFSET UNITYSDK_OFFSET(0xA7D15F0)
#define CLASS_1_3713064DEE761936_METHOD_1_1A7F9F3B13A09C96_OFFSET UNITYSDK_OFFSET(0xA7D16B0)
#define CLASS_1_3713064DEE761936_METHOD_1_4B1BC378103A8FD6_OFFSET UNITYSDK_OFFSET(0xA7D1650)
#define CLASS_1_3713064DEE761936_METHOD_1_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0xA7D1760)
#define CLASS_1_3713064DEE761936_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA7D18A0)
#define CLASS_1_3713064DEE761936_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xA7D1860)
#define CLASS_1_3713064DEE761936_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xA7D1820)
#define CLASS_1_3713064DEE761936__CTOR_OFFSET UNITYSDK_OFFSET(0xA7D18E0)

inline static constexpr unsigned int Class_1_3713064DEE761936_TypeDefinitionIndex = 66471;

class Class_1_3713064DEE761936 : public ::System::Object
{
public:
	::System::Action_2<::Class_0_16E4307DCC419505_354*, ::System::Boolean>* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3713064DEE761936__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3713064DEE761936_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_4B1BC378103A8FD6(::System::Action_2<::Class_0_16E4307DCC419505_354*, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::Class_0_16E4307DCC419505_354*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_3713064DEE761936_METHOD_1_4B1BC378103A8FD6_OFFSET))(this, a1);
	}

	::System::Void Method_1_1A7F9F3B13A09C96(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3713064DEE761936_METHOD_1_1A7F9F3B13A09C96_OFFSET))(this, a1);
	}

	::System::Void Method_1_913947B6596EB50A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3713064DEE761936_METHOD_1_913947B6596EB50A_OFFSET))(this);
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

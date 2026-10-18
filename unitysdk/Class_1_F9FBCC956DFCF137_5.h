#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2B4C9D5EFCB958DD;
namespace System { class String; }

#define CLASS_1_F9FBCC956DFCF137_5_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB669950)
#define CLASS_1_F9FBCC956DFCF137_5_METHOD_1_C2DA14976E70EEE4_OFFSET UNITYSDK_OFFSET(0xB669990)
#define CLASS_1_F9FBCC956DFCF137_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB6699F0)
#define CLASS_1_F9FBCC956DFCF137_5__CTOR_OFFSET UNITYSDK_OFFSET(0xB669940)

inline static constexpr unsigned int Class_1_F9FBCC956DFCF137_5_TypeDefinitionIndex = 59394;

class Class_1_F9FBCC956DFCF137_5 : public ::System::Object
{
public:
	::Class_1_2B4C9D5EFCB958DD* FKKNLHAEGOL; // 0x10

	::System::Void _ctor(::Class_1_2B4C9D5EFCB958DD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2B4C9D5EFCB958DD*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_5__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_5_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_C2DA14976E70EEE4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_5_METHOD_1_C2DA14976E70EEE4_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_5_TOSTRING_OFFSET))(this);
	}
};

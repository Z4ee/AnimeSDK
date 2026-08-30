#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_71;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_52DE6DBC963E5D9A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19D46D30)
#define CLASS_1_52DE6DBC963E5D9A_METHOD_1_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x19D46B20)
#define CLASS_1_52DE6DBC963E5D9A_METHOD_1_D1B1E19AC459D83C_OFFSET UNITYSDK_OFFSET(0x19D46C00)
#define CLASS_1_52DE6DBC963E5D9A_METHOD_1_DC68351E16E5909B_OFFSET UNITYSDK_OFFSET(0x19D465E0)
#define CLASS_1_52DE6DBC963E5D9A_METHOD_1_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x19D46C90)
#define CLASS_1_52DE6DBC963E5D9A__CTOR_OFFSET UNITYSDK_OFFSET(0x19D46DF0)

inline static constexpr unsigned int Class_1_52DE6DBC963E5D9A_TypeDefinitionIndex = 36429;

class Class_1_52DE6DBC963E5D9A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_71*>* OBCHNKJCPCI; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_71*>* KHLEPFGIKMP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52DE6DBC963E5D9A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DC68351E16E5909B(::System::UInt64 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_52DE6DBC963E5D9A_METHOD_1_DC68351E16E5909B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_71* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_71*))((::PBYTE)hIl2Cpp + CLASS_1_52DE6DBC963E5D9A_METHOD_1_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_1_D1B1E19AC459D83C(::Class_0_16E4307DCC419505_71* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_71*))((::PBYTE)hIl2Cpp + CLASS_1_52DE6DBC963E5D9A_METHOD_1_D1B1E19AC459D83C_OFFSET))(this, a1);
	}

	::System::Void Method_1_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52DE6DBC963E5D9A_METHOD_1_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52DE6DBC963E5D9A_DISPOSE_OFFSET))(this);
	}
};

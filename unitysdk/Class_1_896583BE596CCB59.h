#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_584;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_896583BE596CCB59_DISPOSE_OFFSET UNITYSDK_OFFSET(0x953CB30)
#define CLASS_1_896583BE596CCB59_METHOD_1_2A883DD032F22BF2_OFFSET UNITYSDK_OFFSET(0x953C8C0)
#define CLASS_1_896583BE596CCB59_METHOD_1_2FED925376FD83FF_OFFSET UNITYSDK_OFFSET(0x953C930)
#define CLASS_1_896583BE596CCB59_METHOD_1_70F996834AEFED46_OFFSET UNITYSDK_OFFSET(0x953C9C0)
#define CLASS_1_896583BE596CCB59__CTOR_OFFSET UNITYSDK_OFFSET(0x953CBA0)

inline static constexpr unsigned int Class_1_896583BE596CCB59_TypeDefinitionIndex = 56554;

class Class_1_896583BE596CCB59 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_584*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_896583BE596CCB59__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2A883DD032F22BF2(::Class_0_16E4307DCC419505_584* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_584*))((::PBYTE)hIl2Cpp + CLASS_1_896583BE596CCB59_METHOD_1_2A883DD032F22BF2_OFFSET))(this, a1);
	}

	::System::Void Method_1_2FED925376FD83FF(::Class_0_16E4307DCC419505_584* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_584*))((::PBYTE)hIl2Cpp + CLASS_1_896583BE596CCB59_METHOD_1_2FED925376FD83FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_70F996834AEFED46(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_896583BE596CCB59_METHOD_1_70F996834AEFED46_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_896583BE596CCB59_DISPOSE_OFFSET))(this);
	}
};

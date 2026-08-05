#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_1A07023AFF917E15.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class Class_0_16E4307DCC419505_567;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9DE8397BFA041B44_DISPOSE_OFFSET UNITYSDK_OFFSET(0xECF49D0)
#define CLASS_2_9DE8397BFA041B44_METHOD_2_03A81715BD2AFEF3_OFFSET UNITYSDK_OFFSET(0xECF5180)
#define CLASS_2_9DE8397BFA041B44_METHOD_2_5D9646F4A7309CF6_OFFSET UNITYSDK_OFFSET(0x1017D4E0)
#define CLASS_2_9DE8397BFA041B44_METHOD_2_6B5C45B91CB8890A_OFFSET UNITYSDK_OFFSET(0xECF4AC0)
#define CLASS_2_9DE8397BFA041B44_METHOD_2_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0xECF4F80)
#define CLASS_2_9DE8397BFA041B44_METHOD_2_CF4704836F6FFFCD_OFFSET UNITYSDK_OFFSET(0xECF4C80)
#define CLASS_2_9DE8397BFA041B44_METHOD_2_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0xECF51F0)
#define CLASS_2_9DE8397BFA041B44_METHOD_2_FDBD08131232938D_OFFSET UNITYSDK_OFFSET(0xECF5280)
#define CLASS_2_9DE8397BFA041B44_ONCREATE_OFFSET UNITYSDK_OFFSET(0xECF4990)
#define CLASS_2_9DE8397BFA041B44__CTOR_OFFSET UNITYSDK_OFFSET(0xECF4A40)

inline static constexpr unsigned int Class_2_9DE8397BFA041B44_TypeDefinitionIndex = 85413;

class Class_2_9DE8397BFA041B44 : public ::Foundation::SingletonDisposable_1<::Class_2_9DE8397BFA041B44*>
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_567*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9DE8397BFA041B44__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9DE8397BFA041B44_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9DE8397BFA041B44_DISPOSE_OFFSET))(this);
	}

	static ::System::Void Method_2_6B5C45B91CB8890A(::Class_0_16E4307DCC419505_567* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_567*))((::PBYTE)hIl2Cpp + CLASS_2_9DE8397BFA041B44_METHOD_2_6B5C45B91CB8890A_OFFSET))(a1);
	}

	static ::Enum_3_1A07023AFF917E15 Method_2_CF4704836F6FFFCD(::System::String* a1)
	{
		return ((::Enum_3_1A07023AFF917E15(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_9DE8397BFA041B44_METHOD_2_CF4704836F6FFFCD_OFFSET))(a1);
	}

	static ::System::Void Method_2_BA1BB49741CFDFE1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9DE8397BFA041B44_METHOD_2_BA1BB49741CFDFE1_OFFSET))();
	}

	static ::System::Void Method_2_03A81715BD2AFEF3()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9DE8397BFA041B44_METHOD_2_03A81715BD2AFEF3_OFFSET))();
	}

	static ::System::Void Method_2_D799715F2EF979EA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9DE8397BFA041B44_METHOD_2_D799715F2EF979EA_OFFSET))();
	}

	static ::Enum_3_1A07023AFF917E15 Method_2_FDBD08131232938D(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::Enum_3_1A07023AFF917E15(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9DE8397BFA041B44_METHOD_2_FDBD08131232938D_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_2_5D9646F4A7309CF6(::Class_0_16E4307DCC419505_567* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_567*))((::PBYTE)hIl2Cpp + CLASS_2_9DE8397BFA041B44_METHOD_2_5D9646F4A7309CF6_OFFSET))(a1);
	}
};

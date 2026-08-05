#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2DAF815691F591CB;
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Sockets { class TcpClient; }
namespace System::Threading { class Thread; }

#define CLASS_1_BBDBD9B69530BE8F_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x141AC7E0)
#define CLASS_1_BBDBD9B69530BE8F_METHOD_1_39813C8CB90CB4E2_OFFSET UNITYSDK_OFFSET(0x141ABA70)
#define CLASS_1_BBDBD9B69530BE8F_METHOD_1_41AA181104E03F2C_OFFSET UNITYSDK_OFFSET(0x141ABE60)
#define CLASS_1_BBDBD9B69530BE8F_METHOD_1_56F65626149842A5_OFFSET UNITYSDK_OFFSET(0x141AB770)
#define CLASS_1_BBDBD9B69530BE8F_METHOD_1_6BA3F6FAA35776D7_OFFSET UNITYSDK_OFFSET(0x141AC080)
#define CLASS_1_BBDBD9B69530BE8F_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x141AB9E0)
#define CLASS_1_BBDBD9B69530BE8F_METHOD_1_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x141ABC50)
#define CLASS_1_BBDBD9B69530BE8F__CTOR_OFFSET UNITYSDK_OFFSET(0x141AB6E0)

inline static constexpr unsigned int Class_1_BBDBD9B69530BE8F_TypeDefinitionIndex = 90836;

class Class_1_BBDBD9B69530BE8F : public ::System::Object
{
public:
	::Il2CppArray<::System::Byte>* Field_1_7; // 0x10
	::System::Collections::Concurrent::ConcurrentQueue_1<::Class_1_2DAF815691F591CB*>* Field_1_1; // 0x18
	::Il2CppArray<::System::Byte>* Field_1_0; // 0x20
	::System::Net::Sockets::TcpClient* Field_1_3; // 0x28
	::System::String* Field_1_4; // 0x30
	::System::Threading::Thread* Field_1_2; // 0x38
	::System::Int32 Field_1_5; // 0x40
	::System::Int32 Field_1_6; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDBD9B69530BE8F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_56F65626149842A5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BBDBD9B69530BE8F_METHOD_1_56F65626149842A5_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_2DAF815691F591CB*>* Method_1_39813C8CB90CB4E2()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_2DAF815691F591CB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDBD9B69530BE8F_METHOD_1_39813C8CB90CB4E2_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDBD9B69530BE8F_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDBD9B69530BE8F_METHOD_1_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::Void Method_1_41AA181104E03F2C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDBD9B69530BE8F_METHOD_1_41AA181104E03F2C_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDBD9B69530BE8F_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_6BA3F6FAA35776D7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDBD9B69530BE8F_METHOD_1_6BA3F6FAA35776D7_OFFSET))(this);
	}
};

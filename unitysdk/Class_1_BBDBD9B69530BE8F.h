#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2DAF815691F591CB;
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Sockets { class TcpClient; }
namespace System::Threading { class Thread; }

#define CLASS_1_BBDBD9B69530BE8F_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1365E600)
#define CLASS_1_BBDBD9B69530BE8F_METHOD_1_39813C8CB90CB4E2_OFFSET UNITYSDK_OFFSET(0x1365F1D0)
#define CLASS_1_BBDBD9B69530BE8F_METHOD_1_41AA181104E03F2C_OFFSET UNITYSDK_OFFSET(0x1365E650)
#define CLASS_1_BBDBD9B69530BE8F_METHOD_1_56F65626149842A5_OFFSET UNITYSDK_OFFSET(0x1365E300)
#define CLASS_1_BBDBD9B69530BE8F_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1365E570)
#define CLASS_1_BBDBD9B69530BE8F_METHOD_1_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0x1365EFC0)
#define CLASS_1_BBDBD9B69530BE8F_METHOD_1_D4499A0147676A9C_OFFSET UNITYSDK_OFFSET(0x1365E870)
#define CLASS_1_BBDBD9B69530BE8F__CTOR_OFFSET UNITYSDK_OFFSET(0x1365E270)

inline static constexpr unsigned int Class_1_BBDBD9B69530BE8F_TypeDefinitionIndex = 42278;

class Class_1_BBDBD9B69530BE8F : public ::System::Object
{
public:
	::Il2CppArray<::System::Byte>* Field_1_4; // 0x10
	::System::Net::Sockets::TcpClient* Field_1_0; // 0x18
	::Il2CppArray<::System::Byte>* Field_1_3; // 0x20
	::System::Collections::Concurrent::ConcurrentQueue_1<::Class_1_2DAF815691F591CB*>* Field_1_2; // 0x28
	::System::String* Field_1_7; // 0x30
	::System::Threading::Thread* Field_1_1; // 0x38
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

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDBD9B69530BE8F_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_41AA181104E03F2C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDBD9B69530BE8F_METHOD_1_41AA181104E03F2C_OFFSET))(this);
	}

	::System::Void Method_1_AC7CD4175E0A3EF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDBD9B69530BE8F_METHOD_1_AC7CD4175E0A3EF8_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDBD9B69530BE8F_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_2DAF815691F591CB*>* Method_1_39813C8CB90CB4E2()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_2DAF815691F591CB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDBD9B69530BE8F_METHOD_1_39813C8CB90CB4E2_OFFSET))(this);
	}

	::System::Void Method_1_D4499A0147676A9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBDBD9B69530BE8F_METHOD_1_D4499A0147676A9C_OFFSET))(this);
	}
};

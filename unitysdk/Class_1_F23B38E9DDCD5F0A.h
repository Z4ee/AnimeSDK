#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_37A8069FEC1C5427;
class Class_1_B45EDAC680D99A10;
class Class_2_56775D686C1C3EBB;
class Class_2_8AFAEFC86AF51D7D;
class ConfFileLoader;
class NewByteBuffer;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F23B38E9DDCD5F0A_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1D4C58A0)
#define CLASS_1_F23B38E9DDCD5F0A_METHOD_1_5E72916301E347E2_OFFSET UNITYSDK_OFFSET(0x1D4C59D0)
#define CLASS_1_F23B38E9DDCD5F0A_METHOD_1_C6159FCF4A6D407A_OFFSET UNITYSDK_OFFSET(0x1D4C56C0)
#define CLASS_1_F23B38E9DDCD5F0A_METHOD_1_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x1D4C54D0)
#define CLASS_1_F23B38E9DDCD5F0A__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4C58E0)

inline static constexpr unsigned int Class_1_F23B38E9DDCD5F0A_TypeDefinitionIndex = 28754;

class Class_1_F23B38E9DDCD5F0A : public ::System::Object
{
public:
	::Class_1_37A8069FEC1C5427* Field_1_5; // 0x10
	::ConfFileLoader* Field_1_2; // 0x18
	::Class_2_56775D686C1C3EBB* Field_1_0; // 0x20
	::Class_2_8AFAEFC86AF51D7D* Field_1_1; // 0x28
	::NewByteBuffer* Field_1_3; // 0x30
	::System::Boolean Field_1_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F23B38E9DDCD5F0A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F23B38E9DDCD5F0A_METHOD_1_E69AA2E64A20143D_OFFSET))(this);
	}

	::System::Void Method_1_C6159FCF4A6D407A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F23B38E9DDCD5F0A_METHOD_1_C6159FCF4A6D407A_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F23B38E9DDCD5F0A_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_5E72916301E347E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F23B38E9DDCD5F0A_METHOD_1_5E72916301E347E2_OFFSET))(this);
	}
};

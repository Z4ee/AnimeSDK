#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E58C9F2275D7BFF2;
namespace System { class Random; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FFE1B660B6180584_METHOD_1_16E792B668863BDD_OFFSET UNITYSDK_OFFSET(0x19F187B0)
#define CLASS_1_FFE1B660B6180584_METHOD_1_4E140453C4B32F06_OFFSET UNITYSDK_OFFSET(0x19F18810)
#define CLASS_1_FFE1B660B6180584_METHOD_1_80928FD926C48375_OFFSET UNITYSDK_OFFSET(0x19F18840)
#define CLASS_1_FFE1B660B6180584_METHOD_1_ACE888BF6F5BC5FD_OFFSET UNITYSDK_OFFSET(0x19F1F4F0)
#define CLASS_1_FFE1B660B6180584_METHOD_1_B75C7B573F2E1A01_OFFSET UNITYSDK_OFFSET(0x19F18EC0)
#define CLASS_1_FFE1B660B6180584_METHOD_1_FBCFD185A4912EB4_OFFSET UNITYSDK_OFFSET(0x19F1F850)
#define CLASS_1_FFE1B660B6180584__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F1FD90)
#define CLASS_1_FFE1B660B6180584__CTOR_OFFSET UNITYSDK_OFFSET(0x19F1F6B0)

inline static constexpr unsigned int Class_1_FFE1B660B6180584_TypeDefinitionIndex = 6935;

class Class_1_FFE1B660B6180584 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Byte>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FFE1B660B6180584_TypeDefinitionIndex)->GetStaticField(0x57F0);
	}
	// static const ::System::Int32 Field_1_1 = 0x20; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x8; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_E58C9F2275D7BFF2*>* Field_1_3; // 0x10
	::System::Random* Field_1_4; // 0x18
	::System::Byte Field_1_5; // 0x20
	::System::Single Field_1_6; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE1B660B6180584__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FFE1B660B6180584__CCTOR_OFFSET))();
	}

	::System::Void Method_1_ACE888BF6F5BC5FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE1B660B6180584_METHOD_1_ACE888BF6F5BC5FD_OFFSET))(this);
	}

	static ::Class_1_FFE1B660B6180584* Method_1_16E792B668863BDD(::Class_1_FFE1B660B6180584* a1)
	{
		return ((::Class_1_FFE1B660B6180584*(*)(::Class_1_FFE1B660B6180584*))((::PBYTE)hIl2Cpp + CLASS_1_FFE1B660B6180584_METHOD_1_16E792B668863BDD_OFFSET))(a1);
	}

	static ::System::Void Method_1_B75C7B573F2E1A01(::Class_1_FFE1B660B6180584* a1)
	{
		return ((::System::Void(*)(::Class_1_FFE1B660B6180584*))((::PBYTE)hIl2Cpp + CLASS_1_FFE1B660B6180584_METHOD_1_B75C7B573F2E1A01_OFFSET))(a1);
	}

	::System::Void Method_1_80928FD926C48375(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FFE1B660B6180584_METHOD_1_80928FD926C48375_OFFSET))(this, a1);
	}

	::System::Single Method_1_4E140453C4B32F06(::System::Boolean a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FFE1B660B6180584_METHOD_1_4E140453C4B32F06_OFFSET))(this, a1);
	}

	::System::Single Method_1_FBCFD185A4912EB4()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE1B660B6180584_METHOD_1_FBCFD185A4912EB4_OFFSET))(this);
	}
};

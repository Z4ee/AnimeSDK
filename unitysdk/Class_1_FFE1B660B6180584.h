#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E58C9F2275D7BFF2;
namespace System { class Random; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FFE1B660B6180584_METHOD_1_16E792B668863BDD_OFFSET UNITYSDK_OFFSET(0x19210AF0)
#define CLASS_1_FFE1B660B6180584_METHOD_1_34658B0D57648CD1_OFFSET UNITYSDK_OFFSET(0x19210D10)
#define CLASS_1_FFE1B660B6180584_METHOD_1_4E140453C4B32F06_OFFSET UNITYSDK_OFFSET(0x19210FD0)
#define CLASS_1_FFE1B660B6180584_METHOD_1_841D90BDB3E94FF6_OFFSET UNITYSDK_OFFSET(0x19210B50)
#define CLASS_1_FFE1B660B6180584_METHOD_1_EA3063A5CDD6F164_OFFSET UNITYSDK_OFFSET(0x192109B0)
#define CLASS_1_FFE1B660B6180584_METHOD_1_FBCFD185A4912EB4_OFFSET UNITYSDK_OFFSET(0x19211000)
#define CLASS_1_FFE1B660B6180584__CCTOR_OFFSET UNITYSDK_OFFSET(0x19211380)
#define CLASS_1_FFE1B660B6180584__CTOR_OFFSET UNITYSDK_OFFSET(0x19210B70)

inline static constexpr unsigned int Class_1_FFE1B660B6180584_TypeDefinitionIndex = 9071;

class Class_1_FFE1B660B6180584 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Byte>** StaticGet_Field_1_6()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FFE1B660B6180584_TypeDefinitionIndex)->GetStaticField(0x3F830);
	}
	// static const ::System::Int32 Field_1_2 = 0x20; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	::System::Random* Field_1_4; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_E58C9F2275D7BFF2*>* Field_1_1; // 0x18
	::System::Byte Field_1_0; // 0x20
	::System::Single Field_1_5; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE1B660B6180584__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FFE1B660B6180584__CCTOR_OFFSET))();
	}

	::System::Void Method_1_EA3063A5CDD6F164()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE1B660B6180584_METHOD_1_EA3063A5CDD6F164_OFFSET))(this);
	}

	static ::Class_1_FFE1B660B6180584* Method_1_16E792B668863BDD(::Class_1_FFE1B660B6180584* a1)
	{
		return ((::Class_1_FFE1B660B6180584*(*)(::Class_1_FFE1B660B6180584*))((::PBYTE)hIl2Cpp + CLASS_1_FFE1B660B6180584_METHOD_1_16E792B668863BDD_OFFSET))(a1);
	}

	static ::System::Void Method_1_841D90BDB3E94FF6(::Class_1_FFE1B660B6180584* a1)
	{
		return ((::System::Void(*)(::Class_1_FFE1B660B6180584*))((::PBYTE)hIl2Cpp + CLASS_1_FFE1B660B6180584_METHOD_1_841D90BDB3E94FF6_OFFSET))(a1);
	}

	::System::Void Method_1_34658B0D57648CD1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FFE1B660B6180584_METHOD_1_34658B0D57648CD1_OFFSET))(this, a1);
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

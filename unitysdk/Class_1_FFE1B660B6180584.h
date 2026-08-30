#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E58C9F2275D7BFF2;
namespace System { class Random; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FFE1B660B6180584_METHOD_1_16E792B668863BDD_OFFSET UNITYSDK_OFFSET(0x16BC4C90)
#define CLASS_1_FFE1B660B6180584_METHOD_1_4E140453C4B32F06_OFFSET UNITYSDK_OFFSET(0x16BC4CF0)
#define CLASS_1_FFE1B660B6180584_METHOD_1_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0x16BCBE40)
#define CLASS_1_FFE1B660B6180584_METHOD_1_B75C7B573F2E1A01_OFFSET UNITYSDK_OFFSET(0x16BC5400)
#define CLASS_1_FFE1B660B6180584_METHOD_1_E8E4B0343D170E6E_OFFSET UNITYSDK_OFFSET(0x16BC4D20)
#define CLASS_1_FFE1B660B6180584_METHOD_1_FBCFD185A4912EB4_OFFSET UNITYSDK_OFFSET(0x16BCC280)
#define CLASS_1_FFE1B660B6180584__CCTOR_OFFSET UNITYSDK_OFFSET(0x16BCC7C0)
#define CLASS_1_FFE1B660B6180584__CTOR_OFFSET UNITYSDK_OFFSET(0x16BCC080)

inline static constexpr unsigned int Class_1_FFE1B660B6180584_TypeDefinitionIndex = 6553;

class Class_1_FFE1B660B6180584 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Byte>** StaticGet_PCPCFNGGCOE()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FFE1B660B6180584_TypeDefinitionIndex)->GetStaticField(0x20A60);
	}
	// static const ::System::Int32 MBKIBALJGLE = 0x20; // 0x0
	// static const ::System::Int32 ECALJALJEFO = 0x8; // 0x0
	::System::Random* KFBFGALBKNM; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_E58C9F2275D7BFF2*>* HEMBEDOKMEI; // 0x18
	::System::Single OICDAMJLDIK; // 0x20
	::System::Byte CMEFOFJOFFC; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE1B660B6180584__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FFE1B660B6180584__CCTOR_OFFSET))();
	}

	::System::Void Method_1_9AB55F553C4AC6E8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE1B660B6180584_METHOD_1_9AB55F553C4AC6E8_OFFSET))(this);
	}

	static ::Class_1_FFE1B660B6180584* Method_1_16E792B668863BDD(::Class_1_FFE1B660B6180584* a1)
	{
		return ((::Class_1_FFE1B660B6180584*(*)(::Class_1_FFE1B660B6180584*))((::PBYTE)hIl2Cpp + CLASS_1_FFE1B660B6180584_METHOD_1_16E792B668863BDD_OFFSET))(a1);
	}

	static ::System::Void Method_1_B75C7B573F2E1A01(::Class_1_FFE1B660B6180584* a1)
	{
		return ((::System::Void(*)(::Class_1_FFE1B660B6180584*))((::PBYTE)hIl2Cpp + CLASS_1_FFE1B660B6180584_METHOD_1_B75C7B573F2E1A01_OFFSET))(a1);
	}

	::System::Void Method_1_E8E4B0343D170E6E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FFE1B660B6180584_METHOD_1_E8E4B0343D170E6E_OFFSET))(this, a1);
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

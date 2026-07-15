#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_411C76A6422C8F62;
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }

#define CLASS_1_5B05EC78D0816D29_METHOD_1_1867A77AD573DAEB_OFFSET UNITYSDK_OFFSET(0x16B69460)
#define CLASS_1_5B05EC78D0816D29_METHOD_1_73B962BA57A31C9C_OFFSET UNITYSDK_OFFSET(0x16B69770)
#define CLASS_1_5B05EC78D0816D29_METHOD_1_C0F35A31FAC15CA9_OFFSET UNITYSDK_OFFSET(0x16B696B0)
#define CLASS_1_5B05EC78D0816D29_METHOD_1_C40015A0A4C9A5BF_OFFSET UNITYSDK_OFFSET(0x16B69620)
#define CLASS_1_5B05EC78D0816D29_METHOD_1_FD452F8CB078528B_OFFSET UNITYSDK_OFFSET(0x16B69510)
#define CLASS_1_5B05EC78D0816D29__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B698A0)

inline static constexpr unsigned int Class_1_5B05EC78D0816D29_TypeDefinitionIndex = 65418;

class Class_1_5B05EC78D0816D29 : public ::System::Object
{
public:
	static ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::UInt32, ::Class_1_411C76A6422C8F62*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Concurrent::ConcurrentDictionary_2<::System::UInt32, ::Class_1_411C76A6422C8F62*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B05EC78D0816D29_TypeDefinitionIndex)->GetStaticField(0x5FEC0);
	}
	static ::System::UInt32* StaticGet_Field_1_1()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B05EC78D0816D29_TypeDefinitionIndex)->GetStaticField(0x126C0);
	}
	// static const ::System::UInt32 Field_1_2 = 0x0; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B05EC78D0816D29__CCTOR_OFFSET))();
	}

	static ::System::UInt32 Method_1_1867A77AD573DAEB()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B05EC78D0816D29_METHOD_1_1867A77AD573DAEB_OFFSET))();
	}

	static ::System::Void Method_1_FD452F8CB078528B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5B05EC78D0816D29_METHOD_1_FD452F8CB078528B_OFFSET))(a1);
	}

	static ::Class_1_411C76A6422C8F62* Method_1_C40015A0A4C9A5BF(::System::UInt32 a1)
	{
		return ((::Class_1_411C76A6422C8F62*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5B05EC78D0816D29_METHOD_1_C40015A0A4C9A5BF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C0F35A31FAC15CA9(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5B05EC78D0816D29_METHOD_1_C0F35A31FAC15CA9_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_73B962BA57A31C9C(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5B05EC78D0816D29_METHOD_1_73B962BA57A31C9C_OFFSET))(a1, a2);
	}
};

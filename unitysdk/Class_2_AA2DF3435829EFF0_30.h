#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1336.h"

class Class_2_208CC9941471731A_1100;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_AA2DF3435829EFF0_30_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1A71E460)
#define CLASS_2_AA2DF3435829EFF0_30_METHOD_2_32E47D6A527E924D_OFFSET UNITYSDK_OFFSET(0x1A71E290)
#define CLASS_2_AA2DF3435829EFF0_30_METHOD_2_52F693593F7BBFE8_OFFSET UNITYSDK_OFFSET(0x1A71E510)
#define CLASS_2_AA2DF3435829EFF0_30_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A71E1C0)
#define CLASS_2_AA2DF3435829EFF0_30__CTOR_OFFSET UNITYSDK_OFFSET(0x1A71E200)

inline static constexpr unsigned int Class_2_AA2DF3435829EFF0_30_TypeDefinitionIndex = 83741;

class Class_2_AA2DF3435829EFF0_30 : public ::Class_1_275515F210334D06
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1100*>* Field_2_1; // 0x18
	::Struct_2_1862835F8661A21F_1336 Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_30__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_30_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1100* Method_2_32E47D6A527E924D(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1100*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_30_METHOD_2_32E47D6A527E924D_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_30_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_52F693593F7BBFE8(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_30_METHOD_2_52F693593F7BBFE8_OFFSET))(this, a1);
	}
};

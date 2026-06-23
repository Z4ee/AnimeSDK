#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1187.h"

class Class_2_208CC9941471731A_1214;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_AA2DF3435829EFF0_18_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1CD56120)
#define CLASS_2_AA2DF3435829EFF0_18_METHOD_2_32E47D6A527E924D_OFFSET UNITYSDK_OFFSET(0x1CD565D0)
#define CLASS_2_AA2DF3435829EFF0_18_METHOD_2_52F693593F7BBFE8_OFFSET UNITYSDK_OFFSET(0x1CD561D0)
#define CLASS_2_AA2DF3435829EFF0_18_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1CD56050)
#define CLASS_2_AA2DF3435829EFF0_18__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD56090)

inline static constexpr unsigned int Class_2_AA2DF3435829EFF0_18_TypeDefinitionIndex = 88892;

class Class_2_AA2DF3435829EFF0_18 : public ::Class_1_275515F210334D06
{
public:
	::Struct_2_1862835F8661A21F_1187 Field_2_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1214*>* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_18__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_18_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_18_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_52F693593F7BBFE8(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_18_METHOD_2_52F693593F7BBFE8_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_1214* Method_2_32E47D6A527E924D(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1214*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_18_METHOD_2_32E47D6A527E924D_OFFSET))(this, a1);
	}
};

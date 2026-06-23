#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_504.h"

class Class_2_208CC9941471731A_1201;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_AA2DF3435829EFF0_32_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1CCA1130)
#define CLASS_2_AA2DF3435829EFF0_32_METHOD_2_32E47D6A527E924D_OFFSET UNITYSDK_OFFSET(0x1CCA0F60)
#define CLASS_2_AA2DF3435829EFF0_32_METHOD_2_52F693593F7BBFE8_OFFSET UNITYSDK_OFFSET(0x1CCA11E0)
#define CLASS_2_AA2DF3435829EFF0_32_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1CCA0E90)
#define CLASS_2_AA2DF3435829EFF0_32__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCA0ED0)

inline static constexpr unsigned int Class_2_AA2DF3435829EFF0_32_TypeDefinitionIndex = 89222;

class Class_2_AA2DF3435829EFF0_32 : public ::Class_1_275515F210334D06
{
public:
	::Struct_2_1862835F8661A21F_504 Field_2_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1201*>* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_32__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_32_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1201* Method_2_32E47D6A527E924D(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1201*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_32_METHOD_2_32E47D6A527E924D_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_32_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_52F693593F7BBFE8(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_32_METHOD_2_52F693593F7BBFE8_OFFSET))(this, a1);
	}
};

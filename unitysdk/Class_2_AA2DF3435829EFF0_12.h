#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1288.h"

class Class_2_F6BD7FA5BF83F4CE_1;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_AA2DF3435829EFF0_12_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x19CDEBB0)
#define CLASS_2_AA2DF3435829EFF0_12_METHOD_2_32E47D6A527E924D_OFFSET UNITYSDK_OFFSET(0x19CDE5D0)
#define CLASS_2_AA2DF3435829EFF0_12_METHOD_2_5D6624A62F65B989_OFFSET UNITYSDK_OFFSET(0x19CDE7A0)
#define CLASS_2_AA2DF3435829EFF0_12_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19CDE590)
#define CLASS_2_AA2DF3435829EFF0_12_METHOD_2_DB4B6D1970066BE6_OFFSET UNITYSDK_OFFSET(0x19CD6CD0)
#define CLASS_2_AA2DF3435829EFF0_12__CTOR_OFFSET UNITYSDK_OFFSET(0x19CD8820)

inline static constexpr unsigned int Class_2_AA2DF3435829EFF0_12_TypeDefinitionIndex = 83472;

class Class_2_AA2DF3435829EFF0_12 : public ::Class_1_275515F210334D06
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_F6BD7FA5BF83F4CE_1*>* Field_2_1; // 0x18
	::Struct_2_1862835F8661A21F_1288 Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_12__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_12_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_2_F6BD7FA5BF83F4CE_1* Method_2_32E47D6A527E924D(::System::Int32 a1)
	{
		return ((::Class_2_F6BD7FA5BF83F4CE_1*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_12_METHOD_2_32E47D6A527E924D_OFFSET))(this, a1);
	}

	::System::Void Method_2_5D6624A62F65B989(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_12_METHOD_2_5D6624A62F65B989_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_12_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Boolean Method_2_DB4B6D1970066BE6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_12_METHOD_2_DB4B6D1970066BE6_OFFSET))(this);
	}
};

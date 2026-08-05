#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1524.h"

class Class_2_208CC9941471731A_1273;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_AA2DF3435829EFF0_28_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1E342440)
#define CLASS_2_AA2DF3435829EFF0_28_METHOD_2_32E47D6A527E924D_OFFSET UNITYSDK_OFFSET(0x1E342270)
#define CLASS_2_AA2DF3435829EFF0_28_METHOD_2_52F693593F7BBFE8_OFFSET UNITYSDK_OFFSET(0x1E3424F0)
#define CLASS_2_AA2DF3435829EFF0_28_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1E3421A0)
#define CLASS_2_AA2DF3435829EFF0_28__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3421E0)

inline static constexpr unsigned int Class_2_AA2DF3435829EFF0_28_TypeDefinitionIndex = 92964;

class Class_2_AA2DF3435829EFF0_28 : public ::Class_1_275515F210334D06
{
public:
	::Struct_2_1862835F8661A21F_1524 Field_2_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1273*>* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_28__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_28_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1273* Method_2_32E47D6A527E924D(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1273*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_28_METHOD_2_32E47D6A527E924D_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_28_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_52F693593F7BBFE8(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_28_METHOD_2_52F693593F7BBFE8_OFFSET))(this, a1);
	}
};

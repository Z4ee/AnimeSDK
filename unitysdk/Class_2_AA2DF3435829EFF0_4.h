#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_468.h"

class Class_2_208CC9941471731A_1234;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_AA2DF3435829EFF0_4_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1D11F130)
#define CLASS_2_AA2DF3435829EFF0_4_METHOD_2_32E47D6A527E924D_OFFSET UNITYSDK_OFFSET(0x1D11EED0)
#define CLASS_2_AA2DF3435829EFF0_4_METHOD_2_52F693593F7BBFE8_OFFSET UNITYSDK_OFFSET(0x1D11F1E0)
#define CLASS_2_AA2DF3435829EFF0_4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1D11EE00)
#define CLASS_2_AA2DF3435829EFF0_4_METHOD_2_DCBEA4EC7225BC80_OFFSET UNITYSDK_OFFSET(0x1D11F0A0)
#define CLASS_2_AA2DF3435829EFF0_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1D11EE40)

inline static constexpr unsigned int Class_2_AA2DF3435829EFF0_4_TypeDefinitionIndex = 91901;

class Class_2_AA2DF3435829EFF0_4 : public ::Class_1_275515F210334D06
{
public:
	::Struct_2_1862835F8661A21F_468 Field_2_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1234*>* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1234* Method_2_32E47D6A527E924D(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1234*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_4_METHOD_2_32E47D6A527E924D_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1234*>* Method_2_DCBEA4EC7225BC80()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1234*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_4_METHOD_2_DCBEA4EC7225BC80_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_4_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_52F693593F7BBFE8(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_4_METHOD_2_52F693593F7BBFE8_OFFSET))(this, a1);
	}
};

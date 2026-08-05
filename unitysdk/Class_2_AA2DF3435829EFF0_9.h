#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_745.h"

class Class_2_208CC9941471731A_1237;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_AA2DF3435829EFF0_9_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1E074A90)
#define CLASS_2_AA2DF3435829EFF0_9_METHOD_2_32E47D6A527E924D_OFFSET UNITYSDK_OFFSET(0x1E075130)
#define CLASS_2_AA2DF3435829EFF0_9_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1E0749C0)
#define CLASS_2_AA2DF3435829EFF0_9_METHOD_2_CCAFA254FE21768F_OFFSET UNITYSDK_OFFSET(0x1E074B50)
#define CLASS_2_AA2DF3435829EFF0_9__CTOR_OFFSET UNITYSDK_OFFSET(0x1E074A00)

inline static constexpr unsigned int Class_2_AA2DF3435829EFF0_9_TypeDefinitionIndex = 92643;

class Class_2_AA2DF3435829EFF0_9 : public ::Class_1_275515F210334D06
{
public:
	::Struct_2_1862835F8661A21F_745 Field_2_3; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1237*>* Field_2_0; // 0x30
	::System::Int32 Field_2_1; // 0x38
	::System::Int32 Field_2_2; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_9_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_9_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_CCAFA254FE21768F(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_9_METHOD_2_CCAFA254FE21768F_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_1237* Method_2_32E47D6A527E924D(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1237*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_9_METHOD_2_32E47D6A527E924D_OFFSET))(this, a1);
	}
};

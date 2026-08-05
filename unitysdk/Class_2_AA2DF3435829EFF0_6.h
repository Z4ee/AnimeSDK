#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_178.h"

class Class_2_6356258FC4E12530;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_AA2DF3435829EFF0_6_METHOD_2_32E47D6A527E924D_OFFSET UNITYSDK_OFFSET(0x1E0351A0)
#define CLASS_2_AA2DF3435829EFF0_6_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1E035080)
#define CLASS_2_AA2DF3435829EFF0_6_METHOD_2_85E070F3B697BB7A_OFFSET UNITYSDK_OFFSET(0x1E034C60)
#define CLASS_2_AA2DF3435829EFF0_6_METHOD_2_C4297EFF013E4E78_OFFSET UNITYSDK_OFFSET(0x1E034B80)
#define CLASS_2_AA2DF3435829EFF0_6_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1E034A40)
#define CLASS_2_AA2DF3435829EFF0_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1E034A80)

inline static constexpr unsigned int Class_2_AA2DF3435829EFF0_6_TypeDefinitionIndex = 92064;

class Class_2_AA2DF3435829EFF0_6 : public ::Class_1_275515F210334D06
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_6356258FC4E12530*>* Field_2_0; // 0x18
	::Struct_2_1862835F8661A21F_178 Field_2_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_6356258FC4E12530*>* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_6_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_2_6356258FC4E12530* Method_2_C4297EFF013E4E78(::System::Int32 a1)
	{
		return ((::Class_2_6356258FC4E12530*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_6_METHOD_2_C4297EFF013E4E78_OFFSET))(this, a1);
	}

	::System::Void Method_2_85E070F3B697BB7A(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_6_METHOD_2_85E070F3B697BB7A_OFFSET))(this, a1);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_6_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::Class_2_6356258FC4E12530* Method_2_32E47D6A527E924D(::System::Int32 a1)
	{
		return ((::Class_2_6356258FC4E12530*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AA2DF3435829EFF0_6_METHOD_2_32E47D6A527E924D_OFFSET))(this, a1);
	}
};

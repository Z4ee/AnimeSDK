#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1379.h"

class Class_2_208CC9941471731A_1058;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_E7A80D8F9B919C48_METHOD_2_047B2E2F6E5A8F09_OFFSET UNITYSDK_OFFSET(0x1BF5A070)
#define CLASS_2_E7A80D8F9B919C48_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1BF59DF0)
#define CLASS_2_E7A80D8F9B919C48_METHOD_2_32E47D6A527E924D_OFFSET UNITYSDK_OFFSET(0x1BF59EA0)
#define CLASS_2_E7A80D8F9B919C48_METHOD_2_52F693593F7BBFE8_OFFSET UNITYSDK_OFFSET(0x1BF599E0)
#define CLASS_2_E7A80D8F9B919C48_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1BF59910)
#define CLASS_2_E7A80D8F9B919C48__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF59950)

inline static constexpr unsigned int Class_2_E7A80D8F9B919C48_TypeDefinitionIndex = 83142;

class Class_2_E7A80D8F9B919C48 : public ::Class_1_275515F210334D06
{
public:
	::Struct_2_1862835F8661A21F_1379 Field_2_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1058*>* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7A80D8F9B919C48__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7A80D8F9B919C48_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_52F693593F7BBFE8(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_E7A80D8F9B919C48_METHOD_2_52F693593F7BBFE8_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_1058* Method_2_32E47D6A527E924D(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1058*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E7A80D8F9B919C48_METHOD_2_32E47D6A527E924D_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_047B2E2F6E5A8F09(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E7A80D8F9B919C48_METHOD_2_047B2E2F6E5A8F09_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7A80D8F9B919C48_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}
};

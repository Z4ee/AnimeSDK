#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_814.h"

class Class_2_208CC9941471731A_1158;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0C9DFB8E611AB031_METHOD_2_32E47D6A527E924D_OFFSET UNITYSDK_OFFSET(0x1C2A18F0)
#define CLASS_2_0C9DFB8E611AB031_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1C2A1AC0)
#define CLASS_2_0C9DFB8E611AB031_METHOD_2_538A394A1ECA2F9C_OFFSET UNITYSDK_OFFSET(0x1C2A2110)
#define CLASS_2_0C9DFB8E611AB031_METHOD_2_66C1FFCD87DBD8D5_OFFSET UNITYSDK_OFFSET(0x1C2A1BE0)
#define CLASS_2_0C9DFB8E611AB031_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C2A17B0)
#define CLASS_2_0C9DFB8E611AB031__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2A17F0)

inline static constexpr unsigned int Class_2_0C9DFB8E611AB031_TypeDefinitionIndex = 87972;

class Class_2_0C9DFB8E611AB031 : public ::Class_1_275515F210334D06
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1158*>*>* Field_2_2; // 0x18
	::Struct_2_1862835F8661A21F_814 Field_2_0; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1158*>* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C9DFB8E611AB031__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C9DFB8E611AB031_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1158* Method_2_32E47D6A527E924D(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1158*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0C9DFB8E611AB031_METHOD_2_32E47D6A527E924D_OFFSET))(this, a1);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C9DFB8E611AB031_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_66C1FFCD87DBD8D5(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_0C9DFB8E611AB031_METHOD_2_66C1FFCD87DBD8D5_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1158*>* Method_2_538A394A1ECA2F9C(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1158*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0C9DFB8E611AB031_METHOD_2_538A394A1ECA2F9C_OFFSET))(this, a1);
	}
};

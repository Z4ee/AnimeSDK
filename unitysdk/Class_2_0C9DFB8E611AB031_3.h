#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_878.h"

class Class_2_208CC9941471731A_1285;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0C9DFB8E611AB031_3_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x16CB7CA0)
#define CLASS_2_0C9DFB8E611AB031_3_METHOD_2_32E47D6A527E924D_OFFSET UNITYSDK_OFFSET(0x16CB8120)
#define CLASS_2_0C9DFB8E611AB031_3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16CB7B80)
#define CLASS_2_0C9DFB8E611AB031_3_METHOD_2_DDA7E14998A3D8C3_OFFSET UNITYSDK_OFFSET(0x16CB7D90)
#define CLASS_2_0C9DFB8E611AB031_3__CTOR_OFFSET UNITYSDK_OFFSET(0x16CB7BC0)

inline static constexpr unsigned int Class_2_0C9DFB8E611AB031_3_TypeDefinitionIndex = 93207;

class Class_2_0C9DFB8E611AB031_3 : public ::Class_1_275515F210334D06
{
public:
	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1285*>* Field_2_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1285*>* Field_2_1; // 0x20
	::Struct_2_1862835F8661A21F_878 Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C9DFB8E611AB031_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C9DFB8E611AB031_3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C9DFB8E611AB031_3_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_DDA7E14998A3D8C3(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_0C9DFB8E611AB031_3_METHOD_2_DDA7E14998A3D8C3_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_1285* Method_2_32E47D6A527E924D(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1285*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0C9DFB8E611AB031_3_METHOD_2_32E47D6A527E924D_OFFSET))(this, a1);
	}
};

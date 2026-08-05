#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1862835F8661A21F_82.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1295;
namespace FlatBuffers { class ByteBuffer; }

#define CLASS_1_538CF21CE9B6ECB7_METHOD_1_6AD339F282AC5D0C_OFFSET UNITYSDK_OFFSET(0x1BF6D7B0)
#define CLASS_1_538CF21CE9B6ECB7_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1BF6D760)
#define CLASS_1_538CF21CE9B6ECB7_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1BF6D710)
#define CLASS_1_538CF21CE9B6ECB7__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF6D750)

inline static constexpr unsigned int Class_1_538CF21CE9B6ECB7_TypeDefinitionIndex = 93641;

class Class_1_538CF21CE9B6ECB7 : public ::System::Object
{
public:
	::Struct_2_1862835F8661A21F_82 Field_1_1; // 0x10
	::Il2CppArray<::Class_2_208CC9941471731A_1295*>* Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_538CF21CE9B6ECB7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_538CF21CE9B6ECB7_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_538CF21CE9B6ECB7_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_6AD339F282AC5D0C(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_1_538CF21CE9B6ECB7_METHOD_1_6AD339F282AC5D0C_OFFSET))(this, a1);
	}
};

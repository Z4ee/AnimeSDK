#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1862835F8661A21F_112.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1297;
namespace FlatBuffers { class ByteBuffer; }

#define CLASS_1_C4159BFB223F26FE_METHOD_1_6AD339F282AC5D0C_OFFSET UNITYSDK_OFFSET(0x1E8D5580)
#define CLASS_1_C4159BFB223F26FE_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1E8D5530)
#define CLASS_1_C4159BFB223F26FE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1E8D54E0)
#define CLASS_1_C4159BFB223F26FE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8D5520)

inline static constexpr unsigned int Class_1_C4159BFB223F26FE_TypeDefinitionIndex = 93556;

class Class_1_C4159BFB223F26FE : public ::System::Object
{
public:
	::Il2CppArray<::Class_2_208CC9941471731A_1297*>* Field_1_0; // 0x10
	::Struct_2_1862835F8661A21F_112 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4159BFB223F26FE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4159BFB223F26FE_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4159BFB223F26FE_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_6AD339F282AC5D0C(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_1_C4159BFB223F26FE_METHOD_1_6AD339F282AC5D0C_OFFSET))(this, a1);
	}
};

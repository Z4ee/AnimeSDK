#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1862835F8661A21F_4.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1298;
namespace FlatBuffers { class ByteBuffer; }

#define CLASS_1_428F289EB61FC56A_METHOD_1_6AD339F282AC5D0C_OFFSET UNITYSDK_OFFSET(0x1F671410)
#define CLASS_1_428F289EB61FC56A_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1F6713C0)
#define CLASS_1_428F289EB61FC56A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1F671370)
#define CLASS_1_428F289EB61FC56A__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6713B0)

inline static constexpr unsigned int Class_1_428F289EB61FC56A_TypeDefinitionIndex = 93607;

class Class_1_428F289EB61FC56A : public ::System::Object
{
public:
	::Il2CppArray<::Class_2_208CC9941471731A_1298*>* Field_1_0; // 0x10
	::Struct_2_1862835F8661A21F_4 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_428F289EB61FC56A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_428F289EB61FC56A_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_428F289EB61FC56A_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_6AD339F282AC5D0C(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_1_428F289EB61FC56A_METHOD_1_6AD339F282AC5D0C_OFFSET))(this, a1);
	}
};

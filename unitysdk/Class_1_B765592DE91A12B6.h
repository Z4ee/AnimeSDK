#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1862835F8661A21F_856.h"
#include "unitysdk/System/Object.h"

class Class_2_D4180D159F003408;
namespace FlatBuffers { class ByteBuffer; }

#define CLASS_1_B765592DE91A12B6_METHOD_1_6AD339F282AC5D0C_OFFSET UNITYSDK_OFFSET(0x1E28C560)
#define CLASS_1_B765592DE91A12B6_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1E28CD20)
#define CLASS_1_B765592DE91A12B6_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1E28C510)
#define CLASS_1_B765592DE91A12B6__CTOR_OFFSET UNITYSDK_OFFSET(0x1E28C550)

inline static constexpr unsigned int Class_1_B765592DE91A12B6_TypeDefinitionIndex = 89643;

class Class_1_B765592DE91A12B6 : public ::System::Object
{
public:
	::Il2CppArray<::Class_2_D4180D159F003408*>* Field_1_1; // 0x10
	::Struct_2_1862835F8661A21F_856 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B765592DE91A12B6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B765592DE91A12B6_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_6AD339F282AC5D0C(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_1_B765592DE91A12B6_METHOD_1_6AD339F282AC5D0C_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B765592DE91A12B6_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1264.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1111;
namespace FlatBuffers { class ByteBuffer; }

#define CLASS_1_568257520E164FD9_METHOD_1_AF518E2FECFB1139_OFFSET UNITYSDK_OFFSET(0x1B87F3A0)
#define CLASS_1_568257520E164FD9_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1B87F350)
#define CLASS_1_568257520E164FD9_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1B87F300)
#define CLASS_1_568257520E164FD9__CTOR_OFFSET UNITYSDK_OFFSET(0x1B87F340)

inline static constexpr unsigned int Class_1_568257520E164FD9_TypeDefinitionIndex = 84116;

class Class_1_568257520E164FD9 : public ::System::Object
{
public:
	::Struct_2_1862835F8661A21F_1264 Field_1_0; // 0x10
	::Il2CppArray<::Class_2_208CC9941471731A_1111*>* Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_568257520E164FD9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_568257520E164FD9_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_568257520E164FD9_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_AF518E2FECFB1139(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_1_568257520E164FD9_METHOD_1_AF518E2FECFB1139_OFFSET))(this, a1);
	}
};

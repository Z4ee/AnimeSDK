#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1339.h"
#include "unitysdk/System/Object.h"

class Class_2_D4180D159F003408;
namespace FlatBuffers { class ByteBuffer; }

#define CLASS_1_8FA3A1A0D92AB0BC_METHOD_1_6AD339F282AC5D0C_OFFSET UNITYSDK_OFFSET(0x1C1CA1E0)
#define CLASS_1_8FA3A1A0D92AB0BC_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1C1CA190)
#define CLASS_1_8FA3A1A0D92AB0BC_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C1CA140)
#define CLASS_1_8FA3A1A0D92AB0BC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1CA180)

inline static constexpr unsigned int Class_1_8FA3A1A0D92AB0BC_TypeDefinitionIndex = 84121;

class Class_1_8FA3A1A0D92AB0BC : public ::System::Object
{
public:
	::Struct_2_1862835F8661A21F_1339 Field_1_0; // 0x10
	::Il2CppArray<::Class_2_D4180D159F003408*>* Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FA3A1A0D92AB0BC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FA3A1A0D92AB0BC_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FA3A1A0D92AB0BC_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_6AD339F282AC5D0C(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_1_8FA3A1A0D92AB0BC_METHOD_1_6AD339F282AC5D0C_OFFSET))(this, a1);
	}
};

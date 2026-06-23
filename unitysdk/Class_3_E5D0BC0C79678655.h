#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_E5D0BC0C79678655_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x127F3670)
#define CLASS_3_E5D0BC0C79678655_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x127F3D20)
#define CLASS_3_E5D0BC0C79678655_METHOD_3_D7D32BC455E1AEBB_OFFSET UNITYSDK_OFFSET(0x127F3820)
#define CLASS_3_E5D0BC0C79678655__CTOR_OFFSET UNITYSDK_OFFSET(0x127F3BE0)

inline static constexpr unsigned int Class_3_E5D0BC0C79678655_TypeDefinitionIndex = 73963;

class Class_3_E5D0BC0C79678655 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x18
	::Class_4_F91115D9A1F02F5F<::MoleMole::EntityHandle>* Field_3_1; // 0x20
	::Class_3_B537A0AA78803363* Field_3_3; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_3_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E5D0BC0C79678655__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E5D0BC0C79678655_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_D7D32BC455E1AEBB(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_E5D0BC0C79678655_METHOD_3_D7D32BC455E1AEBB_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E5D0BC0C79678655_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};

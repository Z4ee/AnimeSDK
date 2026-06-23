#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_CF43FA1E89397A1C;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_FC010967B4EE5323_2_METHOD_3_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x12808D80)
#define CLASS_3_FC010967B4EE5323_2_METHOD_3_B5FF895C58FE544D_OFFSET UNITYSDK_OFFSET(0x12808FE0)
#define CLASS_3_FC010967B4EE5323_2_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12809CE0)
#define CLASS_3_FC010967B4EE5323_2__CTOR_OFFSET UNITYSDK_OFFSET(0x12809AE0)

inline static constexpr unsigned int Class_3_FC010967B4EE5323_2_TypeDefinitionIndex = 57937;

class Class_3_FC010967B4EE5323_2 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_F91115D9A1F02F5F<::MoleMole::EntityHandle>* Field_3_1; // 0x18
	::Class_3_B537A0AA78803363* Field_3_4; // 0x20
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_3_2; // 0x28
	::Class_3_CF43FA1E89397A1C* Field_3_5; // 0x30
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x38
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_3_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FC010967B4EE5323_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FC010967B4EE5323_2_METHOD_3_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_3_B5FF895C58FE544D(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_FC010967B4EE5323_2_METHOD_3_B5FF895C58FE544D_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FC010967B4EE5323_2_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};

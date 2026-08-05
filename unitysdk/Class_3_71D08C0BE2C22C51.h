#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_71D08C0BE2C22C51_METHOD_3_22EB5E1405A8445C_OFFSET UNITYSDK_OFFSET(0x12D55D00)
#define CLASS_3_71D08C0BE2C22C51_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12D56130)
#define CLASS_3_71D08C0BE2C22C51_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x12D55B00)
#define CLASS_3_71D08C0BE2C22C51__CTOR_OFFSET UNITYSDK_OFFSET(0x12D55F60)

inline static constexpr unsigned int Class_3_71D08C0BE2C22C51_TypeDefinitionIndex = 67441;

class Class_3_71D08C0BE2C22C51 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_8D3E479B491881B3<::MoleMole::EntityHandle>* Field_3_7; // 0x18
	::Class_3_DCB7F8B839F0C44B_4* Field_3_1; // 0x20
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_3_0; // 0x28
	::Class_3_B537A0AA78803363* Field_3_6; // 0x30
	::Class_3_B537A0AA78803363* Field_3_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_71D08C0BE2C22C51__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_71D08C0BE2C22C51_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_22EB5E1405A8445C(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_71D08C0BE2C22C51_METHOD_3_22EB5E1405A8445C_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_71D08C0BE2C22C51_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};

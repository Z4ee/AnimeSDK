#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_AFA07C787FE9DA81_METHOD_3_6A9E2D3D0AFF1A23_OFFSET UNITYSDK_OFFSET(0x12542C60)
#define CLASS_3_AFA07C787FE9DA81_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12542FA0)
#define CLASS_3_AFA07C787FE9DA81_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x12542A60)
#define CLASS_3_AFA07C787FE9DA81__CTOR_OFFSET UNITYSDK_OFFSET(0x12542E20)

inline static constexpr unsigned int Class_3_AFA07C787FE9DA81_TypeDefinitionIndex = 88638;

class Class_3_AFA07C787FE9DA81 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_6; // 0x18
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_0; // 0x20
	::Class_3_B537A0AA78803363* Field_3_5; // 0x28
	::Class_3_DCB7F8B839F0C44B_4* Field_3_1; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_3_7; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AFA07C787FE9DA81__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AFA07C787FE9DA81_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_6A9E2D3D0AFF1A23(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_AFA07C787FE9DA81_METHOD_3_6A9E2D3D0AFF1A23_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AFA07C787FE9DA81_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};

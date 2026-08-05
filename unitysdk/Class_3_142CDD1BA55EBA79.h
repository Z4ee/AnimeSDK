#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_142CDD1BA55EBA79_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE1FEB60)
#define CLASS_3_142CDD1BA55EBA79_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xE1FE580)
#define CLASS_3_142CDD1BA55EBA79_METHOD_3_F4D4194FB86E4F25_OFFSET UNITYSDK_OFFSET(0xE1FE780)
#define CLASS_3_142CDD1BA55EBA79__CTOR_OFFSET UNITYSDK_OFFSET(0xE1FE9E0)

inline static constexpr unsigned int Class_3_142CDD1BA55EBA79_TypeDefinitionIndex = 44560;

class Class_3_142CDD1BA55EBA79 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_3_0; // 0x18
	::Class_3_DCB7F8B839F0C44B_4* Field_3_2; // 0x20
	::Class_3_B537A0AA78803363* Field_3_6; // 0x28
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_3_1; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_3_7; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_142CDD1BA55EBA79__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_142CDD1BA55EBA79_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_F4D4194FB86E4F25(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_142CDD1BA55EBA79_METHOD_3_F4D4194FB86E4F25_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_142CDD1BA55EBA79_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};

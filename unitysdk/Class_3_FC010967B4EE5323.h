#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_FC010967B4EE5323_METHOD_3_B5FF895C58FE544D_OFFSET UNITYSDK_OFFSET(0x1806FA10)
#define CLASS_3_FC010967B4EE5323_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18070560)
#define CLASS_3_FC010967B4EE5323_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x1806F810)
#define CLASS_3_FC010967B4EE5323_METHOD_3_F0244CBB486CA44B_OFFSET UNITYSDK_OFFSET(0x18070390)
#define CLASS_3_FC010967B4EE5323__CTOR_OFFSET UNITYSDK_OFFSET(0x180703E0)

inline static constexpr unsigned int Class_3_FC010967B4EE5323_TypeDefinitionIndex = 43867;

class Class_3_FC010967B4EE5323 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_B537A0AA78803363* Field_3_4; // 0x18
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x20
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_3_2; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_3_3; // 0x30
	::Class_4_F91115D9A1F02F5F<::MoleMole::EntityHandle>* Field_3_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FC010967B4EE5323__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FC010967B4EE5323_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_B5FF895C58FE544D(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_FC010967B4EE5323_METHOD_3_B5FF895C58FE544D_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FC010967B4EE5323_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* Method_3_F0244CBB486CA44B(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::String*(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_FC010967B4EE5323_METHOD_3_F0244CBB486CA44B_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_4_5B5E82918BC44D6E;
namespace System { class String; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_44E7ACC41B8982F3_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x12D6A1A0)
#define CLASS_3_44E7ACC41B8982F3_METHOD_3_BB5DFAE4FCEC0C51_OFFSET UNITYSDK_OFFSET(0x12D6A270)
#define CLASS_3_44E7ACC41B8982F3_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12D6A500)
#define CLASS_3_44E7ACC41B8982F3__CTOR_OFFSET UNITYSDK_OFFSET(0x12D6A450)

inline static constexpr unsigned int Class_3_44E7ACC41B8982F3_TypeDefinitionIndex = 77799;

class Class_3_44E7ACC41B8982F3 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_3_0; // 0x18
	::Class_4_5B5E82918BC44D6E* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_44E7ACC41B8982F3__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_44E7ACC41B8982F3_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_BB5DFAE4FCEC0C51(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_44E7ACC41B8982F3_METHOD_3_BB5DFAE4FCEC0C51_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_44E7ACC41B8982F3_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};

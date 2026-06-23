#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_30D9C906A3407444_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x133DF990)
#define CLASS_3_30D9C906A3407444_METHOD_3_759CD453C5CD51E0_OFFSET UNITYSDK_OFFSET(0x133DFAD0)
#define CLASS_3_30D9C906A3407444_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x133DFDE0)
#define CLASS_3_30D9C906A3407444__CTOR_OFFSET UNITYSDK_OFFSET(0x133DFCE0)

inline static constexpr unsigned int Class_3_30D9C906A3407444_TypeDefinitionIndex = 84301;

class Class_3_30D9C906A3407444 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_3_1; // 0x18
	::Class_3_B537A0AA78803363* Field_3_2; // 0x20
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30D9C906A3407444__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30D9C906A3407444_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_759CD453C5CD51E0(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_30D9C906A3407444_METHOD_3_759CD453C5CD51E0_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30D9C906A3407444_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};

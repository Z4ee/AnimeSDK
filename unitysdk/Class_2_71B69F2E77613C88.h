#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_401FD2135D0092DD.h"

#define CLASS_2_71B69F2E77613C88_GET_REVERSE_OFFSET UNITYSDK_OFFSET(0xA869200)
#define CLASS_2_71B69F2E77613C88_METHOD_2_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0xA869270)
#define CLASS_2_71B69F2E77613C88_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA869210)
#define CLASS_2_71B69F2E77613C88_METHOD_2_8C4AEC0BC1CA0CB4_OFFSET UNITYSDK_OFFSET(0xA869090)
#define CLASS_2_71B69F2E77613C88_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xA869000)
#define CLASS_2_71B69F2E77613C88__CTOR_OFFSET UNITYSDK_OFFSET(0xA868FF0)

inline static constexpr unsigned int Class_2_71B69F2E77613C88_TypeDefinitionIndex = 69279;

class Class_2_71B69F2E77613C88 : public ::Class_1_401FD2135D0092DD
{
public:
	::System::Single Field_2_0; // 0x40
	::System::Boolean _Reverse_k__BackingField; // 0x44
	::System::Int32 Field_2_2; // 0x48

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_71B69F2E77613C88__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71B69F2E77613C88_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_8C4AEC0BC1CA0CB4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71B69F2E77613C88_METHOD_2_8C4AEC0BC1CA0CB4_OFFSET))(this, a1);
	}

	::System::Boolean get_Reverse()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71B69F2E77613C88_GET_REVERSE_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71B69F2E77613C88_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71B69F2E77613C88_METHOD_2_3C927B51D2142A24_OFFSET))(this, a1);
	}
};

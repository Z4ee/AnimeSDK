#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_401FD2135D0092DD.h"

#define CLASS_2_6E312593B7C1AB3E_GET_REVERSE_OFFSET UNITYSDK_OFFSET(0x1057E920)
#define CLASS_2_6E312593B7C1AB3E_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1057E930)
#define CLASS_2_6E312593B7C1AB3E_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x1057E990)
#define CLASS_2_6E312593B7C1AB3E_METHOD_2_8C4AEC0BC1CA0CB4_OFFSET UNITYSDK_OFFSET(0x1057E7B0)
#define CLASS_2_6E312593B7C1AB3E_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1057E720)
#define CLASS_2_6E312593B7C1AB3E__CTOR_OFFSET UNITYSDK_OFFSET(0x1057E710)

inline static constexpr unsigned int Class_2_6E312593B7C1AB3E_TypeDefinitionIndex = 60856;

class Class_2_6E312593B7C1AB3E : public ::Class_1_401FD2135D0092DD
{
public:
	::System::Boolean _Reverse_k__BackingField; // 0x40
	::System::Single Field_2_2; // 0x44
	::System::Int32 Field_2_1; // 0x48

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6E312593B7C1AB3E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E312593B7C1AB3E_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_8C4AEC0BC1CA0CB4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6E312593B7C1AB3E_METHOD_2_8C4AEC0BC1CA0CB4_OFFSET))(this, a1);
	}

	::System::Boolean get_Reverse()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E312593B7C1AB3E_GET_REVERSE_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E312593B7C1AB3E_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6E312593B7C1AB3E_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};

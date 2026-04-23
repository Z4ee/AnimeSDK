#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61_1.h"

class Class_2_E1DC3D0DDD796244;

#define CLASS_2_412FCA0929A389DC_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x17F8CA60)
#define CLASS_2_412FCA0929A389DC_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x17F8CAD0)
#define CLASS_2_412FCA0929A389DC_METHOD_2_B1983B8E0FEB5BBD_OFFSET UNITYSDK_OFFSET(0x17F8C6A0)
#define CLASS_2_412FCA0929A389DC_METHOD_2_F5B4708E7805566C_OFFSET UNITYSDK_OFFSET(0x17F8C3B0)
#define CLASS_2_412FCA0929A389DC__CTOR_OFFSET UNITYSDK_OFFSET(0x17F8C3A0)

inline static constexpr unsigned int Class_2_412FCA0929A389DC_TypeDefinitionIndex = 38732;

class Class_2_412FCA0929A389DC : public ::Class_1_5BE136E515AF9A61_1
{
public:
	::Class_2_E1DC3D0DDD796244* Field_2_0; // 0x18
	::System::Single Field_2_2; // 0x20
	::System::Single Field_2_1; // 0x24

	::System::Void _ctor(::Class_2_E1DC3D0DDD796244* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E1DC3D0DDD796244*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_412FCA0929A389DC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F5B4708E7805566C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_412FCA0929A389DC_METHOD_2_F5B4708E7805566C_OFFSET))(this);
	}

	::System::Void Method_2_B1983B8E0FEB5BBD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_412FCA0929A389DC_METHOD_2_B1983B8E0FEB5BBD_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_412FCA0929A389DC_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_412FCA0929A389DC_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};

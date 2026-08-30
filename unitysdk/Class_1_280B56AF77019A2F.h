#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_280B56AF77019A2F_GET_SPONSORID_OFFSET UNITYSDK_OFFSET(0x156B1490)
#define CLASS_1_280B56AF77019A2F_GET_STATEID_OFFSET UNITYSDK_OFFSET(0x156B14B0)
#define CLASS_1_280B56AF77019A2F_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x156B1440)
#define CLASS_1_280B56AF77019A2F_METHOD_1_B8FF86B5386F944C_OFFSET UNITYSDK_OFFSET(0x156B13D0)
#define CLASS_1_280B56AF77019A2F_SET_SPONSORID_OFFSET UNITYSDK_OFFSET(0x156B14A0)
#define CLASS_1_280B56AF77019A2F_SET_STATEID_OFFSET UNITYSDK_OFFSET(0x156B14C0)
#define CLASS_1_280B56AF77019A2F__CTOR_OFFSET UNITYSDK_OFFSET(0x156B1430)

inline static constexpr unsigned int Class_1_280B56AF77019A2F_TypeDefinitionIndex = 78976;

class Class_1_280B56AF77019A2F : public ::System::Object
{
public:
	::System::UInt32 _SponsorID_k__BackingField; // 0x10
	::System::UInt32 _StateID_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_280B56AF77019A2F__CTOR_OFFSET))(this);
	}

	static ::Class_1_280B56AF77019A2F* Method_1_B8FF86B5386F944C(::System::UInt32 a1)
	{
		return ((::Class_1_280B56AF77019A2F*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_280B56AF77019A2F_METHOD_1_B8FF86B5386F944C_OFFSET))(a1);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_280B56AF77019A2F_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::UInt32 get_SponsorID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_280B56AF77019A2F_GET_SPONSORID_OFFSET))(this);
	}

	::System::Void set_SponsorID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_280B56AF77019A2F_SET_SPONSORID_OFFSET))(this, a1);
	}

	::System::UInt32 get_StateID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_280B56AF77019A2F_GET_STATEID_OFFSET))(this);
	}

	::System::Void set_StateID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_280B56AF77019A2F_SET_STATEID_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/PS/TrcRestrictionStatus.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_A0494A2BA8769FDB_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x15B187E0)
#define CLASS_1_A0494A2BA8769FDB_METHOD_1_656E92FAF2275E5F_OFFSET UNITYSDK_OFFSET(0x15B18860)
#define CLASS_1_A0494A2BA8769FDB_METHOD_1_E6184566299DAB0F_OFFSET UNITYSDK_OFFSET(0x15B188E0)
#define CLASS_1_A0494A2BA8769FDB_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x15B18820)
#define CLASS_1_A0494A2BA8769FDB_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x15B188A0)
#define CLASS_1_A0494A2BA8769FDB__CTOR_OFFSET UNITYSDK_OFFSET(0x15B18920)

inline static constexpr unsigned int Class_1_A0494A2BA8769FDB_TypeDefinitionIndex = 49525;

class Class_1_A0494A2BA8769FDB : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x6; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x0; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0494A2BA8769FDB__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A0494A2BA8769FDB_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A0494A2BA8769FDB_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::RPG::PS::TrcRestrictionStatus Method_1_656E92FAF2275E5F()
	{
		return ((::RPG::PS::TrcRestrictionStatus(*)())((::PBYTE)hIl2Cpp + CLASS_1_A0494A2BA8769FDB_METHOD_1_656E92FAF2275E5F_OFFSET))();
	}

	static ::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_A0494A2BA8769FDB_METHOD_1_F5599B7DA8E7E53C_OFFSET))();
	}

	static ::System::Int32 Method_1_E6184566299DAB0F(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A0494A2BA8769FDB_METHOD_1_E6184566299DAB0F_OFFSET))(a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_37.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_8831ADA1771A2099_GET_EXPSOURCETYPE_OFFSET UNITYSDK_OFFSET(0xE2BF1D0)
#define CLASS_1_8831ADA1771A2099_GET_EXP_OFFSET UNITYSDK_OFFSET(0xE2BF1F0)
#define CLASS_1_8831ADA1771A2099_GET_SOURCEID_OFFSET UNITYSDK_OFFSET(0xE2BF210)
#define CLASS_1_8831ADA1771A2099_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xE2BF230)
#define CLASS_1_8831ADA1771A2099_METHOD_1_942AE0DBFF08C6E6_OFFSET UNITYSDK_OFFSET(0xE2BF280)
#define CLASS_1_8831ADA1771A2099_METHOD_1_BFC42181680DB9D3_OFFSET UNITYSDK_OFFSET(0xE2BF410)
#define CLASS_1_8831ADA1771A2099_SET_EXPSOURCETYPE_OFFSET UNITYSDK_OFFSET(0xE2BF1E0)
#define CLASS_1_8831ADA1771A2099_SET_EXP_OFFSET UNITYSDK_OFFSET(0xE2BF200)
#define CLASS_1_8831ADA1771A2099_SET_SOURCEID_OFFSET UNITYSDK_OFFSET(0xE2BF220)
#define CLASS_1_8831ADA1771A2099__CTOR_OFFSET UNITYSDK_OFFSET(0xE2BF1C0)

inline static constexpr unsigned int Class_1_8831ADA1771A2099_TypeDefinitionIndex = 78567;

class Class_1_8831ADA1771A2099 : public ::System::Object
{
public:
	::Enum_3_4608E37A1B3D374A_37 _ExpSourceType_k__BackingField; // 0x10
	::System::UInt32 _Exp_k__BackingField; // 0x14
	::System::UInt32 _SourceID_k__BackingField; // 0x18

	::System::Void _ctor(::Enum_3_4608E37A1B3D374A_37 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_37, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8831ADA1771A2099__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Enum_3_4608E37A1B3D374A_37 get_ExpSourceType()
	{
		return ((::Enum_3_4608E37A1B3D374A_37(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8831ADA1771A2099_GET_EXPSOURCETYPE_OFFSET))(this);
	}

	::System::Void set_ExpSourceType(::Enum_3_4608E37A1B3D374A_37 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_37))((::PBYTE)hIl2Cpp + CLASS_1_8831ADA1771A2099_SET_EXPSOURCETYPE_OFFSET))(this, a1);
	}

	::System::UInt32 get_Exp()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8831ADA1771A2099_GET_EXP_OFFSET))(this);
	}

	::System::Void set_Exp(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8831ADA1771A2099_SET_EXP_OFFSET))(this, a1);
	}

	::System::UInt32 get_SourceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8831ADA1771A2099_GET_SOURCEID_OFFSET))(this);
	}

	::System::Void set_SourceID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8831ADA1771A2099_SET_SOURCEID_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8831ADA1771A2099_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::RPG::Client::TextID Method_1_942AE0DBFF08C6E6()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8831ADA1771A2099_METHOD_1_942AE0DBFF08C6E6_OFFSET))(this);
	}

	::System::UInt32 Method_1_BFC42181680DB9D3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8831ADA1771A2099_METHOD_1_BFC42181680DB9D3_OFFSET))(this);
	}
};

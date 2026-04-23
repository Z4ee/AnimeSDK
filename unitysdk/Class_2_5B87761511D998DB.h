#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_D17272E82AE804C2_385;
class Class_1_EBD9A77671154634;

#define CLASS_2_5B87761511D998DB_GET_LEFTSKIPCOUNT_OFFSET UNITYSDK_OFFSET(0x11BA6020)
#define CLASS_2_5B87761511D998DB_GET_TOTALSKIPCOUNT_OFFSET UNITYSDK_OFFSET(0x11BA6000)
#define CLASS_2_5B87761511D998DB_METHOD_2_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x11BA5ED0)
#define CLASS_2_5B87761511D998DB_SET_LEFTSKIPCOUNT_OFFSET UNITYSDK_OFFSET(0x11BA6030)
#define CLASS_2_5B87761511D998DB_SET_TOTALSKIPCOUNT_OFFSET UNITYSDK_OFFSET(0x11BA6010)
#define CLASS_2_5B87761511D998DB_UPDATE_OFFSET UNITYSDK_OFFSET(0x11BA5F30)
#define CLASS_2_5B87761511D998DB__CTOR_OFFSET UNITYSDK_OFFSET(0x11BA5E10)
#define CLASS_2_5B87761511D998DB___IFIXBASEPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x11BA6040)

inline static constexpr unsigned int Class_2_5B87761511D998DB_TypeDefinitionIndex = 59873;

class Class_2_5B87761511D998DB : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::UInt32 _LeftSkipCount_k__BackingField; // 0x28
	::System::UInt32 _TotalSkipCount_k__BackingField; // 0x2C

	::System::Void _ctor(::Class_1_EBD9A77671154634* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + CLASS_2_5B87761511D998DB__CTOR_OFFSET))(this, a1);
	}

	::System::Void Update(::Class_1_EBD9A77671154634* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + CLASS_2_5B87761511D998DB_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_097468641FDED14E(::Class_1_D17272E82AE804C2_385* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_385*))((::PBYTE)hIl2Cpp + CLASS_2_5B87761511D998DB_METHOD_2_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::UInt32 get_TotalSkipCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B87761511D998DB_GET_TOTALSKIPCOUNT_OFFSET))(this);
	}

	::System::Void set_TotalSkipCount(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5B87761511D998DB_SET_TOTALSKIPCOUNT_OFFSET))(this, value);
	}

	::System::UInt32 get_LeftSkipCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B87761511D998DB_GET_LEFTSKIPCOUNT_OFFSET))(this);
	}

	::System::Void set_LeftSkipCount(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5B87761511D998DB_SET_LEFTSKIPCOUNT_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Update(::Class_1_EBD9A77671154634* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + CLASS_2_5B87761511D998DB___IFIXBASEPROXY_UPDATE_OFFSET))(this, P0);
	}
};

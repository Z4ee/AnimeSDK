#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CD6736B46496BBF4.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_3.h"

class Class_0_16E4307DCC419505_943;
namespace RPG::Client { class IRogueMiracleInfo; }

#define CLASS_2_42F70F50178E1BCA_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x15FF16D0)
#define CLASS_2_42F70F50178E1BCA__CTOR_OFFSET UNITYSDK_OFFSET(0x15FF16C0)

inline static constexpr unsigned int Class_2_42F70F50178E1BCA_TypeDefinitionIndex = 67089;

class Class_2_42F70F50178E1BCA : public ::Class_1_CD6736B46496BBF4
{
public:
	::RPG::Client::IRogueMiracleInfo* CEMHIBCKNHF; // 0x20
	::Class_0_16E4307DCC419505_943* EOGBDMMODCM; // 0x28

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_3 a1, ::RPG::Client::IRogueMiracleInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_3, ::RPG::Client::IRogueMiracleInfo*))((::PBYTE)hIl2Cpp + CLASS_2_42F70F50178E1BCA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_943* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_943*))((::PBYTE)hIl2Cpp + CLASS_2_42F70F50178E1BCA_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
	}
};

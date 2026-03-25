#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_703;
class Class_1_43D95BDB5AB51D37_2;
namespace RPG::Client { class IRogueMiracleInGame; }

#define CLASS_1_23DD2E62D4811F21_METHOD_1_40384FCA3A7AD332_OFFSET UNITYSDK_OFFSET(0x1118C4A0)
#define CLASS_1_23DD2E62D4811F21_METHOD_1_6E5ED9FE0B3EA523_OFFSET UNITYSDK_OFFSET(0x1118C310)
#define CLASS_1_23DD2E62D4811F21__CTOR_OFFSET UNITYSDK_OFFSET(0x1118C730)

inline static constexpr unsigned int Class_1_23DD2E62D4811F21_TypeDefinitionIndex = 54794;

class Class_1_23DD2E62D4811F21 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23DD2E62D4811F21__CTOR_OFFSET))(this);
	}

	static ::RPG::Client::IRogueMiracleInGame* Method_1_6E5ED9FE0B3EA523(::Class_1_43D95BDB5AB51D37_2* a1)
	{
		return ((::RPG::Client::IRogueMiracleInGame*(*)(::Class_1_43D95BDB5AB51D37_2*))((::PBYTE)hIl2Cpp + CLASS_1_23DD2E62D4811F21_METHOD_1_6E5ED9FE0B3EA523_OFFSET))(a1);
	}

	static ::RPG::Client::IRogueMiracleInGame* Method_1_40384FCA3A7AD332(::Class_1_43D95BDB5AB51D37_2* a1, ::Class_0_16E4307DCC419505_703* a2)
	{
		return ((::RPG::Client::IRogueMiracleInGame*(*)(::Class_1_43D95BDB5AB51D37_2*, ::Class_0_16E4307DCC419505_703*))((::PBYTE)hIl2Cpp + CLASS_1_23DD2E62D4811F21_METHOD_1_40384FCA3A7AD332_OFFSET))(a1, a2);
	}
};

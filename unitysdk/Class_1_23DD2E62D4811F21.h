#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_892;
class Class_1_D17272E82AE804C2_925;
namespace RPG::Client { class IRogueMiracleInGame; }

#define CLASS_1_23DD2E62D4811F21_METHOD_1_40384FCA3A7AD332_OFFSET UNITYSDK_OFFSET(0x17A0D870)
#define CLASS_1_23DD2E62D4811F21_METHOD_1_6E5ED9FE0B3EA523_OFFSET UNITYSDK_OFFSET(0x17A2ED80)
#define CLASS_1_23DD2E62D4811F21__CTOR_OFFSET UNITYSDK_OFFSET(0x17A2EF10)

inline static constexpr unsigned int Class_1_23DD2E62D4811F21_TypeDefinitionIndex = 64282;

class Class_1_23DD2E62D4811F21 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23DD2E62D4811F21__CTOR_OFFSET))(this);
	}

	static ::RPG::Client::IRogueMiracleInGame* Method_1_6E5ED9FE0B3EA523(::Class_1_D17272E82AE804C2_925* a1)
	{
		return ((::RPG::Client::IRogueMiracleInGame*(*)(::Class_1_D17272E82AE804C2_925*))((::PBYTE)hIl2Cpp + CLASS_1_23DD2E62D4811F21_METHOD_1_6E5ED9FE0B3EA523_OFFSET))(a1);
	}

	static ::RPG::Client::IRogueMiracleInGame* Method_1_40384FCA3A7AD332(::Class_1_D17272E82AE804C2_925* a1, ::Class_0_16E4307DCC419505_892* a2)
	{
		return ((::RPG::Client::IRogueMiracleInGame*(*)(::Class_1_D17272E82AE804C2_925*, ::Class_0_16E4307DCC419505_892*))((::PBYTE)hIl2Cpp + CLASS_1_23DD2E62D4811F21_METHOD_1_40384FCA3A7AD332_OFFSET))(a1, a2);
	}
};

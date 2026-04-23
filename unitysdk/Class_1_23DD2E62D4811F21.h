#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_803;
class Class_1_2CC11CDCB897D481_2;
namespace RPG::Client { class IRogueMiracleInGame; }

#define CLASS_1_23DD2E62D4811F21_METHOD_1_40384FCA3A7AD332_OFFSET UNITYSDK_OFFSET(0x12385410)
#define CLASS_1_23DD2E62D4811F21_METHOD_1_6E5ED9FE0B3EA523_OFFSET UNITYSDK_OFFSET(0x12385280)
#define CLASS_1_23DD2E62D4811F21__CTOR_OFFSET UNITYSDK_OFFSET(0x123856A0)

inline static constexpr unsigned int Class_1_23DD2E62D4811F21_TypeDefinitionIndex = 61982;

class Class_1_23DD2E62D4811F21 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23DD2E62D4811F21__CTOR_OFFSET))(this);
	}

	static ::RPG::Client::IRogueMiracleInGame* Method_1_6E5ED9FE0B3EA523(::Class_1_2CC11CDCB897D481_2* a1)
	{
		return ((::RPG::Client::IRogueMiracleInGame*(*)(::Class_1_2CC11CDCB897D481_2*))((::PBYTE)hIl2Cpp + CLASS_1_23DD2E62D4811F21_METHOD_1_6E5ED9FE0B3EA523_OFFSET))(a1);
	}

	static ::RPG::Client::IRogueMiracleInGame* Method_1_40384FCA3A7AD332(::Class_1_2CC11CDCB897D481_2* a1, ::Class_0_16E4307DCC419505_803* a2)
	{
		return ((::RPG::Client::IRogueMiracleInGame*(*)(::Class_1_2CC11CDCB897D481_2*, ::Class_0_16E4307DCC419505_803*))((::PBYTE)hIl2Cpp + CLASS_1_23DD2E62D4811F21_METHOD_1_40384FCA3A7AD332_OFFSET))(a1, a2);
	}
};

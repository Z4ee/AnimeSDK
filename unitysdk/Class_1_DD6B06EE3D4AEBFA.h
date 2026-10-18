#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7D1331C413E60035.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1017;
namespace RPG::Client { class RechargeShopModule; }

#define CLASS_1_DD6B06EE3D4AEBFA_METHOD_1_5717D6CFE4BA9C96_OFFSET UNITYSDK_OFFSET(0xC18EFC0)
#define CLASS_1_DD6B06EE3D4AEBFA__CTOR_OFFSET UNITYSDK_OFFSET(0xC18EF70)

inline static constexpr unsigned int Class_1_DD6B06EE3D4AEBFA_TypeDefinitionIndex = 66790;

class Class_1_DD6B06EE3D4AEBFA : public ::System::Object
{
public:
	::RPG::Client::RechargeShopModule* OJMMJIALPON; // 0x10

	::System::Void _ctor(::RPG::Client::RechargeShopModule* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RechargeShopModule*))((::PBYTE)hIl2Cpp + CLASS_1_DD6B06EE3D4AEBFA__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1017* Method_1_5717D6CFE4BA9C96(::Enum_3_7D1331C413E60035 a1)
	{
		return ((::Class_0_16E4307DCC419505_1017*(*)(::PVOID, ::Enum_3_7D1331C413E60035))((::PBYTE)hIl2Cpp + CLASS_1_DD6B06EE3D4AEBFA_METHOD_1_5717D6CFE4BA9C96_OFFSET))(this, a1);
	}
};

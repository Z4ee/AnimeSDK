#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_54D5F60E7D5A40F8;
namespace RPG::Client { class IRogueTournPersonaModifier; }

#define CLASS_1_AACAF35F6C229DC0_METHOD_1_BFFAF29A1364E8AA_OFFSET UNITYSDK_OFFSET(0x99EC8C0)

inline static constexpr unsigned int Class_1_AACAF35F6C229DC0_TypeDefinitionIndex = 62396;

class Class_1_AACAF35F6C229DC0 : public ::System::Object
{
public:
	static ::RPG::Client::IRogueTournPersonaModifier* Method_1_BFFAF29A1364E8AA(::Class_1_54D5F60E7D5A40F8* a1)
	{
		return ((::RPG::Client::IRogueTournPersonaModifier*(*)(::Class_1_54D5F60E7D5A40F8*))((::PBYTE)hIl2Cpp + CLASS_1_AACAF35F6C229DC0_METHOD_1_BFFAF29A1364E8AA_OFFSET))(a1);
	}
};

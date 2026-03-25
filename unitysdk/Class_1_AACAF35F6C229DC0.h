#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_49AFAF7E1EDC93F8;
namespace RPG::Client { class IRogueTournPersonaModifier; }

#define CLASS_1_AACAF35F6C229DC0_METHOD_1_BFFAF29A1364E8AA_OFFSET UNITYSDK_OFFSET(0x108F1D30)

inline static constexpr unsigned int Class_1_AACAF35F6C229DC0_TypeDefinitionIndex = 55208;

class Class_1_AACAF35F6C229DC0 : public ::System::Object
{
public:
	static ::RPG::Client::IRogueTournPersonaModifier* Method_1_BFFAF29A1364E8AA(::Class_1_49AFAF7E1EDC93F8* a1)
	{
		return ((::RPG::Client::IRogueTournPersonaModifier*(*)(::Class_1_49AFAF7E1EDC93F8*))((::PBYTE)hIl2Cpp + CLASS_1_AACAF35F6C229DC0_METHOD_1_BFFAF29A1364E8AA_OFFSET))(a1);
	}
};

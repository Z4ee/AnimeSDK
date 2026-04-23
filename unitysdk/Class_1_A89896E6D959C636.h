#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournGame; }

#define CLASS_1_A89896E6D959C636_METHOD_1_E0905A976CD9F945_OFFSET UNITYSDK_OFFSET(0x1241D450)

inline static constexpr unsigned int Class_1_A89896E6D959C636_TypeDefinitionIndex = 62344;

class Class_1_A89896E6D959C636 : public ::System::Object
{
public:
	static ::RPG::Client::IRogueTournGame* Method_1_E0905A976CD9F945(::System::UInt32 a1)
	{
		return ((::RPG::Client::IRogueTournGame*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A89896E6D959C636_METHOD_1_E0905A976CD9F945_OFFSET))(a1);
	}
};

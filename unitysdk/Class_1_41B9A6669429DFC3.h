#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGachaPoolData; }

#define CLASS_1_41B9A6669429DFC3_METHOD_1_012C3B084700F5E5_OFFSET UNITYSDK_OFFSET(0x146A4780)

inline static constexpr unsigned int Class_1_41B9A6669429DFC3_TypeDefinitionIndex = 61397;

class Class_1_41B9A6669429DFC3 : public ::System::Object
{
public:
	static ::RPG::Client::BaseGachaPoolData* Method_1_012C3B084700F5E5(::System::UInt32 a1)
	{
		return ((::RPG::Client::BaseGachaPoolData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_41B9A6669429DFC3_METHOD_1_012C3B084700F5E5_OFFSET))(a1);
	}
};

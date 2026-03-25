#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGachaGroupData; }

#define CLASS_1_C84BD2C8C84CD2E9_METHOD_1_414C19FBBE749547_OFFSET UNITYSDK_OFFSET(0x8D09D80)

inline static constexpr unsigned int Class_1_C84BD2C8C84CD2E9_TypeDefinitionIndex = 52224;

class Class_1_C84BD2C8C84CD2E9 : public ::System::Object
{
public:
	static ::RPG::Client::BaseGachaGroupData* Method_1_414C19FBBE749547(::System::UInt32 a1)
	{
		return ((::RPG::Client::BaseGachaGroupData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C84BD2C8C84CD2E9_METHOD_1_414C19FBBE749547_OFFSET))(a1);
	}
};

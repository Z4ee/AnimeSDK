#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGachaGroupData; }

#define CLASS_1_2F7E9C59A1B5F0A7_METHOD_1_16FA8DAC8048C9BE_OFFSET UNITYSDK_OFFSET(0xBCE5210)

inline static constexpr unsigned int Class_1_2F7E9C59A1B5F0A7_TypeDefinitionIndex = 64380;

class Class_1_2F7E9C59A1B5F0A7 : public ::System::Object
{
public:
	static ::RPG::Client::BaseGachaGroupData* Method_1_16FA8DAC8048C9BE(::System::UInt32 a1)
	{
		return ((::RPG::Client::BaseGachaGroupData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2F7E9C59A1B5F0A7_METHOD_1_16FA8DAC8048C9BE_OFFSET))(a1);
	}
};

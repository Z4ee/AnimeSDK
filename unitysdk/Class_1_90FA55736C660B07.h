#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GachaItemData; }

#define CLASS_1_90FA55736C660B07_METHOD_1_859DD6D7E5793CB8_OFFSET UNITYSDK_OFFSET(0x8FDA8D0)

inline static constexpr unsigned int Class_1_90FA55736C660B07_TypeDefinitionIndex = 52209;

class Class_1_90FA55736C660B07 : public ::System::Object
{
public:
	static ::RPG::Client::GachaItemData* Method_1_859DD6D7E5793CB8(::System::UInt32 a1)
	{
		return ((::RPG::Client::GachaItemData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_90FA55736C660B07_METHOD_1_859DD6D7E5793CB8_OFFSET))(a1);
	}
};

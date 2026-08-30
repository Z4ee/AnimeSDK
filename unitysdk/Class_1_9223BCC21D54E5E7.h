#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MultiLightEffectMatBlockType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_9223BCC21D54E5E7_METHOD_1_7517F02A9C01602A_OFFSET UNITYSDK_OFFSET(0x163426F0)

inline static constexpr unsigned int Class_1_9223BCC21D54E5E7_TypeDefinitionIndex = 70652;

class Class_1_9223BCC21D54E5E7 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_7517F02A9C01602A(::RPG::Client::MultiLightEffectMatBlockType a1, ::RPG::Client::MultiLightEffectMatBlockType a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::MultiLightEffectMatBlockType, ::RPG::Client::MultiLightEffectMatBlockType))((::PBYTE)hIl2Cpp + CLASS_1_9223BCC21D54E5E7_METHOD_1_7517F02A9C01602A_OFFSET))(a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActionItemType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6D9BD8CC3D4D1B76_METHOD_1_A7F826E2281770F2_OFFSET UNITYSDK_OFFSET(0x1710BAE0)

inline static constexpr unsigned int Class_1_6D9BD8CC3D4D1B76_TypeDefinitionIndex = 71183;

class Class_1_6D9BD8CC3D4D1B76 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_A7F826E2281770F2(::RPG::Client::ActionItemType a1, ::RPG::Client::ActionItemType a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::ActionItemType, ::RPG::Client::ActionItemType))((::PBYTE)hIl2Cpp + CLASS_1_6D9BD8CC3D4D1B76_METHOD_1_A7F826E2281770F2_OFFSET))(a1, a2);
	}
};

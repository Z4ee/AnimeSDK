#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MaterialProppertySetWay.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_4A079651EE691832_METHOD_1_9DCD107E332AF972_OFFSET UNITYSDK_OFFSET(0x198FB5C0)

inline static constexpr unsigned int Class_1_4A079651EE691832_TypeDefinitionIndex = 69778;

class Class_1_4A079651EE691832 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_9DCD107E332AF972(::RPG::Client::MaterialProppertySetWay a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::MaterialProppertySetWay))((::PBYTE)hIl2Cpp + CLASS_1_4A079651EE691832_METHOD_1_9DCD107E332AF972_OFFSET))(a1);
	}
};

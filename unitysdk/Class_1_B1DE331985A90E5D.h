#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/SelectorType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_675;
class Class_1_35B024CC96B837C1;

#define CLASS_1_B1DE331985A90E5D_METHOD_1_8152AFD9DDE0855B_OFFSET UNITYSDK_OFFSET(0x11756D30)

inline static constexpr unsigned int Class_1_B1DE331985A90E5D_TypeDefinitionIndex = 61197;

class Class_1_B1DE331985A90E5D : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_675* Method_1_8152AFD9DDE0855B(::RPG::Client::RelicSmartSuit::SelectorType a1, ::Class_1_35B024CC96B837C1* a2)
	{
		return ((::Class_0_16E4307DCC419505_675*(*)(::RPG::Client::RelicSmartSuit::SelectorType, ::Class_1_35B024CC96B837C1*))((::PBYTE)hIl2Cpp + CLASS_1_B1DE331985A90E5D_METHOD_1_8152AFD9DDE0855B_OFFSET))(a1, a2);
	}
};

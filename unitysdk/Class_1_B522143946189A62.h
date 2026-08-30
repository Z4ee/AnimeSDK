#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenEffectSource.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1258;
class Class_1_69DB8A72C044FA28;

#define CLASS_1_B522143946189A62_METHOD_1_DB287CA98F121BAE_OFFSET UNITYSDK_OFFSET(0x1351B270)

inline static constexpr unsigned int Class_1_B522143946189A62_TypeDefinitionIndex = 75197;

class Class_1_B522143946189A62 : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_1258* Method_1_DB287CA98F121BAE(::Class_1_69DB8A72C044FA28* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectSource a2)
	{
		return ((::Class_0_16E4307DCC419505_1258*(*)(::Class_1_69DB8A72C044FA28*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectSource))((::PBYTE)hIl2Cpp + CLASS_1_B522143946189A62_METHOD_1_DB287CA98F121BAE_OFFSET))(a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/TaskState.h"
#include "unitysdk/System/Object.h"

class Class_1_0597192E98B9E538;
class Class_1_8A3C2FE068793E61;
namespace RPG::GameCore { class TaskConfig; }

#define CLASS_1_7FA59C41A1DA54ED_METHOD_1_5161BBD4BAECC318_OFFSET UNITYSDK_OFFSET(0x1670FED0)
#define CLASS_1_7FA59C41A1DA54ED_METHOD_1_9B7093943FBC8DC6_OFFSET UNITYSDK_OFFSET(0x167103A0)

inline static constexpr unsigned int Class_1_7FA59C41A1DA54ED_TypeDefinitionIndex = 28784;

class Class_1_7FA59C41A1DA54ED : public ::System::Object
{
public:
	static ::Class_1_0597192E98B9E538* Method_1_5161BBD4BAECC318(::Class_1_8A3C2FE068793E61* a1, ::RPG::GameCore::TaskConfig* a2)
	{
		return ((::Class_1_0597192E98B9E538*(*)(::Class_1_8A3C2FE068793E61*, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + CLASS_1_7FA59C41A1DA54ED_METHOD_1_5161BBD4BAECC318_OFFSET))(a1, a2);
	}

	static ::RPG::Client::LittleGameShare::TaskState Method_1_9B7093943FBC8DC6(::Class_1_0597192E98B9E538* a1)
	{
		return ((::RPG::Client::LittleGameShare::TaskState(*)(::Class_1_0597192E98B9E538*))((::PBYTE)hIl2Cpp + CLASS_1_7FA59C41A1DA54ED_METHOD_1_9B7093943FBC8DC6_OFFSET))(a1);
	}
};

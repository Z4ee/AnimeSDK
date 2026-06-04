#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/TaskState.h"
#include "unitysdk/System/Object.h"

class Class_1_0597192E98B9E538;
class Class_1_D93F8AE271D8A728;
namespace RPG::GameCore { class TaskConfig; }

#define CLASS_1_8E4DDCCBD6D6510D_METHOD_1_22C2998DC94269FE_OFFSET UNITYSDK_OFFSET(0x18A029C0)
#define CLASS_1_8E4DDCCBD6D6510D_METHOD_1_9B7093943FBC8DC6_OFFSET UNITYSDK_OFFSET(0x18A02A70)

inline static constexpr unsigned int Class_1_8E4DDCCBD6D6510D_TypeDefinitionIndex = 34792;

class Class_1_8E4DDCCBD6D6510D : public ::System::Object
{
public:
	static ::Class_1_0597192E98B9E538* Method_1_22C2998DC94269FE(::Class_1_D93F8AE271D8A728* a1, ::RPG::GameCore::TaskConfig* a2)
	{
		return ((::Class_1_0597192E98B9E538*(*)(::Class_1_D93F8AE271D8A728*, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + CLASS_1_8E4DDCCBD6D6510D_METHOD_1_22C2998DC94269FE_OFFSET))(a1, a2);
	}

	static ::RPG::Client::LittleGameShare::TaskState Method_1_9B7093943FBC8DC6(::Class_1_0597192E98B9E538* a1)
	{
		return ((::RPG::Client::LittleGameShare::TaskState(*)(::Class_1_0597192E98B9E538*))((::PBYTE)hIl2Cpp + CLASS_1_8E4DDCCBD6D6510D_METHOD_1_9B7093943FBC8DC6_OFFSET))(a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/TaskState.h"
#include "unitysdk/System/Object.h"

class Class_1_0597192E98B9E538;
class Class_1_D93F8AE271D8A728;
namespace RPG::GameCore { class TaskConfig; }

#define CLASS_1_8E4DDCCBD6D6510D_METHOD_1_22C2998DC94269FE_OFFSET UNITYSDK_OFFSET(0x1974C780)
#define CLASS_1_8E4DDCCBD6D6510D_METHOD_1_E5BC1FDC2AC39331_OFFSET UNITYSDK_OFFSET(0x1974C830)

inline static constexpr unsigned int Class_1_8E4DDCCBD6D6510D_TypeDefinitionIndex = 36323;

class Class_1_8E4DDCCBD6D6510D : public ::System::Object
{
public:
	static ::Class_1_0597192E98B9E538* Method_1_22C2998DC94269FE(::Class_1_D93F8AE271D8A728* a1, ::RPG::GameCore::TaskConfig* a2)
	{
		return ((::Class_1_0597192E98B9E538*(*)(::Class_1_D93F8AE271D8A728*, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + CLASS_1_8E4DDCCBD6D6510D_METHOD_1_22C2998DC94269FE_OFFSET))(a1, a2);
	}

	static ::RPG::Client::LittleGameShare::TaskState Method_1_E5BC1FDC2AC39331(::Class_1_0597192E98B9E538* a1)
	{
		return ((::RPG::Client::LittleGameShare::TaskState(*)(::Class_1_0597192E98B9E538*))((::PBYTE)hIl2Cpp + CLASS_1_8E4DDCCBD6D6510D_METHOD_1_E5BC1FDC2AC39331_OFFSET))(a1);
	}
};

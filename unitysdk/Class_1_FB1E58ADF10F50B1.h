#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DA56B8CEAE4146EE;
namespace RPG::GameCore { class GameWorld; }

#define CLASS_1_FB1E58ADF10F50B1_METHOD_1_D3ABE8190772EDFE_OFFSET UNITYSDK_OFFSET(0x9E52A10)
#define CLASS_1_FB1E58ADF10F50B1_METHOD_1_FFE31C94268A777F_OFFSET UNITYSDK_OFFSET(0x9E52980)

inline static constexpr unsigned int Class_1_FB1E58ADF10F50B1_TypeDefinitionIndex = 49494;

class Class_1_FB1E58ADF10F50B1 : public ::System::Object
{
public:
	static ::RPG::GameCore::GameWorld* Method_1_FFE31C94268A777F(::RPG::GameCore::GameWorld* a1, ::Class_1_DA56B8CEAE4146EE* a2)
	{
		return ((::RPG::GameCore::GameWorld*(*)(::RPG::GameCore::GameWorld*, ::Class_1_DA56B8CEAE4146EE*))((::PBYTE)hIl2Cpp + CLASS_1_FB1E58ADF10F50B1_METHOD_1_FFE31C94268A777F_OFFSET))(a1, a2);
	}

	static ::Class_1_DA56B8CEAE4146EE* Method_1_D3ABE8190772EDFE(::RPG::GameCore::GameWorld* a1)
	{
		return ((::Class_1_DA56B8CEAE4146EE*(*)(::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_FB1E58ADF10F50B1_METHOD_1_D3ABE8190772EDFE_OFFSET))(a1);
	}
};

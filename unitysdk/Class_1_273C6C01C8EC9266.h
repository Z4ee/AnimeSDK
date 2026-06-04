#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A6A0F51F0E51089E;
namespace RPG::GameCore { class GameWorld; }

#define CLASS_1_273C6C01C8EC9266_METHOD_1_1911A9D3E939A8C8_OFFSET UNITYSDK_OFFSET(0x13A28760)
#define CLASS_1_273C6C01C8EC9266_METHOD_1_B5F16BE71F5EC781_OFFSET UNITYSDK_OFFSET(0x13A286D0)

inline static constexpr unsigned int Class_1_273C6C01C8EC9266_TypeDefinitionIndex = 50161;

class Class_1_273C6C01C8EC9266 : public ::System::Object
{
public:
	static ::RPG::GameCore::GameWorld* Method_1_B5F16BE71F5EC781(::RPG::GameCore::GameWorld* a1, ::Class_1_A6A0F51F0E51089E* a2)
	{
		return ((::RPG::GameCore::GameWorld*(*)(::RPG::GameCore::GameWorld*, ::Class_1_A6A0F51F0E51089E*))((::PBYTE)hIl2Cpp + CLASS_1_273C6C01C8EC9266_METHOD_1_B5F16BE71F5EC781_OFFSET))(a1, a2);
	}

	static ::Class_1_A6A0F51F0E51089E* Method_1_1911A9D3E939A8C8(::RPG::GameCore::GameWorld* a1)
	{
		return ((::Class_1_A6A0F51F0E51089E*(*)(::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_273C6C01C8EC9266_METHOD_1_1911A9D3E939A8C8_OFFSET))(a1);
	}
};

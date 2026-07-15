#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LuaSystem; }
namespace RPG::Client { class LuaUIController; }

#define CLASS_1_E097F67D8ECB3A41_METHOD_1_8F1B05F5A6D9357F_OFFSET UNITYSDK_OFFSET(0x17874C80)
#define CLASS_1_E097F67D8ECB3A41_METHOD_1_E2A5178252AA94DB_OFFSET UNITYSDK_OFFSET(0x17874970)

inline static constexpr unsigned int Class_1_E097F67D8ECB3A41_TypeDefinitionIndex = 76081;

class Class_1_E097F67D8ECB3A41 : public ::System::Object
{
public:
	static ::System::Void Method_1_E2A5178252AA94DB(::RPG::Client::LuaUIController* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::RPG::Client::LuaUIController*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E097F67D8ECB3A41_METHOD_1_E2A5178252AA94DB_OFFSET))(a1, a2);
	}

	static ::RPG::Client::LuaSystem* Method_1_8F1B05F5A6D9357F()
	{
		return ((::RPG::Client::LuaSystem*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E097F67D8ECB3A41_METHOD_1_8F1B05F5A6D9357F_OFFSET))();
	}
};

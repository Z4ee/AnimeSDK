#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LuaSystem; }
namespace RPG::Client { class LuaUIController; }

#define CLASS_1_0D305156B5EB88CC_METHOD_1_33A4EC5FDEED59D2_OFFSET UNITYSDK_OFFSET(0x1AF1B310)
#define CLASS_1_0D305156B5EB88CC_METHOD_1_8F1B05F5A6D9357F_OFFSET UNITYSDK_OFFSET(0x1AF1B670)

inline static constexpr unsigned int Class_1_0D305156B5EB88CC_TypeDefinitionIndex = 79714;

class Class_1_0D305156B5EB88CC : public ::System::Object
{
public:
	static ::System::Void Method_1_33A4EC5FDEED59D2(::RPG::Client::LuaUIController* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::RPG::Client::LuaUIController*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0D305156B5EB88CC_METHOD_1_33A4EC5FDEED59D2_OFFSET))(a1, a2);
	}

	static ::RPG::Client::LuaSystem* Method_1_8F1B05F5A6D9357F()
	{
		return ((::RPG::Client::LuaSystem*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0D305156B5EB88CC_METHOD_1_8F1B05F5A6D9357F_OFFSET))();
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LuaSystem; }
namespace RPG::Client { class LuaUIController; }

#define CLASS_1_9823B90F7C84FEB8_METHOD_1_8F1B05F5A6D9357F_OFFSET UNITYSDK_OFFSET(0xB5E1070)
#define CLASS_1_9823B90F7C84FEB8_METHOD_1_DF5509A542D1BC14_OFFSET UNITYSDK_OFFSET(0xB5E0AE0)

inline static constexpr unsigned int Class_1_9823B90F7C84FEB8_TypeDefinitionIndex = 81038;

class Class_1_9823B90F7C84FEB8 : public ::System::Object
{
public:
	static ::System::Void Method_1_DF5509A542D1BC14(::RPG::Client::LuaUIController* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::RPG::Client::LuaUIController*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9823B90F7C84FEB8_METHOD_1_DF5509A542D1BC14_OFFSET))(a1, a2);
	}

	static ::RPG::Client::LuaSystem* Method_1_8F1B05F5A6D9357F()
	{
		return ((::RPG::Client::LuaSystem*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9823B90F7C84FEB8_METHOD_1_8F1B05F5A6D9357F_OFFSET))();
	}
};

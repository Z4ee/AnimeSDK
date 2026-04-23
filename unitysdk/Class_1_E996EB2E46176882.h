#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TaskConfig; }

#define CLASS_1_E996EB2E46176882_METHOD_1_62541B8F5D78BAEF_OFFSET UNITYSDK_OFFSET(0xA7B8E60)
#define CLASS_1_E996EB2E46176882_METHOD_1_E721C465FB5BE055_OFFSET UNITYSDK_OFFSET(0xA7B8F00)

inline static constexpr unsigned int Class_1_E996EB2E46176882_TypeDefinitionIndex = 52960;

class Class_1_E996EB2E46176882 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_62541B8F5D78BAEF(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_E996EB2E46176882_METHOD_1_62541B8F5D78BAEF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_E721C465FB5BE055(::RPG::GameCore::TaskConfig* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + CLASS_1_E996EB2E46176882_METHOD_1_E721C465FB5BE055_OFFSET))(a1);
	}
};

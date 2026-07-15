#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LoadingStrategyPriority.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_426;

#define CLASS_1_E96962A8A90B759E_CLASS_1_486E6CFC7A35CD34__CTOR_OFFSET UNITYSDK_OFFSET(0x17315890)

inline static constexpr unsigned int Class_1_E96962A8A90B759E_Class_1_486E6CFC7A35CD34_TypeDefinitionIndex = 57745;

class Class_1_E96962A8A90B759E_Class_1_486E6CFC7A35CD34 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_426* Field_1_0; // 0x10
	::RPG::Client::LoadingStrategyPriority Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E96962A8A90B759E_CLASS_1_486E6CFC7A35CD34__CTOR_OFFSET))(this);
	}
};

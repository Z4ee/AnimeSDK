#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LittleGameEntityConfig; }

#define CLASS_1_187EF9A26BFF97DE__CTOR_OFFSET UNITYSDK_OFFSET(0x17D41F10)

inline static constexpr unsigned int Class_1_187EF9A26BFF97DE_TypeDefinitionIndex = 34339;

class Class_1_187EF9A26BFF97DE : public ::System::Object
{
public:
	::RPG::GameCore::LittleGameEntityConfig* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_187EF9A26BFF97DE__CTOR_OFFSET))(this);
	}
};

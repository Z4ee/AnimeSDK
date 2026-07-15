#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_616;

#define CLASS_2_570AC78C01FF8379_CLASS_1_D230CDD4634D4F20__CTOR_OFFSET UNITYSDK_OFFSET(0x14FFD110)

inline static constexpr unsigned int Class_2_570AC78C01FF8379_Class_1_D230CDD4634D4F20_TypeDefinitionIndex = 56930;

class Class_2_570AC78C01FF8379_Class_1_D230CDD4634D4F20 : public ::System::Object
{
public:
	::System::Object* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_616* Field_1_1; // 0x18
	::RPG::Client::ExeCode Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_570AC78C01FF8379_CLASS_1_D230CDD4634D4F20__CTOR_OFFSET))(this);
	}
};

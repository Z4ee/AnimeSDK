#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_5951D63B6E6C5C74__CTOR_OFFSET UNITYSDK_OFFSET(0x8C66880)

inline static constexpr unsigned int Class_1_5951D63B6E6C5C74_TypeDefinitionIndex = 44066;

class Class_1_5951D63B6E6C5C74 : public ::System::Object
{
public:
	::RPG::Client::TextID Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5951D63B6E6C5C74__CTOR_OFFSET))(this);
	}
};

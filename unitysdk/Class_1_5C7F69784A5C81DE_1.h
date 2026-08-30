#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_5C7F69784A5C81DE_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB7BA7B0)

inline static constexpr unsigned int Class_1_5C7F69784A5C81DE_1_TypeDefinitionIndex = 55787;

class Class_1_5C7F69784A5C81DE_1 : public ::System::Object
{
public:
	::System::Boolean NNDBCGMAEFP; // 0x10
	::RPG::GameCore::FixPoint FEGAGJHIKLO; // 0x18
	::RPG::GameCore::FixPoint FIJLEDEKBJP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C7F69784A5C81DE_1__CTOR_OFFSET))(this);
	}
};

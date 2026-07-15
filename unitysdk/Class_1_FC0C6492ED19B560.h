#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MonopolyMapConfig; }

#define CLASS_1_FC0C6492ED19B560__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE29350)

inline static constexpr unsigned int Class_1_FC0C6492ED19B560_TypeDefinitionIndex = 40379;

class Class_1_FC0C6492ED19B560 : public ::System::Object
{
public:
	::RPG::GameCore::MonopolyMapConfig* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC0C6492ED19B560__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MonopolyMapConfig; }

#define CLASS_1_FC0C6492ED19B560__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4065E0)

inline static constexpr unsigned int Class_1_FC0C6492ED19B560_TypeDefinitionIndex = 41258;

class Class_1_FC0C6492ED19B560 : public ::System::Object
{
public:
	::RPG::GameCore::MonopolyMapConfig* OKNNKBGFCCF; // 0x10
	::System::Single EMNHIJAIMBE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC0C6492ED19B560__CTOR_OFFSET))(this);
	}
};

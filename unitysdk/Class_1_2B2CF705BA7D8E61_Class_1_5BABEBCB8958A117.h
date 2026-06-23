#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigZipLine; }
namespace System { class Action; }

#define CLASS_1_2B2CF705BA7D8E61_CLASS_1_5BABEBCB8958A117_METHOD_1_FD78BEEF27199AB4_OFFSET UNITYSDK_OFFSET(0x14443D20)
#define CLASS_1_2B2CF705BA7D8E61_CLASS_1_5BABEBCB8958A117__CTOR_OFFSET UNITYSDK_OFFSET(0x14443D10)

inline static constexpr unsigned int Class_1_2B2CF705BA7D8E61_Class_1_5BABEBCB8958A117_TypeDefinitionIndex = 75797;

class Class_1_2B2CF705BA7D8E61_Class_1_5BABEBCB8958A117 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B2CF705BA7D8E61_CLASS_1_5BABEBCB8958A117__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FD78BEEF27199AB4(::MoleMole::Config::ConfigZipLine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigZipLine*))((::PBYTE)hIl2Cpp + CLASS_1_2B2CF705BA7D8E61_CLASS_1_5BABEBCB8958A117_METHOD_1_FD78BEEF27199AB4_OFFSET))(this, a1);
	}
};

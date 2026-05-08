#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIAnimationFunctionSet; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_892DF0A779034940__CTOR_OFFSET UNITYSDK_OFFSET(0xF2520B0)

inline static constexpr unsigned int Class_1_892DF0A779034940_TypeDefinitionIndex = 57286;

class Class_1_892DF0A779034940 : public ::System::Object
{
public:
	::MoleMole::Config::UISpecialNumGroup* Field_1_3; // 0x10
	::MoleMole::Config::ConfigUIAnimationFunctionSet* Field_1_2; // 0x18
	::System::String* Field_1_0; // 0x20
	::System::Action* Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_892DF0A779034940__CTOR_OFFSET))(this);
	}
};

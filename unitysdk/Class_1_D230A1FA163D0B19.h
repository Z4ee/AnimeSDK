#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntityList; }
namespace System { class String; }

#define CLASS_1_D230A1FA163D0B19__CTOR_OFFSET UNITYSDK_OFFSET(0x17BCB0F0)

inline static constexpr unsigned int Class_1_D230A1FA163D0B19_TypeDefinitionIndex = 55534;

class Class_1_D230A1FA163D0B19 : public ::System::Object
{
public:
	::System::String* OLOIFNNLKJP; // 0x10
	::RPG::GameCore::GameEntityList* GEGKCAOLMOH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D230A1FA163D0B19__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntityList; }
namespace System { class String; }

#define CLASS_1_D230A1FA163D0B19__CTOR_OFFSET UNITYSDK_OFFSET(0xB8AF120)

inline static constexpr unsigned int Class_1_D230A1FA163D0B19_TypeDefinitionIndex = 44304;

class Class_1_D230A1FA163D0B19 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::RPG::GameCore::GameEntityList* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D230A1FA163D0B19__CTOR_OFFSET))(this);
	}
};

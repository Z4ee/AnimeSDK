#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntityList; }
namespace System { class String; }

#define CLASS_1_D230A1FA163D0B19__CTOR_OFFSET UNITYSDK_OFFSET(0x13B43A20)

inline static constexpr unsigned int Class_1_D230A1FA163D0B19_TypeDefinitionIndex = 51688;

class Class_1_D230A1FA163D0B19 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntityList* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D230A1FA163D0B19__CTOR_OFFSET))(this);
	}
};

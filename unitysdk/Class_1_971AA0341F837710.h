#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_971AA0341F837710__CTOR_OFFSET UNITYSDK_OFFSET(0x179C7010)

inline static constexpr unsigned int Class_1_971AA0341F837710_TypeDefinitionIndex = 54425;

class Class_1_971AA0341F837710 : public ::System::Object
{
public:
	::System::String* CIDCEJCGOGB; // 0x10
	::RPG::GameCore::FixPoint FIDKNPMCIMM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_971AA0341F837710__CTOR_OFFSET))(this);
	}
};

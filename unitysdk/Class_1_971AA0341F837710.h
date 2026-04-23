#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_971AA0341F837710__CTOR_OFFSET UNITYSDK_OFFSET(0xD3A3D20)

inline static constexpr unsigned int Class_1_971AA0341F837710_TypeDefinitionIndex = 49992;

class Class_1_971AA0341F837710 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::GameCore::FixPoint Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_971AA0341F837710__CTOR_OFFSET))(this);
	}
};

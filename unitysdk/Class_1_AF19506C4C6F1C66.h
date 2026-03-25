#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_52A902145F5BE513.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BaseScrollGameConfig; }

#define CLASS_1_AF19506C4C6F1C66__CTOR_OFFSET UNITYSDK_OFFSET(0x168095A0)

inline static constexpr unsigned int Class_1_AF19506C4C6F1C66_TypeDefinitionIndex = 33417;

class Class_1_AF19506C4C6F1C66 : public ::System::Object
{
public:
	::Struct_2_52A902145F5BE513 Field_1_1; // 0x10
	::RPG::GameCore::BaseScrollGameConfig* Field_1_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF19506C4C6F1C66__CTOR_OFFSET))(this);
	}
};

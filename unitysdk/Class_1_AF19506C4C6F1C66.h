#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_52A902145F5BE513.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BaseScrollGameConfig; }

#define CLASS_1_AF19506C4C6F1C66__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3B1070)

inline static constexpr unsigned int Class_1_AF19506C4C6F1C66_TypeDefinitionIndex = 41744;

class Class_1_AF19506C4C6F1C66 : public ::System::Object
{
public:
	::Struct_2_52A902145F5BE513 NPAOBGDKLHB; // 0x10
	::RPG::GameCore::BaseScrollGameConfig* EABKOHGCHFP; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF19506C4C6F1C66__CTOR_OFFSET))(this);
	}
};

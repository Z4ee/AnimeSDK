#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BBFE20496CC14816.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimGravityWalkBoardConfig; }

#define CLASS_1_23E42EF4C4A79E47__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC74E0)

inline static constexpr unsigned int Class_1_23E42EF4C4A79E47_TypeDefinitionIndex = 40071;

class Class_1_23E42EF4C4A79E47 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimGravityWalkBoardConfig* Field_1_0; // 0x10
	::Struct_2_BBFE20496CC14816 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23E42EF4C4A79E47__CTOR_OFFSET))(this);
	}
};

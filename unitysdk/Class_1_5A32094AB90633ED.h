#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_C1F8B53A08FC91A4.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimDestructiblePropConfig; }

#define CLASS_1_5A32094AB90633ED__CTOR_OFFSET UNITYSDK_OFFSET(0x18C4D5F0)

inline static constexpr unsigned int Class_1_5A32094AB90633ED_TypeDefinitionIndex = 40041;

class Class_1_5A32094AB90633ED : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimDestructiblePropConfig* Field_1_0; // 0x10
	::Struct_2_C1F8B53A08FC91A4 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A32094AB90633ED__CTOR_OFFSET))(this);
	}
};

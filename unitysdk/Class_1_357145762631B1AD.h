#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_842EEDFBF72D5ED5.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimPropSpawnerConfig; }

#define CLASS_1_357145762631B1AD__CTOR_OFFSET UNITYSDK_OFFSET(0x17E6F480)

inline static constexpr unsigned int Class_1_357145762631B1AD_TypeDefinitionIndex = 39306;

class Class_1_357145762631B1AD : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimPropSpawnerConfig* Field_1_0; // 0x10
	::Struct_2_842EEDFBF72D5ED5 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_357145762631B1AD__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5C05B865B0E3235A.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimWaterReflectionConfig; }

#define CLASS_1_CC0FB73B7DDBE506__CTOR_OFFSET UNITYSDK_OFFSET(0x18BD0CA0)

inline static constexpr unsigned int Class_1_CC0FB73B7DDBE506_TypeDefinitionIndex = 40079;

class Class_1_CC0FB73B7DDBE506 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimWaterReflectionConfig* Field_1_0; // 0x10
	::Struct_2_5C05B865B0E3235A Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC0FB73B7DDBE506__CTOR_OFFSET))(this);
	}
};

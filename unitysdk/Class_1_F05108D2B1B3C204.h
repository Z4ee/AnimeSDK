#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_78AC041D65798850.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimDoorConfig; }

#define CLASS_1_F05108D2B1B3C204__CTOR_OFFSET UNITYSDK_OFFSET(0x1677C7B0)

inline static constexpr unsigned int Class_1_F05108D2B1B3C204_TypeDefinitionIndex = 33500;

class Class_1_F05108D2B1B3C204 : public ::System::Object
{
public:
	::Struct_2_78AC041D65798850 Field_1_1; // 0x10
	::RPG::GameCore::FiveDimDoorConfig* Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F05108D2B1B3C204__CTOR_OFFSET))(this);
	}
};

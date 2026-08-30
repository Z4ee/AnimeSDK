#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_78AC041D65798850.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimDoorConfig; }

#define CLASS_1_F05108D2B1B3C204__CTOR_OFFSET UNITYSDK_OFFSET(0x1C369ED0)

inline static constexpr unsigned int Class_1_F05108D2B1B3C204_TypeDefinitionIndex = 41834;

class Class_1_F05108D2B1B3C204 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimDoorConfig* EABKOHGCHFP; // 0x10
	::Struct_2_78AC041D65798850 BPAPBAFOMCH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F05108D2B1B3C204__CTOR_OFFSET))(this);
	}
};

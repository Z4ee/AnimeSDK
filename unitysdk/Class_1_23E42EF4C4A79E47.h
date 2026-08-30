#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BBFE20496CC14816.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimGravityWalkBoardConfig; }

#define CLASS_1_23E42EF4C4A79E47__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC97F50)

inline static constexpr unsigned int Class_1_23E42EF4C4A79E47_TypeDefinitionIndex = 41841;

class Class_1_23E42EF4C4A79E47 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimGravityWalkBoardConfig* EABKOHGCHFP; // 0x10
	::Struct_2_BBFE20496CC14816 BPAPBAFOMCH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23E42EF4C4A79E47__CTOR_OFFSET))(this);
	}
};

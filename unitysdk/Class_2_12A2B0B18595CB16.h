#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class MarbleLeadHand; }

#define CLASS_2_12A2B0B18595CB16_METHOD_2_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x1C924B60)
#define CLASS_2_12A2B0B18595CB16__CTOR_OFFSET UNITYSDK_OFFSET(0x1C924B50)

inline static constexpr unsigned int Class_2_12A2B0B18595CB16_TypeDefinitionIndex = 43129;

class Class_2_12A2B0B18595CB16 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleLeadHand* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleLeadHand* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleLeadHand*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_2_12A2B0B18595CB16__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12A2B0B18595CB16_METHOD_2_568AE7A1499723FD_OFFSET))(this);
	}
};

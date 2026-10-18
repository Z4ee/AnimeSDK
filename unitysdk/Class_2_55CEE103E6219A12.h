#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class MarbleConvertBuff; }

#define CLASS_2_55CEE103E6219A12_METHOD_2_F1BB718E73080948_OFFSET UNITYSDK_OFFSET(0x1CB783C0)
#define CLASS_2_55CEE103E6219A12__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB783B0)

inline static constexpr unsigned int Class_2_55CEE103E6219A12_TypeDefinitionIndex = 43097;

class Class_2_55CEE103E6219A12 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleConvertBuff* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleConvertBuff* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleConvertBuff*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_2_55CEE103E6219A12__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F1BB718E73080948()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55CEE103E6219A12_METHOD_2_F1BB718E73080948_OFFSET))(this);
	}
};

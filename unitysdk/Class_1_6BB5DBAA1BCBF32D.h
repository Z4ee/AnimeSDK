#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5F08A88160B0E2D6;
namespace RPG::GameCore { class FiveDimEntityVarConfig; }

#define CLASS_1_6BB5DBAA1BCBF32D_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BAA6BE0)
#define CLASS_1_6BB5DBAA1BCBF32D__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAA6C40)

inline static constexpr unsigned int Class_1_6BB5DBAA1BCBF32D_TypeDefinitionIndex = 41698;

class Class_1_6BB5DBAA1BCBF32D : public ::System::Object
{
public:
	::Class_1_5F08A88160B0E2D6* CNLHCKELLBE; // 0x10
	::RPG::GameCore::FiveDimEntityVarConfig* EABKOHGCHFP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BB5DBAA1BCBF32D__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BB5DBAA1BCBF32D_CLEAR_OFFSET))(this);
	}
};

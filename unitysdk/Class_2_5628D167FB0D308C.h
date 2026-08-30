#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/EnvConfigType.h"
#include "unitysdk/System/Attribute.h"

#define CLASS_2_5628D167FB0D308C__CTOR_OFFSET UNITYSDK_OFFSET(0x19271040)

inline static constexpr unsigned int Class_2_5628D167FB0D308C_TypeDefinitionIndex = 49756;

class Class_2_5628D167FB0D308C : public ::System::Attribute
{
public:
	::EnviromentSystemV2Space::EnvConfigType GPNFGFGMGAD; // 0x10

	::System::Void _ctor(::EnviromentSystemV2Space::EnvConfigType a1)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::EnvConfigType))((::PBYTE)hIl2Cpp + CLASS_2_5628D167FB0D308C__CTOR_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/EnvConfigType.h"
#include "unitysdk/System/Attribute.h"

#define CLASS_2_5628D167FB0D308C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x139F77F0)

inline static constexpr unsigned int Class_2_5628D167FB0D308C_1_TypeDefinitionIndex = 46512;

class Class_2_5628D167FB0D308C_1 : public ::System::Attribute
{
public:
	::EnviromentSystemV2Space::EnvConfigType Field_2_0; // 0x10

	::System::Void _ctor(::EnviromentSystemV2Space::EnvConfigType a1)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::EnvConfigType))((::PBYTE)hIl2Cpp + CLASS_2_5628D167FB0D308C_1__CTOR_OFFSET))(this, a1);
	}
};

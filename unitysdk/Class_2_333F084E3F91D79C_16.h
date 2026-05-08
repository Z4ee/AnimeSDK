#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLASS_2_333F084E3F91D79C_16__CTOR_OFFSET UNITYSDK_OFFSET(0x156D1940)

inline static constexpr unsigned int Class_2_333F084E3F91D79C_16_TypeDefinitionIndex = 53340;

class Class_2_333F084E3F91D79C_16 : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_333F084E3F91D79C_16__CTOR_OFFSET))(this);
	}
};

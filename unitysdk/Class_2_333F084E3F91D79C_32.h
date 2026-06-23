#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLASS_2_333F084E3F91D79C_32__CTOR_OFFSET UNITYSDK_OFFSET(0x17B23F50)

inline static constexpr unsigned int Class_2_333F084E3F91D79C_32_TypeDefinitionIndex = 78707;

class Class_2_333F084E3F91D79C_32 : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_333F084E3F91D79C_32__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLASS_2_333F084E3F91D79C_23__CTOR_OFFSET UNITYSDK_OFFSET(0x1065FEE0)

inline static constexpr unsigned int Class_2_333F084E3F91D79C_23_TypeDefinitionIndex = 66343;

class Class_2_333F084E3F91D79C_23 : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_333F084E3F91D79C_23__CTOR_OFFSET))(this);
	}
};

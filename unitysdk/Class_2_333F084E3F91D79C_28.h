#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLASS_2_333F084E3F91D79C_28__CTOR_OFFSET UNITYSDK_OFFSET(0x10CC1C20)

inline static constexpr unsigned int Class_2_333F084E3F91D79C_28_TypeDefinitionIndex = 74307;

class Class_2_333F084E3F91D79C_28 : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_333F084E3F91D79C_28__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLASS_2_333F084E3F91D79C_42__CTOR_OFFSET UNITYSDK_OFFSET(0xFC46D90)

inline static constexpr unsigned int Class_2_333F084E3F91D79C_42_TypeDefinitionIndex = 80985;

class Class_2_333F084E3F91D79C_42 : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_333F084E3F91D79C_42__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CLASS_2_333F084E3F91D79C_25__CTOR_OFFSET UNITYSDK_OFFSET(0x17A2D720)

inline static constexpr unsigned int Class_2_333F084E3F91D79C_25_TypeDefinitionIndex = 67240;

class Class_2_333F084E3F91D79C_25 : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_333F084E3F91D79C_25__CTOR_OFFSET))(this);
	}
};

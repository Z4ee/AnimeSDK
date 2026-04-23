#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/VolumeParameter_1.h"

#define CLASS_3_12C48D55EDC20455__CTOR_OFFSET UNITYSDK_OFFSET(0x1255BC10)

inline static constexpr unsigned int Class_3_12C48D55EDC20455_TypeDefinitionIndex = 68105;

class Class_3_12C48D55EDC20455 : public ::RPG::Client::OpenWorld::VolumeParameter_1<::System::Boolean>
{
public:
	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_12C48D55EDC20455__CTOR_OFFSET))(this, a1);
	}
};

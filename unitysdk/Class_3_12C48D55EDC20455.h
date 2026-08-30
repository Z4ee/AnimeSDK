#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/VolumeParameter_1.h"

#define CLASS_3_12C48D55EDC20455__CTOR_OFFSET UNITYSDK_OFFSET(0x15AA39F0)

inline static constexpr unsigned int Class_3_12C48D55EDC20455_TypeDefinitionIndex = 73897;

class Class_3_12C48D55EDC20455 : public ::RPG::Client::OpenWorld::VolumeParameter_1<::System::Boolean>
{
public:
	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_12C48D55EDC20455__CTOR_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/VolumeParameter_1.h"

#define CLASS_3_8ED9A30694FB6032_INTERP_OFFSET UNITYSDK_OFFSET(0x13C45600)
#define CLASS_3_8ED9A30694FB6032__CTOR_OFFSET UNITYSDK_OFFSET(0x13C455B0)

inline static constexpr unsigned int Class_3_8ED9A30694FB6032_TypeDefinitionIndex = 69088;

class Class_3_8ED9A30694FB6032 : public ::RPG::Client::OpenWorld::VolumeParameter_1<::System::Single>
{
public:
	::System::Void _ctor(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8ED9A30694FB6032__CTOR_OFFSET))(this, a1);
	}

	::System::Void Interp(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8ED9A30694FB6032_INTERP_OFFSET))(this, a1, a2, a3);
	}
};

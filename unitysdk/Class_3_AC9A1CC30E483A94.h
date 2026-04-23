#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/VolumeParameter_1.h"

#define CLASS_3_AC9A1CC30E483A94__CTOR_OFFSET UNITYSDK_OFFSET(0x98F06E0)

inline static constexpr unsigned int Class_3_AC9A1CC30E483A94_TypeDefinitionIndex = 68116;

class Class_3_AC9A1CC30E483A94 : public ::RPG::Client::OpenWorld::VolumeParameter_1<::System::Single>
{
public:
	::System::Void _ctor(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AC9A1CC30E483A94__CTOR_OFFSET))(this, a1);
	}
};

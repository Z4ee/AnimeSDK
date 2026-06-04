#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingLightEnum.h"
#include "unitysdk/RPG/Client/OpenWorld/VolumeParameter_1.h"

#define CLASS_3_558211F589F040CC__CTOR_OFFSET UNITYSDK_OFFSET(0x112CD460)

inline static constexpr unsigned int Class_3_558211F589F040CC_TypeDefinitionIndex = 69106;

class Class_3_558211F589F040CC : public ::RPG::Client::OpenWorld::VolumeParameter_1<::RPG::Client::OpenWorld::StreamingLightEnum>
{
public:
	::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLightEnum a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + CLASS_3_558211F589F040CC__CTOR_OFFSET))(this, a1);
	}
};

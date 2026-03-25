#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/VolumeParameter_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_3_1924135DAA181F3E__CTOR_OFFSET UNITYSDK_OFFSET(0x8C258F0)

inline static constexpr unsigned int Class_3_1924135DAA181F3E_TypeDefinitionIndex = 60689;

class Class_3_1924135DAA181F3E : public ::RPG::Client::OpenWorld::VolumeParameter_1<::UnityEngine::Vector3>
{
public:
	::System::Void _ctor(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_1924135DAA181F3E__CTOR_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/VolumeParameter_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_3_07D330A92D2D5A23__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8D0CF0)

inline static constexpr unsigned int Class_3_07D330A92D2D5A23_TypeDefinitionIndex = 73919;

class Class_3_07D330A92D2D5A23 : public ::RPG::Client::OpenWorld::VolumeParameter_1<::UnityEngine::Vector2>
{
public:
	::System::Void _ctor(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_3_07D330A92D2D5A23__CTOR_OFFSET))(this, a1);
	}
};

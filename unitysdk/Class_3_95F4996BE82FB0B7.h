#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/VolumeParameter_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_3_95F4996BE82FB0B7_INTERP_OFFSET UNITYSDK_OFFSET(0x1599F6D0)
#define CLASS_3_95F4996BE82FB0B7__CTOR_OFFSET UNITYSDK_OFFSET(0x1599F660)

inline static constexpr unsigned int Class_3_95F4996BE82FB0B7_TypeDefinitionIndex = 73918;

class Class_3_95F4996BE82FB0B7 : public ::RPG::Client::OpenWorld::VolumeParameter_1<::UnityEngine::Vector2>
{
public:
	::System::Void _ctor(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_3_95F4996BE82FB0B7__CTOR_OFFSET))(this, a1);
	}

	::System::Void Interp(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_95F4996BE82FB0B7_INTERP_OFFSET))(this, a1, a2, a3);
	}
};

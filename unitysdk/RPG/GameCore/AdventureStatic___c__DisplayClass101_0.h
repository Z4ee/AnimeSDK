#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_ADVENTURESTATIC___C__DISPLAYCLASS101_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE4FDBD0)
#define RPG_GAMECORE_ADVENTURESTATIC___C__DISPLAYCLASS101_0__WALLDETECT_B__0_OFFSET UNITYSDK_OFFSET(0xE50D890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureStatic___c__DisplayClass101_0_TypeDefinitionIndex = 59166;

	class AdventureStatic___c__DisplayClass101_0 : public ::System::Object
	{
	public:
		::UnityEngine::RaycastHit hitInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESTATIC___C__DISPLAYCLASS101_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _WallDetect_b__0(::UnityEngine::Transform* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESTATIC___C__DISPLAYCLASS101_0__WALLDETECT_B__0_OFFSET))(this, a1);
		}
	};
}

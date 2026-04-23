#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_64A188CF5A335254;

#define RPG_CLIENT_MOTIONS_MONOMOTION_START_OFFSET UNITYSDK_OFFSET(0xAACE6C0)
#define RPG_CLIENT_MOTIONS_MONOMOTION_UPDATE_OFFSET UNITYSDK_OFFSET(0xAACE740)
#define RPG_CLIENT_MOTIONS_MONOMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0xAACE7D0)

namespace RPG::Client::Motions
{
	inline static constexpr unsigned int MonoMotion_TypeDefinitionIndex = 67669;

	class MonoMotion : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_64A188CF5A335254* Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOMOTION__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOMOTION_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOMOTION_UPDATE_OFFSET))(this);
		}
	};
}

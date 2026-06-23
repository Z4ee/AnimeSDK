#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MOLEMOLE_CONFIGUIICONMOUNT_ICONMOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18F4E9A0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIIconMount_IconMountConfig_TypeDefinitionIndex = 83214;

	class ConfigUIIconMount_IconMountConfig : public ::System::Object
	{
	public:
		::System::String* desc; // 0x10
		::System::String* iconPath; // 0x18
		::UnityEngine::Vector3 urbanMapNamePosition; // 0x20
		::UnityEngine::Vector3 newPosition; // 0x2C
		::UnityEngine::Vector3 missionGuidePosition; // 0x38
		::UnityEngine::Vector3 tempUnlockPosition; // 0x44
		::UnityEngine::Vector3 redpotPosition; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIICONMOUNT_ICONMOUNTCONFIG__CTOR_OFFSET))(this);
		}
	};
}

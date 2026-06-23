#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/StageEntryMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_STAGEENTRYMODEPREFAB__CTOR_OFFSET UNITYSDK_OFFSET(0x17D6C9E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int StageEntryModePrefab_TypeDefinitionIndex = 72574;

	class StageEntryModePrefab : public ::MoleMole::Config::StageEntryMode
	{
	public:
		::System::String* locationPointName; // 0x10
		::System::String* stagePrefabPath; // 0x18
		::System::String* envPrefabPath; // 0x20
		::UnityEngine::Vector2 MapStartAnchor; // 0x28
		::UnityEngine::Vector2 MapEndAnchor; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STAGEENTRYMODEPREFAB__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_TILEMESHCACHEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xCC4C5C0)

namespace RPG::Client
{
	inline static constexpr unsigned int CoastinfoWaveMonoPlugin_TileMeshCacheEntry_TypeDefinitionIndex = 70898;

	class CoastinfoWaveMonoPlugin_TileMeshCacheEntry : public ::System::Object
	{
	public:
		::System::Int32 resolution; // 0x10
		::System::Single skirtDepth; // 0x14
		::UnityEngine::Mesh* mesh; // 0x18
		::System::Boolean generatedByTileBaker; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_TILEMESHCACHEENTRY__CTOR_OFFSET))(this);
		}
	};
}

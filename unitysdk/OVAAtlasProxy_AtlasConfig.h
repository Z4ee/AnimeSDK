#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace UnityEngine { class Texture; }

#define OVAATLASPROXY_ATLASCONFIG_INITLOCALDATA_OFFSET UNITYSDK_OFFSET(0x1B7F00E0)
#define OVAATLASPROXY_ATLASCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7F0510)

inline static constexpr unsigned int OVAAtlasProxy_AtlasConfig_TypeDefinitionIndex = 26196;

class OVAAtlasProxy_AtlasConfig : public ::System::Object
{
public:
	::UnityEngine::Texture* m_Atlas; // 0x10
	::UnityEngine::Texture* m_AtlasEmission; // 0x18
	::UnityEngine::Vector2 m_SingleSpritePercent; // 0x20
	::UnityEngine::Vector2Int m_SpriteCount; // 0x28
	::UnityEngine::Vector2Int m_SpriteSize; // 0x30
	::UnityEngine::Vector2Int m_AtlasSize; // 0x38
	::System::Int32 frameCount; // 0x40
	::System::Single extraScale; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OVAATLASPROXY_ATLASCONFIG__CTOR_OFFSET))(this);
	}

	::System::Void InitLocalData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OVAATLASPROXY_ATLASCONFIG_INITLOCALDATA_OFFSET))(this);
	}
};

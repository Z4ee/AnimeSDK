#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class TerrainVolumeBehavior; }
namespace System { class String; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_TERRAINVOLUMEMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xCA16450)
#define RPG_CLIENT_TERRAINVOLUMEMONOPLUGIN_SETHEIGHTBLEND_OFFSET UNITYSDK_OFFSET(0xCA162A0)
#define RPG_CLIENT_TERRAINVOLUMEMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xCA164A0)
#define RPG_CLIENT_TERRAINVOLUMEMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xCA164B0)

namespace RPG::Client
{
	inline static constexpr unsigned int TerrainVolumeMonoPlugin_TypeDefinitionIndex = 66394;

	class TerrainVolumeMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::TerrainVolumeBehavior*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINVOLUMEMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void SetHeightBlend(::UnityEngine::Texture2D* a1, ::UnityEngine::Texture2D* a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Bounds a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::UnityEngine::Texture2D*, ::UnityEngine::Vector2, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINVOLUMEMONOPLUGIN_SETHEIGHTBLEND_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINVOLUMEMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINVOLUMEMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}

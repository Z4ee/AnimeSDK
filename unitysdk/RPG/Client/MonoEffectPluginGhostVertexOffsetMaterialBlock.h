#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ColorMaterialBlock.h"
#include "unitysdk/RPG/Client/FloatMaterialBlock.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCompoundMaterialBlock.h"
#include "unitysdk/RPG/Client/VectorMaterialBlock.h"

namespace UnityEngine { class Material; }

#define RPG_CLIENT_MONOEFFECTPLUGINGHOSTVERTEXOFFSETMATERIALBLOCK_SETMATERIALPROPETIES_OFFSET UNITYSDK_OFFSET(0xD7BE350)
#define RPG_CLIENT_MONOEFFECTPLUGINGHOSTVERTEXOFFSETMATERIALBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xD7BE5E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginGhostVertexOffsetMaterialBlock_TypeDefinitionIndex = 69898;

	class MonoEffectPluginGhostVertexOffsetMaterialBlock : public ::RPG::Client::MonoEffectPluginCompoundMaterialBlock
	{
	public:
		::RPG::Client::FloatMaterialBlock MainTexIntensity; // 0x18
		::RPG::Client::FloatMaterialBlock MainTexContrast; // 0x20
		::RPG::Client::ColorMaterialBlock FresnelColor; // 0x28
		::RPG::Client::VectorMaterialBlock Fresnel; // 0x3C
		::RPG::Client::VectorMaterialBlock VertexOffsetDir; // 0x50
		::RPG::Client::FloatMaterialBlock VertexOffsetInstensity; // 0x64
		::RPG::Client::FloatMaterialBlock VertexOffsetStart; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINGHOSTVERTEXOFFSETMATERIALBLOCK__CTOR_OFFSET))(this);
		}

		::System::Void SetMaterialPropeties(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINGHOSTVERTEXOFFSETMATERIALBLOCK_SETMATERIALPROPETIES_OFFSET))(this, a1);
		}
	};
}

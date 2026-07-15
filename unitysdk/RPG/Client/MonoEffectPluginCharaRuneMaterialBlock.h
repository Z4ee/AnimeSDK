#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ColorMaterialBlock.h"
#include "unitysdk/RPG/Client/FloatMaterialBlock.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCompoundMaterialBlock.h"
#include "unitysdk/RPG/Client/VectorMaterialBlock.h"

namespace UnityEngine { class Material; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARARUNEMATERIALBLOCK_SETMATERIALPROPETIES_OFFSET UNITYSDK_OFFSET(0x19120D60)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARARUNEMATERIALBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x191210D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaRuneMaterialBlock_TypeDefinitionIndex = 66790;

	class MonoEffectPluginCharaRuneMaterialBlock : public ::RPG::Client::MonoEffectPluginCompoundMaterialBlock
	{
	public:
		::RPG::Client::VectorMaterialBlock WavePos; // 0x18
		::RPG::Client::FloatMaterialBlock XStart; // 0x2C
		::RPG::Client::FloatMaterialBlock YStart; // 0x34
		::RPG::Client::FloatMaterialBlock XRange; // 0x3C
		::RPG::Client::FloatMaterialBlock YRange; // 0x44
		::RPG::Client::FloatMaterialBlock WaveWidth; // 0x4C
		::RPG::Client::FloatMaterialBlock WaveSpeed; // 0x54
		::RPG::Client::FloatMaterialBlock DisappearProgrs; // 0x5C
		::RPG::Client::ColorMaterialBlock RuneColor1; // 0x64
		::RPG::Client::ColorMaterialBlock RuneColor2; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARARUNEMATERIALBLOCK__CTOR_OFFSET))(this);
		}

		::System::Void SetMaterialPropeties(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARARUNEMATERIALBLOCK_SETMATERIALPROPETIES_OFFSET))(this, a1);
		}
	};
}

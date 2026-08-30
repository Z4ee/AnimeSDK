#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ColorMaterialBlock.h"
#include "unitysdk/RPG/Client/FloatMaterialBlock.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCompoundMaterialBlock.h"
#include "unitysdk/RPG/Client/VectorMaterialBlock.h"

namespace UnityEngine { class Material; }

#define RPG_CLIENT_MONOEFFECTPLUGINCUTSCENEHOLOGRAPHICMATERIALBLOCK_SETMATERIALPROPETIES_OFFSET UNITYSDK_OFFSET(0xD7AF840)
#define RPG_CLIENT_MONOEFFECTPLUGINCUTSCENEHOLOGRAPHICMATERIALBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xD7AFD20)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCutsceneHolographicMaterialBlock_TypeDefinitionIndex = 69897;

	class MonoEffectPluginCutsceneHolographicMaterialBlock : public ::RPG::Client::MonoEffectPluginCompoundMaterialBlock
	{
	public:
		::RPG::Client::FloatMaterialBlock FresnelOffsetScale; // 0x18
		::RPG::Client::FloatMaterialBlock HGJ_OffsetDuration; // 0x20
		::RPG::Client::FloatMaterialBlock HGJ_OffsetIntensity; // 0x28
		::RPG::Client::FloatMaterialBlock HGJ_OffsetMaskRange; // 0x30
		::RPG::Client::FloatMaterialBlock HGJ_OffsetSize; // 0x38
		::RPG::Client::FloatMaterialBlock HGJ_OffsetSpeed; // 0x40
		::RPG::Client::FloatMaterialBlock OutlineWidth; // 0x48
		::RPG::Client::ColorMaterialBlock ScanlineColor; // 0x50
		::RPG::Client::ColorMaterialBlock ThicknessColor; // 0x64
		::RPG::Client::FloatMaterialBlock ThicknessIntensity; // 0x78
		::RPG::Client::ColorMaterialBlock OutlineColor; // 0x80
		::RPG::Client::FloatMaterialBlock DstBlend; // 0x94
		::RPG::Client::VectorMaterialBlock PosMask; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCUTSCENEHOLOGRAPHICMATERIALBLOCK__CTOR_OFFSET))(this);
		}

		::System::Void SetMaterialPropeties(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCUTSCENEHOLOGRAPHICMATERIALBLOCK_SETMATERIALPROPETIES_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class CustomPostProcessData; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }

#define RPG_CUSTOMRP_MATERIALLIBRARY_CLEANUP_OFFSET UNITYSDK_OFFSET(0x16BF0E20)
#define RPG_CUSTOMRP_MATERIALLIBRARY_LOAD_OFFSET UNITYSDK_OFFSET(0x16BF0D00)
#define RPG_CUSTOMRP_MATERIALLIBRARY__CTOR_OFFSET UNITYSDK_OFFSET(0x16BF0BF0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int MaterialLibrary_TypeDefinitionIndex = 36229;

	class MaterialLibrary : public ::System::Object
	{
	public:
		::UnityEngine::Material* uber; // 0x10
		::UnityEngine::Material* lensFlare; // 0x18
		::UnityEngine::Material* motionBlur; // 0x20
		::UnityEngine::Material* PPLensGlitch; // 0x28
		::UnityEngine::Material* PPLensGlitch2; // 0x30
		::UnityEngine::Material* lut2DBaker; // 0x38
		::UnityEngine::Material* smaa; // 0x40
		::UnityEngine::Material* fxaa; // 0x48
		::UnityEngine::Material* PPPatern; // 0x50

		::System::Void _ctor(::RPG::CustomRP::CustomPostProcessData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CustomPostProcessData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MATERIALLIBRARY__CTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Material* Load(::UnityEngine::Shader* a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MATERIALLIBRARY_LOAD_OFFSET))(this, a1);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MATERIALLIBRARY_CLEANUP_OFFSET))(this);
		}
	};
}

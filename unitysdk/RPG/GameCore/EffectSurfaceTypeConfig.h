#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EffectSurfaceOverride; }

#define RPG_GAMECORE_EFFECTSURFACETYPECONFIG_METHOD_2_2DC8F9AE448FFDB2_OFFSET UNITYSDK_OFFSET(0x188975C0)
#define RPG_GAMECORE_EFFECTSURFACETYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18897690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EffectSurfaceTypeConfig_TypeDefinitionIndex = 15602;

	class EffectSurfaceTypeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::EffectSurfaceOverride*>* EffectOverrideList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTSURFACETYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2DC8F9AE448FFDB2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EffectSurfaceTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EffectSurfaceTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTSURFACETYPECONFIG_METHOD_2_2DC8F9AE448FFDB2_OFFSET))(a1, a2);
		}
	};
}

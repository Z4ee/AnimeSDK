#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SurfaceType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_EFFECTSURFACEOVERRIDE_METHOD_2_1B12FC3E381EF97D_OFFSET UNITYSDK_OFFSET(0x1DB247E0)
#define RPG_GAMECORE_EFFECTSURFACEOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB24910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EffectSurfaceOverride_TypeDefinitionIndex = 16312;

	class EffectSurfaceOverride : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::SurfaceType StandSurfaceType; // 0x10
		::System::String* EffectPathOverride; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTSURFACEOVERRIDE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1B12FC3E381EF97D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EffectSurfaceOverride*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EffectSurfaceOverride*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTSURFACEOVERRIDE_METHOD_2_1B12FC3E381EF97D_OFFSET))(a1, a2);
		}
	};
}

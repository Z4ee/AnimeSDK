#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMEFFECTPRELOADCONFIG_METHOD_2_561507A1926D0E79_OFFSET UNITYSDK_OFFSET(0x1D0E24C0)
#define RPG_GAMECORE_FIVEDIMEFFECTPRELOADCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0E25F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEffectPreloadConfig_TypeDefinitionIndex = 18613;

	class FiveDimEffectPreloadConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EffectPath; // 0x10
		::System::Int32 PreloadCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEFFECTPRELOADCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_561507A1926D0E79(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEffectPreloadConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEffectPreloadConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEFFECTPRELOADCONFIG_METHOD_2_561507A1926D0E79_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMBORDERPLATCONFIG_METHOD_3_1FBDB84418617AE1_OFFSET UNITYSDK_OFFSET(0x171EAFF0)
#define RPG_GAMECORE_FIVEDIMBORDERPLATCONFIG_METHOD_3_CFDD4A442F649452_OFFSET UNITYSDK_OFFSET(0x171EAF80)
#define RPG_GAMECORE_FIVEDIMBORDERPLATCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171EAFD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimBorderPlatConfig_TypeDefinitionIndex = 17059;

	class FiveDimBorderPlatConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsBorderPlat; // 0x10
		::System::String* EffectPath; // 0x18
		::System::Single EffectActiveDistance; // 0x20
		::System::Single EffectFullDistance; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBORDERPLATCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CFDD4A442F649452(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimBorderPlatConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimBorderPlatConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBORDERPLATCONFIG_METHOD_3_CFDD4A442F649452_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1FBDB84418617AE1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimBorderPlatConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimBorderPlatConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBORDERPLATCONFIG_METHOD_3_1FBDB84418617AE1_OFFSET))(a1, a2);
		}
	};
}

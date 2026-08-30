#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FateTextDynamicParamConfig; }

#define RPG_GAMECORE_FATETRAITCONFIG_METHOD_2_AF675373B13E5FC1_OFFSET UNITYSDK_OFFSET(0x1E0D1A70)
#define RPG_GAMECORE_FATETRAITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D1B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateTraitConfig_TypeDefinitionIndex = 16446;

	class FateTraitConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FateTextDynamicParamConfig* TextDynamicParamConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATETRAITCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_AF675373B13E5FC1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateTraitConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateTraitConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATETRAITCONFIG_METHOD_2_AF675373B13E5FC1_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoWidthType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SOMATOWIDTHRANGECONFIG_METHOD_2_FF09348F965C465E_OFFSET UNITYSDK_OFFSET(0x1BE53080)
#define RPG_GAMECORE_SOMATOWIDTHRANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE531E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SomatoWidthRangeConfig_TypeDefinitionIndex = 16430;

	class SomatoWidthRangeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::CharacterSomatoWidthType SomatoWidthType; // 0x10
		::System::Single Min; // 0x14
		::System::Single Max; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SOMATOWIDTHRANGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FF09348F965C465E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SomatoWidthRangeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SomatoWidthRangeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SOMATOWIDTHRANGECONFIG_METHOD_2_FF09348F965C465E_OFFSET))(a1, a2);
		}
	};
}

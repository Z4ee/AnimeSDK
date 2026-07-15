#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MONSTERWAVEPARAMCONFIG_METHOD_2_A3C73782D742FF7A_OFFSET UNITYSDK_OFFSET(0x1B1CF940)
#define RPG_GAMECORE_MONSTERWAVEPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1CFB30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterWaveParamConfig_TypeDefinitionIndex = 17439;

	class MonsterWaveParamConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::UInt32 HardLevelGroup; // 0x18
		::System::UInt32 Level; // 0x1C
		::System::UInt32 EliteGroup; // 0x20
		::System::UInt32 EliteGroup2; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERWAVEPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A3C73782D742FF7A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterWaveParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterWaveParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERWAVEPARAMCONFIG_METHOD_2_A3C73782D742FF7A_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtCharacterConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTDEFENCECHARACTERCONFIG_METHOD_3_0360724B2D00DDF0_OFFSET UNITYSDK_OFFSET(0x18DCAFD0)
#define RPG_GAMECORE_RTDEFENCECHARACTERCONFIG_METHOD_3_ABE869DD89F0159D_OFFSET UNITYSDK_OFFSET(0x18DCDC90)
#define RPG_GAMECORE_RTDEFENCECHARACTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18DCAF40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtDefenceCharacterConfig_TypeDefinitionIndex = 17156;

	class RtDefenceCharacterConfig : public ::RPG::GameCore::RtCharacterConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCECHARACTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ABE869DD89F0159D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtDefenceCharacterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtDefenceCharacterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCECHARACTERCONFIG_METHOD_3_ABE869DD89F0159D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0360724B2D00DDF0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtDefenceCharacterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtDefenceCharacterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCECHARACTERCONFIG_METHOD_3_0360724B2D00DDF0_OFFSET))(a1, a2);
		}
	};
}

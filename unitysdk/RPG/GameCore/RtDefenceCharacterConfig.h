#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtCharacterConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTDEFENCECHARACTERCONFIG_METHOD_3_BA54F12459647E2A_OFFSET UNITYSDK_OFFSET(0x1B75FB20)
#define RPG_GAMECORE_RTDEFENCECHARACTERCONFIG_METHOD_3_ED848673FF77E4A1_OFFSET UNITYSDK_OFFSET(0x1B75F9D0)
#define RPG_GAMECORE_RTDEFENCECHARACTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B75FAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtDefenceCharacterConfig_TypeDefinitionIndex = 17328;

	class RtDefenceCharacterConfig : public ::RPG::GameCore::RtCharacterConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCECHARACTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ED848673FF77E4A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtDefenceCharacterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtDefenceCharacterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCECHARACTERCONFIG_METHOD_3_ED848673FF77E4A1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BA54F12459647E2A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtDefenceCharacterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtDefenceCharacterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCECHARACTERCONFIG_METHOD_3_BA54F12459647E2A_OFFSET))(a1, a2);
		}
	};
}

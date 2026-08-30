#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PINGPONGMPSKILLINFO_METHOD_2_3CBD7B338255B0B6_OFFSET UNITYSDK_OFFSET(0x1D78F0E0)
#define RPG_GAMECORE_PINGPONGMPSKILLINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D78F210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongMPSkillInfo_TypeDefinitionIndex = 16789;

	class PingPongMPSkillInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single MPCostSpeed; // 0x10
		::System::Single TimeSlowRatio; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGMPSKILLINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3CBD7B338255B0B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongMPSkillInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongMPSkillInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGMPSKILLINFO_METHOD_2_3CBD7B338255B0B6_OFFSET))(a1, a2);
		}
	};
}

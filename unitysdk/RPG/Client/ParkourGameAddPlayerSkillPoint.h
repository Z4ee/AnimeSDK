#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_PARKOURGAMEADDPLAYERSKILLPOINT_METHOD_3_7B88FD6D309FE5C1_OFFSET UNITYSDK_OFFSET(0x16E8B210)
#define RPG_CLIENT_PARKOURGAMEADDPLAYERSKILLPOINT_METHOD_3_FE1BE572522A09B6_OFFSET UNITYSDK_OFFSET(0x16E8B190)
#define RPG_CLIENT_PARKOURGAMEADDPLAYERSKILLPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x16E8B1E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourGameAddPlayerSkillPoint_TypeDefinitionIndex = 9956;

	class ParkourGameAddPlayerSkillPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 AddValue; // 0x18
		::System::UInt32 MaxValue; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEADDPLAYERSKILLPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FE1BE572522A09B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ParkourGameAddPlayerSkillPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ParkourGameAddPlayerSkillPoint*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEADDPLAYERSKILLPOINT_METHOD_3_FE1BE572522A09B6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7B88FD6D309FE5C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ParkourGameAddPlayerSkillPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ParkourGameAddPlayerSkillPoint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMEADDPLAYERSKILLPOINT_METHOD_3_7B88FD6D309FE5C1_OFFSET))(a1, a2);
		}
	};
}

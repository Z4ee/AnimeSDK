#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_ROADRASHFIREPROJECTILELAUNCHPOINT_METHOD_2_BD3953122D654038_OFFSET UNITYSDK_OFFSET(0x1D313570)
#define RPG_CLIENT_ROADRASHFIREPROJECTILELAUNCHPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D313720)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashFireProjectileLaunchPoint_TypeDefinitionIndex = 10273;

	class RoadRashFireProjectileLaunchPoint : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint BehindDistance; // 0x10
		::RPG::GameCore::FixPoint LateralOffset; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHFIREPROJECTILELAUNCHPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BD3953122D654038(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashFireProjectileLaunchPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashFireProjectileLaunchPoint*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHFIREPROJECTILELAUNCHPOINT_METHOD_2_BD3953122D654038_OFFSET))(a1, a2);
		}
	};
}

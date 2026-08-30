#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TAKEMISSION_METHOD_3_096DCD99BDF27470_OFFSET UNITYSDK_OFFSET(0x1D59CF10)
#define RPG_GAMECORE_TAKEMISSION_METHOD_3_54E42041BF8B7D9B_OFFSET UNITYSDK_OFFSET(0x1D59CF50)
#define RPG_GAMECORE_TAKEMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D59CF40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TakeMission_TypeDefinitionIndex = 20058;

	class TakeMission : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 MissionID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAKEMISSION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_096DCD99BDF27470(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TakeMission*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TakeMission*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAKEMISSION_METHOD_3_096DCD99BDF27470_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_54E42041BF8B7D9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TakeMission* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TakeMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAKEMISSION_METHOD_3_54E42041BF8B7D9B_OFFSET))(a1, a2);
		}
	};
}

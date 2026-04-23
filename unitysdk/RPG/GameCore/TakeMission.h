#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TAKEMISSION_METHOD_3_45BF4B984AAA1822_OFFSET UNITYSDK_OFFSET(0x18ECDC70)
#define RPG_GAMECORE_TAKEMISSION_METHOD_3_54E42041BF8B7D9B_OFFSET UNITYSDK_OFFSET(0x18ECDCF0)
#define RPG_GAMECORE_TAKEMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x18ECDCC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TakeMission_TypeDefinitionIndex = 19235;

	class TakeMission : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 MissionID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAKEMISSION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_45BF4B984AAA1822(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TakeMission*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TakeMission*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAKEMISSION_METHOD_3_45BF4B984AAA1822_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_54E42041BF8B7D9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TakeMission* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TakeMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAKEMISSION_METHOD_3_54E42041BF8B7D9B_OFFSET))(a1, a2);
		}
	};
}

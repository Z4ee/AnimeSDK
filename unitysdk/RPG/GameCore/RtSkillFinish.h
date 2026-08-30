#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTSKILLFINISH_METHOD_3_0F882B84EFBB8AFF_OFFSET UNITYSDK_OFFSET(0x1D4B1110)
#define RPG_GAMECORE_RTSKILLFINISH_METHOD_3_355177F9273555C2_OFFSET UNITYSDK_OFFSET(0x1D4B1040)
#define RPG_GAMECORE_RTSKILLFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B1100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtSkillFinish_TypeDefinitionIndex = 23940;

	class RtSkillFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_355177F9273555C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtSkillFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtSkillFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLFINISH_METHOD_3_355177F9273555C2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0F882B84EFBB8AFF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtSkillFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtSkillFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLFINISH_METHOD_3_0F882B84EFBB8AFF_OFFSET))(a1, a2);
		}
	};
}

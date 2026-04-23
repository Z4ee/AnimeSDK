#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTSKILLFINISH_METHOD_3_0F882B84EFBB8AFF_OFFSET UNITYSDK_OFFSET(0x18DD7180)
#define RPG_GAMECORE_RTSKILLFINISH_METHOD_3_E0B0B89BD7886B8B_OFFSET UNITYSDK_OFFSET(0x18DD7070)
#define RPG_GAMECORE_RTSKILLFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD7150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtSkillFinish_TypeDefinitionIndex = 23219;

	class RtSkillFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E0B0B89BD7886B8B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtSkillFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtSkillFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLFINISH_METHOD_3_E0B0B89BD7886B8B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0F882B84EFBB8AFF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtSkillFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtSkillFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLFINISH_METHOD_3_0F882B84EFBB8AFF_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SKILLPERFORMFINISH_METHOD_3_56E0BBF4048A4128_OFFSET UNITYSDK_OFFSET(0x1BE51CD0)
#define RPG_GAMECORE_SKILLPERFORMFINISH_METHOD_3_82CDFA063A7031FB_OFFSET UNITYSDK_OFFSET(0x1BE51D10)
#define RPG_GAMECORE_SKILLPERFORMFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE51D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillPerformFinish_TypeDefinitionIndex = 21806;

	class SkillPerformFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean SkipAttackSettlement; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLPERFORMFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_56E0BBF4048A4128(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SkillPerformFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SkillPerformFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLPERFORMFINISH_METHOD_3_56E0BBF4048A4128_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_82CDFA063A7031FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SkillPerformFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SkillPerformFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLPERFORMFINISH_METHOD_3_82CDFA063A7031FB_OFFSET))(a1, a2);
		}
	};
}

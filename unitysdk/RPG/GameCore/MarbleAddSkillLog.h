#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEADDSKILLLOG_METHOD_3_35473BCC0A8C0EB4_OFFSET UNITYSDK_OFFSET(0x1BD12D10)
#define RPG_GAMECORE_MARBLEADDSKILLLOG_METHOD_3_E2212AFEA6C50032_OFFSET UNITYSDK_OFFSET(0x1BD12D70)
#define RPG_GAMECORE_MARBLEADDSKILLLOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD12D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleAddSkillLog_TypeDefinitionIndex = 16197;

	class MarbleAddSkillLog : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10
		::System::Int32 Param; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDSKILLLOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_35473BCC0A8C0EB4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleAddSkillLog*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleAddSkillLog*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDSKILLLOG_METHOD_3_35473BCC0A8C0EB4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E2212AFEA6C50032(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleAddSkillLog* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleAddSkillLog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDSKILLLOG_METHOD_3_E2212AFEA6C50032_OFFSET))(a1, a2);
		}
	};
}

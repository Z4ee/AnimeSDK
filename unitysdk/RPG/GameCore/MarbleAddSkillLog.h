#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MARBLEADDSKILLLOG_METHOD_3_9029DA4C36D13EBB_OFFSET UNITYSDK_OFFSET(0x1D837100)
#define RPG_GAMECORE_MARBLEADDSKILLLOG_METHOD_3_CCB9E944DBBE841C_OFFSET UNITYSDK_OFFSET(0x1D8370A0)
#define RPG_GAMECORE_MARBLEADDSKILLLOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8370F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleAddSkillLog_TypeDefinitionIndex = 16867;

	class MarbleAddSkillLog : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10
		::System::Int32 Param; // 0x14
		::System::String* ParamDynamic; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDSKILLLOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CCB9E944DBBE841C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleAddSkillLog*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleAddSkillLog*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDSKILLLOG_METHOD_3_CCB9E944DBBE841C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9029DA4C36D13EBB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleAddSkillLog* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleAddSkillLog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDSKILLLOG_METHOD_3_9029DA4C36D13EBB_OFFSET))(a1, a2);
		}
	};
}

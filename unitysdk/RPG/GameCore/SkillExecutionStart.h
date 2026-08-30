#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SKILLEXECUTIONSTART_METHOD_3_8B09A44FC36E8221_OFFSET UNITYSDK_OFFSET(0x1D0A5130)
#define RPG_GAMECORE_SKILLEXECUTIONSTART_METHOD_3_EA412C0BCB9298A4_OFFSET UNITYSDK_OFFSET(0x1D0A5200)
#define RPG_GAMECORE_SKILLEXECUTIONSTART__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0A51F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillExecutionStart_TypeDefinitionIndex = 22464;

	class SkillExecutionStart : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLEXECUTIONSTART__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8B09A44FC36E8221(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SkillExecutionStart*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SkillExecutionStart*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLEXECUTIONSTART_METHOD_3_8B09A44FC36E8221_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EA412C0BCB9298A4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SkillExecutionStart* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SkillExecutionStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLEXECUTIONSTART_METHOD_3_EA412C0BCB9298A4_OFFSET))(a1, a2);
		}
	};
}

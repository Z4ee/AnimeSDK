#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtSkillConditionMask.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_RTSELECTSKILL_METHOD_4_A94286EDE2DCAF5B_OFFSET UNITYSDK_OFFSET(0x18DF5A30)
#define RPG_GAMECORE_ST_RTSELECTSKILL_METHOD_4_DA46DC125CCE8F11_OFFSET UNITYSDK_OFFSET(0x18DF5B10)
#define RPG_GAMECORE_ST_RTSELECTSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x18DF5AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_RtSelectSkill_TypeDefinitionIndex = 23064;

	class ST_RtSelectSkill : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::RtSkillConditionMask CheckMask; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_RTSELECTSKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A94286EDE2DCAF5B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_RtSelectSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_RtSelectSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_RTSELECTSKILL_METHOD_4_A94286EDE2DCAF5B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DA46DC125CCE8F11(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_RtSelectSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_RtSelectSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_RTSELECTSKILL_METHOD_4_DA46DC125CCE8F11_OFFSET))(a1, a2);
		}
	};
}

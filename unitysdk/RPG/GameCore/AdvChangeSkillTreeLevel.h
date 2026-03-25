#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVCHANGESKILLTREELEVEL_METHOD_3_0E6B8BCC6D64CFFC_OFFSET UNITYSDK_OFFSET(0x16F284E0)
#define RPG_GAMECORE_ADVCHANGESKILLTREELEVEL_METHOD_3_B1B3B1B66E39E3E3_OFFSET UNITYSDK_OFFSET(0x16F28550)
#define RPG_GAMECORE_ADVCHANGESKILLTREELEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x16F28520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvChangeSkillTreeLevel_TypeDefinitionIndex = 19988;

	class AdvChangeSkillTreeLevel : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHANGESKILLTREELEVEL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0E6B8BCC6D64CFFC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvChangeSkillTreeLevel*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvChangeSkillTreeLevel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHANGESKILLTREELEVEL_METHOD_3_0E6B8BCC6D64CFFC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B1B3B1B66E39E3E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvChangeSkillTreeLevel* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvChangeSkillTreeLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHANGESKILLTREELEVEL_METHOD_3_B1B3B1B66E39E3E3_OFFSET))(a1, a2);
		}
	};
}

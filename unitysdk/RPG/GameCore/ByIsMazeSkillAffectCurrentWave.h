#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYISMAZESKILLAFFECTCURRENTWAVE_METHOD_4_37D3FB7E69E32A49_OFFSET UNITYSDK_OFFSET(0x17030E80)
#define RPG_GAMECORE_BYISMAZESKILLAFFECTCURRENTWAVE_METHOD_4_6717E4332E297A43_OFFSET UNITYSDK_OFFSET(0x17030DB0)
#define RPG_GAMECORE_BYISMAZESKILLAFFECTCURRENTWAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x17030E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsMazeSkillAffectCurrentWave_TypeDefinitionIndex = 21751;

	class ByIsMazeSkillAffectCurrentWave : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMAZESKILLAFFECTCURRENTWAVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6717E4332E297A43(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMAZESKILLAFFECTCURRENTWAVE_METHOD_4_6717E4332E297A43_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_37D3FB7E69E32A49(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMAZESKILLAFFECTCURRENTWAVE_METHOD_4_37D3FB7E69E32A49_OFFSET))(a1, a2);
		}
	};
}

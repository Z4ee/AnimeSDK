#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCHECKROLETRIALNORMALWAVESHOWDETAIL_METHOD_4_5EB87B24F76B931C_OFFSET UNITYSDK_OFFSET(0x17000C40)
#define RPG_GAMECORE_BYCHECKROLETRIALNORMALWAVESHOWDETAIL_METHOD_4_C36952305592DB56_OFFSET UNITYSDK_OFFSET(0x17000B70)
#define RPG_GAMECORE_BYCHECKROLETRIALNORMALWAVESHOWDETAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x17000BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckRoleTrialNormalWaveShowDetail_TypeDefinitionIndex = 21245;

	class ByCheckRoleTrialNormalWaveShowDetail : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKROLETRIALNORMALWAVESHOWDETAIL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C36952305592DB56(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKROLETRIALNORMALWAVESHOWDETAIL_METHOD_4_C36952305592DB56_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5EB87B24F76B931C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKROLETRIALNORMALWAVESHOWDETAIL_METHOD_4_5EB87B24F76B931C_OFFSET))(a1, a2);
		}
	};
}

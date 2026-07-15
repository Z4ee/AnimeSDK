#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKROLETRIALNORMALWAVESHOWDETAIL_METHOD_4_1A33893AE9CA67F7_OFFSET UNITYSDK_OFFSET(0x19CCBA60)
#define RPG_GAMECORE_BYCHECKROLETRIALNORMALWAVESHOWDETAIL_METHOD_4_5EB87B24F76B931C_OFFSET UNITYSDK_OFFSET(0x19CCB8F0)
#define RPG_GAMECORE_BYCHECKROLETRIALNORMALWAVESHOWDETAIL_METHOD_4_93E7C2243D0A0097_OFFSET UNITYSDK_OFFSET(0x19CCB8B0)
#define RPG_GAMECORE_BYCHECKROLETRIALNORMALWAVESHOWDETAIL_METHOD_4_AE9B2F1FCC2F4322_OFFSET UNITYSDK_OFFSET(0x19CCBA30)
#define RPG_GAMECORE_BYCHECKROLETRIALNORMALWAVESHOWDETAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x19CCB8E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckRoleTrialNormalWaveShowDetail_TypeDefinitionIndex = 22211;

	class ByCheckRoleTrialNormalWaveShowDetail : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKROLETRIALNORMALWAVESHOWDETAIL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_93E7C2243D0A0097(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKROLETRIALNORMALWAVESHOWDETAIL_METHOD_4_93E7C2243D0A0097_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5EB87B24F76B931C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKROLETRIALNORMALWAVESHOWDETAIL_METHOD_4_5EB87B24F76B931C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AE9B2F1FCC2F4322(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKROLETRIALNORMALWAVESHOWDETAIL_METHOD_4_AE9B2F1FCC2F4322_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1A33893AE9CA67F7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKROLETRIALNORMALWAVESHOWDETAIL_METHOD_4_1A33893AE9CA67F7_OFFSET))(a1, a2);
		}
	};
}

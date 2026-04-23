#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RTBYINALERTRANGE_METHOD_4_AC0A73EC5CBC8DAB_OFFSET UNITYSDK_OFFSET(0x18DC92F0)
#define RPG_GAMECORE_RTBYINALERTRANGE_METHOD_4_D73703A3E48526CF_OFFSET UNITYSDK_OFFSET(0x18DC9220)
#define RPG_GAMECORE_RTBYINALERTRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC92A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtByInAlertRange_TypeDefinitionIndex = 23237;

	class RtByInAlertRange : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::TargetEvaluator* CheckTargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYINALERTRANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D73703A3E48526CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByInAlertRange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByInAlertRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYINALERTRANGE_METHOD_4_D73703A3E48526CF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AC0A73EC5CBC8DAB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByInAlertRange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByInAlertRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYINALERTRANGE_METHOD_4_AC0A73EC5CBC8DAB_OFFSET))(a1, a2);
		}
	};
}

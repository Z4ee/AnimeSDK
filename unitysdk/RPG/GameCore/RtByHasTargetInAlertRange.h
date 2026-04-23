#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RTBYHASTARGETINALERTRANGE_METHOD_4_A9CAAF7D5E939E68_OFFSET UNITYSDK_OFFSET(0x18DC90A0)
#define RPG_GAMECORE_RTBYHASTARGETINALERTRANGE_METHOD_4_B3A6C3174BEDE4C6_OFFSET UNITYSDK_OFFSET(0x18DC8FD0)
#define RPG_GAMECORE_RTBYHASTARGETINALERTRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC9050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtByHasTargetInAlertRange_TypeDefinitionIndex = 23236;

	class RtByHasTargetInAlertRange : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASTARGETINALERTRANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B3A6C3174BEDE4C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByHasTargetInAlertRange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByHasTargetInAlertRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASTARGETINALERTRANGE_METHOD_4_B3A6C3174BEDE4C6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A9CAAF7D5E939E68(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByHasTargetInAlertRange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByHasTargetInAlertRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASTARGETINALERTRANGE_METHOD_4_A9CAAF7D5E939E68_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETEMOGRAPHALWAYSEVALUATE_METHOD_3_DF08789013747E45_OFFSET UNITYSDK_OFFSET(0x176CA3A0)
#define RPG_GAMECORE_SETEMOGRAPHALWAYSEVALUATE_METHOD_3_DF7DF52286EEC609_OFFSET UNITYSDK_OFFSET(0x176CA320)
#define RPG_GAMECORE_SETEMOGRAPHALWAYSEVALUATE__CTOR_OFFSET UNITYSDK_OFFSET(0x176CA370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEmoGraphAlwaysEvaluate_TypeDefinitionIndex = 20056;

	class SetEmoGraphAlwaysEvaluate : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean AlwaysEvaluate; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEMOGRAPHALWAYSEVALUATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DF7DF52286EEC609(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEmoGraphAlwaysEvaluate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEmoGraphAlwaysEvaluate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEMOGRAPHALWAYSEVALUATE_METHOD_3_DF7DF52286EEC609_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DF08789013747E45(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEmoGraphAlwaysEvaluate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEmoGraphAlwaysEvaluate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEMOGRAPHALWAYSEVALUATE_METHOD_3_DF08789013747E45_OFFSET))(a1, a2);
		}
	};
}

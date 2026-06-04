#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RESETHEADLOOKAT_METHOD_3_5CCB05E506E9D5CD_OFFSET UNITYSDK_OFFSET(0x19ACF160)
#define RPG_GAMECORE_RESETHEADLOOKAT_METHOD_3_FF426AA1306E1811_OFFSET UNITYSDK_OFFSET(0x19ACF0E0)
#define RPG_GAMECORE_RESETHEADLOOKAT__CTOR_OFFSET UNITYSDK_OFFSET(0x19ACF130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetHeadLookAt_TypeDefinitionIndex = 21660;

	class ResetHeadLookAt : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* PerformerType; // 0x18
		::System::Boolean StopImmediately; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETHEADLOOKAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FF426AA1306E1811(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetHeadLookAt*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetHeadLookAt*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETHEADLOOKAT_METHOD_3_FF426AA1306E1811_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5CCB05E506E9D5CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetHeadLookAt* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetHeadLookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETHEADLOOKAT_METHOD_3_5CCB05E506E9D5CD_OFFSET))(a1, a2);
		}
	};
}

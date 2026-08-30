#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CLEARTARGETTIMESLOW_METHOD_3_6B72669ACF98E170_OFFSET UNITYSDK_OFFSET(0x1CFDB710)
#define RPG_GAMECORE_CLEARTARGETTIMESLOW_METHOD_3_E1750CEE94030D4D_OFFSET UNITYSDK_OFFSET(0x1CFDB6C0)
#define RPG_GAMECORE_CLEARTARGETTIMESLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFDB700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearTargetTimeSlow_TypeDefinitionIndex = 22422;

	class ClearTargetTimeSlow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* SlowKey; // 0x20
		::System::Boolean FadeOut; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARTARGETTIMESLOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E1750CEE94030D4D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearTargetTimeSlow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearTargetTimeSlow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARTARGETTIMESLOW_METHOD_3_E1750CEE94030D4D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6B72669ACF98E170(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearTargetTimeSlow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearTargetTimeSlow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARTARGETTIMESLOW_METHOD_3_6B72669ACF98E170_OFFSET))(a1, a2);
		}
	};
}

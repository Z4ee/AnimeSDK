#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3TriggerBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_AFTERSTEPTRIGGER_METHOD_4_8D1157C719BA4531_OFFSET UNITYSDK_OFFSET(0x18AADEE0)
#define RPG_GAMECORE_MATCH3_AFTERSTEPTRIGGER_METHOD_4_96734080A5ECECDC_OFFSET UNITYSDK_OFFSET(0x18AADE40)
#define RPG_GAMECORE_MATCH3_AFTERSTEPTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18AADED0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int AfterStepTrigger_TypeDefinitionIndex = 23678;

	class AfterStepTrigger : public ::RPG::GameCore::Match3::Match3TriggerBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_AFTERSTEPTRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_96734080A5ECECDC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::AfterStepTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::AfterStepTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_AFTERSTEPTRIGGER_METHOD_4_96734080A5ECECDC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8D1157C719BA4531(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::AfterStepTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::AfterStepTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_AFTERSTEPTRIGGER_METHOD_4_8D1157C719BA4531_OFFSET))(a1, a2);
		}
	};
}

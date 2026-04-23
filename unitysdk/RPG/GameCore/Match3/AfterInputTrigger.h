#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3TriggerBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_AFTERINPUTTRIGGER_METHOD_4_B57A25A481E1E43A_OFFSET UNITYSDK_OFFSET(0x18AADD30)
#define RPG_GAMECORE_MATCH3_AFTERINPUTTRIGGER_METHOD_4_C5C18DAE7E79945B_OFFSET UNITYSDK_OFFSET(0x18AADDD0)
#define RPG_GAMECORE_MATCH3_AFTERINPUTTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18AADDC0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int AfterInputTrigger_TypeDefinitionIndex = 23677;

	class AfterInputTrigger : public ::RPG::GameCore::Match3::Match3TriggerBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_AFTERINPUTTRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B57A25A481E1E43A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::AfterInputTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::AfterInputTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_AFTERINPUTTRIGGER_METHOD_4_B57A25A481E1E43A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C5C18DAE7E79945B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::AfterInputTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::AfterInputTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_AFTERINPUTTRIGGER_METHOD_4_C5C18DAE7E79945B_OFFSET))(a1, a2);
		}
	};
}

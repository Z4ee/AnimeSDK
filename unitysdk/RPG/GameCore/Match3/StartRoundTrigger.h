#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3TriggerBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_STARTROUNDTRIGGER_METHOD_4_2F66486E63CBD56C_OFFSET UNITYSDK_OFFSET(0x173ACD60)
#define RPG_GAMECORE_MATCH3_STARTROUNDTRIGGER_METHOD_4_34B57D62BA789381_OFFSET UNITYSDK_OFFSET(0x173AACB0)
#define RPG_GAMECORE_MATCH3_STARTROUNDTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x173AACA0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int StartRoundTrigger_TypeDefinitionIndex = 22707;

	class StartRoundTrigger : public ::RPG::GameCore::Match3::Match3TriggerBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STARTROUNDTRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2F66486E63CBD56C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::StartRoundTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::StartRoundTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STARTROUNDTRIGGER_METHOD_4_2F66486E63CBD56C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_34B57D62BA789381(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::StartRoundTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::StartRoundTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STARTROUNDTRIGGER_METHOD_4_34B57D62BA789381_OFFSET))(a1, a2);
		}
	};
}

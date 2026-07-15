#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3TriggerBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_ENDROUNDTRIGGER_METHOD_4_9EFF1473EFC81682_OFFSET UNITYSDK_OFFSET(0x1BD25D10)
#define RPG_GAMECORE_MATCH3_ENDROUNDTRIGGER_METHOD_4_F4939A64300FF303_OFFSET UNITYSDK_OFFSET(0x1BD25C70)
#define RPG_GAMECORE_MATCH3_ENDROUNDTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD25D00)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int EndRoundTrigger_TypeDefinitionIndex = 24007;

	class EndRoundTrigger : public ::RPG::GameCore::Match3::Match3TriggerBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ENDROUNDTRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F4939A64300FF303(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::EndRoundTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::EndRoundTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ENDROUNDTRIGGER_METHOD_4_F4939A64300FF303_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9EFF1473EFC81682(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::EndRoundTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::EndRoundTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ENDROUNDTRIGGER_METHOD_4_9EFF1473EFC81682_OFFSET))(a1, a2);
		}
	};
}

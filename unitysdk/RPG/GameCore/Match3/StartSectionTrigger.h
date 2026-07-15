#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3TriggerBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_STARTSECTIONTRIGGER_METHOD_4_0CDBB3A58FD54EA3_OFFSET UNITYSDK_OFFSET(0x1BD2C600)
#define RPG_GAMECORE_MATCH3_STARTSECTIONTRIGGER_METHOD_4_51A894E392D1E722_OFFSET UNITYSDK_OFFSET(0x1BD29880)
#define RPG_GAMECORE_MATCH3_STARTSECTIONTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD29870)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int StartSectionTrigger_TypeDefinitionIndex = 24008;

	class StartSectionTrigger : public ::RPG::GameCore::Match3::Match3TriggerBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STARTSECTIONTRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0CDBB3A58FD54EA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::StartSectionTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::StartSectionTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STARTSECTIONTRIGGER_METHOD_4_0CDBB3A58FD54EA3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_51A894E392D1E722(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::StartSectionTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::StartSectionTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STARTSECTIONTRIGGER_METHOD_4_51A894E392D1E722_OFFSET))(a1, a2);
		}
	};
}

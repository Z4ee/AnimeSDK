#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3TriggerBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_STARTENEMYSECTIONTRIGGER_METHOD_4_02573FBAF58FF6EE_OFFSET UNITYSDK_OFFSET(0x198E9CB0)
#define RPG_GAMECORE_MATCH3_STARTENEMYSECTIONTRIGGER_METHOD_4_75F6B0020FE3829F_OFFSET UNITYSDK_OFFSET(0x198EBD10)
#define RPG_GAMECORE_MATCH3_STARTENEMYSECTIONTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x198E9CA0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int StartEnemySectionTrigger_TypeDefinitionIndex = 23520;

	class StartEnemySectionTrigger : public ::RPG::GameCore::Match3::Match3TriggerBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STARTENEMYSECTIONTRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_75F6B0020FE3829F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::StartEnemySectionTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::StartEnemySectionTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STARTENEMYSECTIONTRIGGER_METHOD_4_75F6B0020FE3829F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_02573FBAF58FF6EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::StartEnemySectionTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::StartEnemySectionTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STARTENEMYSECTIONTRIGGER_METHOD_4_02573FBAF58FF6EE_OFFSET))(a1, a2);
		}
	};
}

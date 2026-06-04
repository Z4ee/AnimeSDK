#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHANGEMONSTERHEADICON_METHOD_3_3025E06ECA4C97CD_OFFSET UNITYSDK_OFFSET(0x196049A0)
#define RPG_GAMECORE_CHANGEMONSTERHEADICON_METHOD_3_E2F513FECD3F3858_OFFSET UNITYSDK_OFFSET(0x19604A20)
#define RPG_GAMECORE_CHANGEMONSTERHEADICON__CTOR_OFFSET UNITYSDK_OFFSET(0x196049F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeMonsterHeadIcon_TypeDefinitionIndex = 22380;

	class ChangeMonsterHeadIcon : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* IconFromTarget; // 0x20
		::System::String* IconPath; // 0x28
		::System::String* RoundIconPath; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEMONSTERHEADICON__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3025E06ECA4C97CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeMonsterHeadIcon*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeMonsterHeadIcon*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEMONSTERHEADICON_METHOD_3_3025E06ECA4C97CD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E2F513FECD3F3858(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeMonsterHeadIcon* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeMonsterHeadIcon*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEMONSTERHEADICON_METHOD_3_E2F513FECD3F3858_OFFSET))(a1, a2);
		}
	};
}

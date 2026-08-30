#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHANGEMONSTERHEADICON_METHOD_3_734658F2B4BA29B9_OFFSET UNITYSDK_OFFSET(0x1CF8D6D0)
#define RPG_GAMECORE_CHANGEMONSTERHEADICON_METHOD_3_E2F513FECD3F3858_OFFSET UNITYSDK_OFFSET(0x1CF8D710)
#define RPG_GAMECORE_CHANGEMONSTERHEADICON__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF8D700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeMonsterHeadIcon_TypeDefinitionIndex = 23400;

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

		static ::System::Void Method_3_734658F2B4BA29B9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeMonsterHeadIcon*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeMonsterHeadIcon*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEMONSTERHEADICON_METHOD_3_734658F2B4BA29B9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E2F513FECD3F3858(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeMonsterHeadIcon* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeMonsterHeadIcon*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEMONSTERHEADICON_METHOD_3_E2F513FECD3F3858_OFFSET))(a1, a2);
		}
	};
}

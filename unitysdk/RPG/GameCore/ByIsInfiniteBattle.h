#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISINFINITEBATTLE_METHOD_4_3C1059E63E961827_OFFSET UNITYSDK_OFFSET(0x1CF42340)
#define RPG_GAMECORE_BYISINFINITEBATTLE_METHOD_4_56B86E0C8FD46412_OFFSET UNITYSDK_OFFSET(0x1CF42310)
#define RPG_GAMECORE_BYISINFINITEBATTLE_METHOD_4_B544E3689D95B9AC_OFFSET UNITYSDK_OFFSET(0x1CF421D0)
#define RPG_GAMECORE_BYISINFINITEBATTLE_METHOD_4_F839344E1BDE1567_OFFSET UNITYSDK_OFFSET(0x1CF42190)
#define RPG_GAMECORE_BYISINFINITEBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF421C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsInfiniteBattle_TypeDefinitionIndex = 22805;

	class ByIsInfiniteBattle : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINFINITEBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F839344E1BDE1567(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInfiniteBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInfiniteBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINFINITEBATTLE_METHOD_4_F839344E1BDE1567_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B544E3689D95B9AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInfiniteBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInfiniteBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINFINITEBATTLE_METHOD_4_B544E3689D95B9AC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_56B86E0C8FD46412(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInfiniteBattle*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInfiniteBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINFINITEBATTLE_METHOD_4_56B86E0C8FD46412_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3C1059E63E961827(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInfiniteBattle* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInfiniteBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINFINITEBATTLE_METHOD_4_3C1059E63E961827_OFFSET))(a1, a2);
		}
	};
}

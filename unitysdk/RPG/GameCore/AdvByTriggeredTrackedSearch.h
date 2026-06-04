#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYTRIGGEREDTRACKEDSEARCH_METHOD_4_1169DFD3F8C43F04_OFFSET UNITYSDK_OFFSET(0x1941DC50)
#define RPG_GAMECORE_ADVBYTRIGGEREDTRACKEDSEARCH_METHOD_4_1F087FC33E07F1C1_OFFSET UNITYSDK_OFFSET(0x1941DA00)
#define RPG_GAMECORE_ADVBYTRIGGEREDTRACKEDSEARCH_METHOD_4_8403A56442D19084_OFFSET UNITYSDK_OFFSET(0x1941DCD0)
#define RPG_GAMECORE_ADVBYTRIGGEREDTRACKEDSEARCH_METHOD_4_A9099723B807619F_OFFSET UNITYSDK_OFFSET(0x1941DAD0)
#define RPG_GAMECORE_ADVBYTRIGGEREDTRACKEDSEARCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1941DA80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByTriggeredTrackedSearch_TypeDefinitionIndex = 18892;

	class AdvByTriggeredTrackedSearch : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Single CheckTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYTRIGGEREDTRACKEDSEARCH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1F087FC33E07F1C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByTriggeredTrackedSearch*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByTriggeredTrackedSearch*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYTRIGGEREDTRACKEDSEARCH_METHOD_4_1F087FC33E07F1C1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A9099723B807619F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByTriggeredTrackedSearch* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByTriggeredTrackedSearch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYTRIGGEREDTRACKEDSEARCH_METHOD_4_A9099723B807619F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1169DFD3F8C43F04(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByTriggeredTrackedSearch*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByTriggeredTrackedSearch*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYTRIGGEREDTRACKEDSEARCH_METHOD_4_1169DFD3F8C43F04_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8403A56442D19084(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByTriggeredTrackedSearch* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByTriggeredTrackedSearch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYTRIGGEREDTRACKEDSEARCH_METHOD_4_8403A56442D19084_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYTRIGGEREDTRACKEDSEARCH_METHOD_4_96B9B82C4A8C793E_OFFSET UNITYSDK_OFFSET(0x1BE16830)
#define RPG_GAMECORE_ADVBYTRIGGEREDTRACKEDSEARCH_METHOD_4_A6CE43A123650DF2_OFFSET UNITYSDK_OFFSET(0x1BE16A20)
#define RPG_GAMECORE_ADVBYTRIGGEREDTRACKEDSEARCH_METHOD_4_A9099723B807619F_OFFSET UNITYSDK_OFFSET(0x1BE16870)
#define RPG_GAMECORE_ADVBYTRIGGEREDTRACKEDSEARCH_METHOD_4_EE19E0A2067423F5_OFFSET UNITYSDK_OFFSET(0x1BE169F0)
#define RPG_GAMECORE_ADVBYTRIGGEREDTRACKEDSEARCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE16860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByTriggeredTrackedSearch_TypeDefinitionIndex = 19242;

	class AdvByTriggeredTrackedSearch : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Single CheckTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYTRIGGEREDTRACKEDSEARCH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_96B9B82C4A8C793E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByTriggeredTrackedSearch*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByTriggeredTrackedSearch*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYTRIGGEREDTRACKEDSEARCH_METHOD_4_96B9B82C4A8C793E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A9099723B807619F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByTriggeredTrackedSearch* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByTriggeredTrackedSearch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYTRIGGEREDTRACKEDSEARCH_METHOD_4_A9099723B807619F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EE19E0A2067423F5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByTriggeredTrackedSearch*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByTriggeredTrackedSearch*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYTRIGGEREDTRACKEDSEARCH_METHOD_4_EE19E0A2067423F5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A6CE43A123650DF2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByTriggeredTrackedSearch* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByTriggeredTrackedSearch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYTRIGGEREDTRACKEDSEARCH_METHOD_4_A6CE43A123650DF2_OFFSET))(a1, a2);
		}
	};
}

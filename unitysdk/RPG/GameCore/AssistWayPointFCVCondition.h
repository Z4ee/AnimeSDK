#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AssistWayPointCondition.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FloorCustomValueConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ASSISTWAYPOINTFCVCONDITION_METHOD_3_1202C705E6D02328_OFFSET UNITYSDK_OFFSET(0x1A060770)
#define RPG_GAMECORE_ASSISTWAYPOINTFCVCONDITION_METHOD_3_2C16222D1E0AECED_OFFSET UNITYSDK_OFFSET(0x1A05E400)
#define RPG_GAMECORE_ASSISTWAYPOINTFCVCONDITION_METHOD_3_A60AF6ABE57E2230_OFFSET UNITYSDK_OFFSET(0x1A0607A0)
#define RPG_GAMECORE_ASSISTWAYPOINTFCVCONDITION_METHOD_3_F09386DE332C149E_OFFSET UNITYSDK_OFFSET(0x1A05FB20)
#define RPG_GAMECORE_ASSISTWAYPOINTFCVCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A05E3F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AssistWayPointFCVCondition_TypeDefinitionIndex = 18250;

	class AssistWayPointFCVCondition : public ::RPG::GameCore::AssistWayPointCondition
	{
	public:
		::RPG::GameCore::FloorCustomValueConfig* TargetFCV; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTFCVCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1202C705E6D02328(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AssistWayPointFCVCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AssistWayPointFCVCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTFCVCONDITION_METHOD_3_1202C705E6D02328_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2C16222D1E0AECED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AssistWayPointFCVCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AssistWayPointFCVCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTFCVCONDITION_METHOD_3_2C16222D1E0AECED_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F09386DE332C149E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointFCVCondition*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointFCVCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTFCVCONDITION_METHOD_3_F09386DE332C149E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A60AF6ABE57E2230(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointFCVCondition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointFCVCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTFCVCONDITION_METHOD_3_A60AF6ABE57E2230_OFFSET))(a1, a2);
		}
	};
}

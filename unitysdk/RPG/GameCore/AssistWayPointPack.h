#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AssistWayPoint; }
namespace RPG::GameCore { class AssistWayPointFastComplete; }
namespace RPG::GameCore { class AssistWayPointLittleGameCondition; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ASSISTWAYPOINTPACK_METHOD_2_3A2ED95FF830F73F_OFFSET UNITYSDK_OFFSET(0x1C577600)
#define RPG_GAMECORE_ASSISTWAYPOINTPACK_METHOD_2_5159A0BB4DB966FB_OFFSET UNITYSDK_OFFSET(0x1C5773E0)
#define RPG_GAMECORE_ASSISTWAYPOINTPACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5775F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AssistWayPointPack_TypeDefinitionIndex = 18783;

	class AssistWayPointPack : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 AssistWayPointFloorID; // 0x10
		::System::UInt32 AssistWayPointRegionID; // 0x14
		::Il2CppArray<::RPG::GameCore::AssistWayPointLittleGameCondition*>* AssistWayPointLittleGameConditionList; // 0x18
		::Il2CppArray<::RPG::GameCore::AssistWayPoint*>* AssistWayPointList; // 0x20
		::Il2CppArray<::RPG::GameCore::AssistWayPointFastComplete*>* AssistWayPointFastCompleteList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTPACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5159A0BB4DB966FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AssistWayPointPack*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AssistWayPointPack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTPACK_METHOD_2_5159A0BB4DB966FB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_3A2ED95FF830F73F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointPack*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointPack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTPACK_METHOD_2_3A2ED95FF830F73F_OFFSET))(a1, a2);
		}
	};
}

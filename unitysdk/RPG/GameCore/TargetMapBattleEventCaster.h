#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPBATTLEEVENTCASTER_METHOD_3_05BED5382E8D10E7_OFFSET UNITYSDK_OFFSET(0x1E1BB0F0)
#define RPG_GAMECORE_TARGETMAPBATTLEEVENTCASTER_METHOD_3_85C8DEF69D2C2595_OFFSET UNITYSDK_OFFSET(0x1E1BB050)
#define RPG_GAMECORE_TARGETMAPBATTLEEVENTCASTER_METHOD_3_896A481A17C20163_OFFSET UNITYSDK_OFFSET(0x1E1BB0B0)
#define RPG_GAMECORE_TARGETMAPBATTLEEVENTCASTER_METHOD_3_D4C38696BD0D4A90_OFFSET UNITYSDK_OFFSET(0x1E1BAFB0)
#define RPG_GAMECORE_TARGETMAPBATTLEEVENTCASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BB040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapBattleEventCaster_TypeDefinitionIndex = 23655;

	class TargetMapBattleEventCaster : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBATTLEEVENTCASTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D4C38696BD0D4A90(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapBattleEventCaster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapBattleEventCaster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBATTLEEVENTCASTER_METHOD_3_D4C38696BD0D4A90_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_85C8DEF69D2C2595(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapBattleEventCaster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapBattleEventCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBATTLEEVENTCASTER_METHOD_3_85C8DEF69D2C2595_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_896A481A17C20163(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapBattleEventCaster*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapBattleEventCaster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBATTLEEVENTCASTER_METHOD_3_896A481A17C20163_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_05BED5382E8D10E7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapBattleEventCaster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapBattleEventCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBATTLEEVENTCASTER_METHOD_3_05BED5382E8D10E7_OFFSET))(a1, a2);
		}
	};
}

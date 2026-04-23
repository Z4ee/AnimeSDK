#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETMAPBATTLEEVENTCASTER_METHOD_3_0E258C843348FE63_OFFSET UNITYSDK_OFFSET(0x18EE7A00)
#define RPG_GAMECORE_TARGETMAPBATTLEEVENTCASTER_METHOD_3_85C8DEF69D2C2595_OFFSET UNITYSDK_OFFSET(0x18EE7AE0)
#define RPG_GAMECORE_TARGETMAPBATTLEEVENTCASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EE7AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapBattleEventCaster_TypeDefinitionIndex = 22921;

	class TargetMapBattleEventCaster : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBATTLEEVENTCASTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0E258C843348FE63(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapBattleEventCaster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapBattleEventCaster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBATTLEEVENTCASTER_METHOD_3_0E258C843348FE63_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_85C8DEF69D2C2595(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapBattleEventCaster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapBattleEventCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBATTLEEVENTCASTER_METHOD_3_85C8DEF69D2C2595_OFFSET))(a1, a2);
		}
	};
}

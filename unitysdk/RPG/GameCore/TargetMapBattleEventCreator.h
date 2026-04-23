#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETMAPBATTLEEVENTCREATOR_METHOD_3_891B19D4DB5C26A5_OFFSET UNITYSDK_OFFSET(0x18EE7B40)
#define RPG_GAMECORE_TARGETMAPBATTLEEVENTCREATOR_METHOD_3_DE18EA9B955DA4B3_OFFSET UNITYSDK_OFFSET(0x18EE7C20)
#define RPG_GAMECORE_TARGETMAPBATTLEEVENTCREATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18EE7C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapBattleEventCreator_TypeDefinitionIndex = 22922;

	class TargetMapBattleEventCreator : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBATTLEEVENTCREATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_891B19D4DB5C26A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapBattleEventCreator*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapBattleEventCreator*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBATTLEEVENTCREATOR_METHOD_3_891B19D4DB5C26A5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DE18EA9B955DA4B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapBattleEventCreator* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapBattleEventCreator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBATTLEEVENTCREATOR_METHOD_3_DE18EA9B955DA4B3_OFFSET))(a1, a2);
		}
	};
}

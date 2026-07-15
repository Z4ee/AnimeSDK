#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyBuildItemDynamicBindValue.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_MISSION_METHOD_3_A39850DC7EF7251E_OFFSET UNITYSDK_OFFSET(0x1C15E120)
#define RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_MISSION_METHOD_3_F57746EAB0E34422_OFFSET UNITYSDK_OFFSET(0x1C15DF80)
#define RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_MISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C15DF70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyBuildItemDynamicBindValue_Mission_TypeDefinitionIndex = 15626;

	class TrainPartyBuildItemDynamicBindValue_Mission : public ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue
	{
	public:
		::System::UInt32 SubMissionID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_MISSION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A39850DC7EF7251E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue_Mission*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue_Mission*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_MISSION_METHOD_3_A39850DC7EF7251E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F57746EAB0E34422(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue_Mission* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue_Mission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_MISSION_METHOD_3_F57746EAB0E34422_OFFSET))(a1, a2);
		}
	};
}

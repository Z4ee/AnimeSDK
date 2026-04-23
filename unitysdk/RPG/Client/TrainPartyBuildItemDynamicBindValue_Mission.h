#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrainPartyBuildItemDynamicBindValue.h"

#define RPG_CLIENT_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_MISSION_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xB362C30)
#define RPG_CLIENT_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_MISSION__CTOR_OFFSET UNITYSDK_OFFSET(0xB362CD0)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainPartyBuildItemDynamicBindValue_Mission_TypeDefinitionIndex = 63517;

	class TrainPartyBuildItemDynamicBindValue_Mission : public ::RPG::Client::TrainPartyBuildItemDynamicBindValue
	{
	public:
		::System::UInt32 SubMissionID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_MISSION__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_2_A3FAE12D7B6ACD62()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_MISSION_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
		}
	};
}

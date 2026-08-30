#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrainPartyBuildItemDynamicBindValue.h"
#include "unitysdk/RPG/GameCore/CompareType.h"

namespace System { class String; }

#define RPG_CLIENT_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_FSV_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x1B29EA80)
#define RPG_CLIENT_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_FSV__CTOR_OFFSET UNITYSDK_OFFSET(0x1B29EB10)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainPartyBuildItemDynamicBindValue_FSV_TypeDefinitionIndex = 68845;

	class TrainPartyBuildItemDynamicBindValue_FSV : public ::RPG::Client::TrainPartyBuildItemDynamicBindValue
	{
	public:
		::System::String* FloorSavedName; // 0x10
		::System::Int16 FloorSavedValue; // 0x18
		::RPG::GameCore::CompareType Compare; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_FSV__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_2_A3FAE12D7B6ACD62()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_FSV_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
		}
	};
}

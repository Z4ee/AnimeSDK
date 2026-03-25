#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/RPG/Client/TrainPartyBuildItemDynamicBindValue.h"

#define RPG_CLIENT_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_AVATARBASEPATH_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xA60F420)
#define RPG_CLIENT_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_AVATARBASEPATH__CTOR_OFFSET UNITYSDK_OFFSET(0xA60F4C0)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainPartyBuildItemDynamicBindValue_AvatarBasePath_TypeDefinitionIndex = 56275;

	class TrainPartyBuildItemDynamicBindValue_AvatarBasePath : public ::RPG::Client::TrainPartyBuildItemDynamicBindValue
	{
	public:
		::Enum_3_DFCB42601400F441 Type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_AVATARBASEPATH__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_2_A3FAE12D7B6ACD62()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_AVATARBASEPATH_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
		}
	};
}

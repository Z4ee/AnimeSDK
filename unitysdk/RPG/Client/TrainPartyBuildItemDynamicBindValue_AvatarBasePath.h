#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/RPG/Client/TrainPartyBuildItemDynamicBindValue.h"

#define RPG_CLIENT_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_AVATARBASEPATH_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xCABE420)
#define RPG_CLIENT_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_AVATARBASEPATH__CTOR_OFFSET UNITYSDK_OFFSET(0xCABE470)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainPartyBuildItemDynamicBindValue_AvatarBasePath_TypeDefinitionIndex = 64438;

	class TrainPartyBuildItemDynamicBindValue_AvatarBasePath : public ::RPG::Client::TrainPartyBuildItemDynamicBindValue
	{
	public:
		::Enum_3_DFCB42601400F441 Type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_AVATARBASEPATH__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_2_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_AVATARBASEPATH_METHOD_2_391A84BCD9F51317_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtLevelGroupInfoBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTLEVELGROUPINFO_METHOD_3_8FF4208FD319C383_OFFSET UNITYSDK_OFFSET(0x1B7648C0)
#define RPG_GAMECORE_RTLEVELGROUPINFO_METHOD_3_B667D5EB41182502_OFFSET UNITYSDK_OFFSET(0x1B764850)
#define RPG_GAMECORE_RTLEVELGROUPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7648A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtLevelGroupInfo_TypeDefinitionIndex = 16647;

	class RtLevelGroupInfo : public ::RPG::GameCore::RtLevelGroupInfoBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTLEVELGROUPINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B667D5EB41182502(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtLevelGroupInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtLevelGroupInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTLEVELGROUPINFO_METHOD_3_B667D5EB41182502_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8FF4208FD319C383(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtLevelGroupInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtLevelGroupInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTLEVELGROUPINFO_METHOD_3_8FF4208FD319C383_OFFSET))(a1, a2);
		}
	};
}

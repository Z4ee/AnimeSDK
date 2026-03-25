#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtLevelGroupInfoBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTLEVELGROUPINFO_METHOD_3_DAC9391AEF50EEB0_OFFSET UNITYSDK_OFFSET(0x17675E40)
#define RPG_GAMECORE_RTLEVELGROUPINFO_METHOD_3_FD1363442F0E8864_OFFSET UNITYSDK_OFFSET(0x17675EB0)
#define RPG_GAMECORE_RTLEVELGROUPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17675E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtLevelGroupInfo_TypeDefinitionIndex = 15925;

	class RtLevelGroupInfo : public ::RPG::GameCore::RtLevelGroupInfoBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTLEVELGROUPINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DAC9391AEF50EEB0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtLevelGroupInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtLevelGroupInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTLEVELGROUPINFO_METHOD_3_DAC9391AEF50EEB0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FD1363442F0E8864(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtLevelGroupInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtLevelGroupInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTLEVELGROUPINFO_METHOD_3_FD1363442F0E8864_OFFSET))(a1, a2);
		}
	};
}

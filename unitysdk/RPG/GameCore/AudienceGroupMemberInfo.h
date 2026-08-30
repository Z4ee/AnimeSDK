#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicJsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AUDIENCEGROUPMEMBERINFO_METHOD_3_109984F2F7F57804_OFFSET UNITYSDK_OFFSET(0x1CE2E4A0)
#define RPG_GAMECORE_AUDIENCEGROUPMEMBERINFO_METHOD_3_A0CDBA81ECA78857_OFFSET UNITYSDK_OFFSET(0x1CE2E460)
#define RPG_GAMECORE_AUDIENCEGROUPMEMBERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE2E490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AudienceGroupMemberInfo_TypeDefinitionIndex = 21631;

	class AudienceGroupMemberInfo : public ::RPG::GameCore::DynamicJsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 MemberID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIENCEGROUPMEMBERINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A0CDBA81ECA78857(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AudienceGroupMemberInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AudienceGroupMemberInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIENCEGROUPMEMBERINFO_METHOD_3_A0CDBA81ECA78857_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_109984F2F7F57804(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AudienceGroupMemberInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AudienceGroupMemberInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIENCEGROUPMEMBERINFO_METHOD_3_109984F2F7F57804_OFFSET))(a1, a2);
		}
	};
}

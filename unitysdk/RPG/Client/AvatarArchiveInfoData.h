#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_ADE34076259CCCF7_1;

#define RPG_CLIENT_AVATARARCHIVEINFODATA_APPLYCHANGEINFO_OFFSET UNITYSDK_OFFSET(0x193BBF10)
#define RPG_CLIENT_AVATARARCHIVEINFODATA_GET_CAMPID_OFFSET UNITYSDK_OFFSET(0x193BBFE0)
#define RPG_CLIENT_AVATARARCHIVEINFODATA_GET_ISCAMPNEW_OFFSET UNITYSDK_OFFSET(0x193BC000)
#define RPG_CLIENT_AVATARARCHIVEINFODATA_RECORDSEEN_OFFSET UNITYSDK_OFFSET(0x193BBF80)
#define RPG_CLIENT_AVATARARCHIVEINFODATA_SET_CAMPID_OFFSET UNITYSDK_OFFSET(0x193BBFF0)
#define RPG_CLIENT_AVATARARCHIVEINFODATA_SET_ISCAMPNEW_OFFSET UNITYSDK_OFFSET(0x193BC010)
#define RPG_CLIENT_AVATARARCHIVEINFODATA__CTOR_OFFSET UNITYSDK_OFFSET(0x193BBE60)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarArchiveInfoData_TypeDefinitionIndex = 62506;

	class AvatarArchiveInfoData : public ::System::Object
	{
	public:
		::System::UInt32 _CampID_k__BackingField; // 0x10
		::System::UInt32 _ChangeID; // 0x14
		::System::Boolean _IsCampNew_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEINFODATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void ApplyChangeInfo(::Class_1_ADE34076259CCCF7_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_ADE34076259CCCF7_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEINFODATA_APPLYCHANGEINFO_OFFSET))(this, a1);
		}

		::System::Void RecordSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEINFODATA_RECORDSEEN_OFFSET))(this);
		}

		::System::UInt32 get_CampID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEINFODATA_GET_CAMPID_OFFSET))(this);
		}

		::System::Void set_CampID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEINFODATA_SET_CAMPID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCampNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEINFODATA_GET_ISCAMPNEW_OFFSET))(this);
		}

		::System::Void set_IsCampNew(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARARCHIVEINFODATA_SET_ISCAMPNEW_OFFSET))(this, a1);
		}
	};
}

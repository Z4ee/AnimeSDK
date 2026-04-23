#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4A900B1EABCF9FBE_1;
namespace RPG::Client { class HeadFrameInfo; }
namespace RPG::Client { class PlayerPlatformInfo; }
namespace System { class String; }

#define RPG_CLIENT_SUPPORTDATA_GETDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xB1ED8C0)
#define RPG_CLIENT_SUPPORTDATA_GET_HASREMARKNAME_OFFSET UNITYSDK_OFFSET(0xB1EDFA0)
#define RPG_CLIENT_SUPPORTDATA_GET_HEADFRAMEINFO_OFFSET UNITYSDK_OFFSET(0xB1EDE10)
#define RPG_CLIENT_SUPPORTDATA_GET_HEADICONID_OFFSET UNITYSDK_OFFSET(0xB1EE000)
#define RPG_CLIENT_SUPPORTDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB1EDEE0)
#define RPG_CLIENT_SUPPORTDATA_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0xB1EDD00)
#define RPG_CLIENT_SUPPORTDATA_GET_PERSONALCARDID_OFFSET UNITYSDK_OFFSET(0xB1EDDC0)
#define RPG_CLIENT_SUPPORTDATA_GET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0xB1EDF80)
#define RPG_CLIENT_SUPPORTDATA_GET_REMARKNAME_OFFSET UNITYSDK_OFFSET(0xB1EDBB0)
#define RPG_CLIENT_SUPPORTDATA_GET_SUPPORTCOUNT_OFFSET UNITYSDK_OFFSET(0xB1EDF30)
#define RPG_CLIENT_SUPPORTDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0xB1EDD70)
#define RPG_CLIENT_SUPPORTDATA_SET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0xB1EDF90)
#define RPG_CLIENT_SUPPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB1ED7E0)

namespace RPG::Client
{
	inline static constexpr unsigned int SupportData_TypeDefinitionIndex = 59121;

	class SupportData : public ::System::Object
	{
	public:
		::Class_1_4A900B1EABCF9FBE_1* _RowInfo; // 0x10
		::RPG::Client::PlayerPlatformInfo* _PlatformInfo_k__BackingField; // 0x18
		::RPG::Client::HeadFrameInfo* _HeadFrameInfo; // 0x20

		::System::Void _ctor(::Class_1_4A900B1EABCF9FBE_1* serverInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4A900B1EABCF9FBE_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPPORTDATA__CTOR_OFFSET))(this, serverInfo);
		}

		::System::String* GetDisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPPORTDATA_GETDISPLAYNAME_OFFSET))(this);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPPORTDATA_GET_UID_OFFSET))(this);
		}

		::System::UInt32 get_PersonalCardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPPORTDATA_GET_PERSONALCARDID_OFFSET))(this);
		}

		::System::String* get_NickName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPPORTDATA_GET_NICKNAME_OFFSET))(this);
		}

		::RPG::Client::HeadFrameInfo* get_HeadFrameInfo()
		{
			return ((::RPG::Client::HeadFrameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPPORTDATA_GET_HEADFRAMEINFO_OFFSET))(this);
		}

		::System::String* get_RemarkName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPPORTDATA_GET_REMARKNAME_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPPORTDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::UInt32 get_SupportCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPPORTDATA_GET_SUPPORTCOUNT_OFFSET))(this);
		}

		::RPG::Client::PlayerPlatformInfo* get_PlatformInfo()
		{
			return ((::RPG::Client::PlayerPlatformInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPPORTDATA_GET_PLATFORMINFO_OFFSET))(this);
		}

		::System::Void set_PlatformInfo(::RPG::Client::PlayerPlatformInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerPlatformInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPPORTDATA_SET_PLATFORMINFO_OFFSET))(this, value);
		}

		::System::Boolean get_HasRemarkName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPPORTDATA_GET_HASREMARKNAME_OFFSET))(this);
		}

		::System::UInt32 get_HeadIconID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPPORTDATA_GET_HEADICONID_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_22;
namespace RPG::Client { class HeadFrameInfo; }
namespace RPG::Client { class PlayerPlatformInfo; }
namespace System { class String; }

#define RPG_CLIENT_SUPPORTDATA_GETDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xC947780)
#define RPG_CLIENT_SUPPORTDATA_GET_HASREMARKNAME_OFFSET UNITYSDK_OFFSET(0xC947E10)
#define RPG_CLIENT_SUPPORTDATA_GET_HEADFRAMEINFO_OFFSET UNITYSDK_OFFSET(0xC947C80)
#define RPG_CLIENT_SUPPORTDATA_GET_HEADICONID_OFFSET UNITYSDK_OFFSET(0xC947E70)
#define RPG_CLIENT_SUPPORTDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC947D50)
#define RPG_CLIENT_SUPPORTDATA_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0xC947B70)
#define RPG_CLIENT_SUPPORTDATA_GET_PERSONALCARDID_OFFSET UNITYSDK_OFFSET(0xC947C30)
#define RPG_CLIENT_SUPPORTDATA_GET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0xC947DF0)
#define RPG_CLIENT_SUPPORTDATA_GET_REMARKNAME_OFFSET UNITYSDK_OFFSET(0xC947A20)
#define RPG_CLIENT_SUPPORTDATA_GET_SUPPORTCOUNT_OFFSET UNITYSDK_OFFSET(0xC947DA0)
#define RPG_CLIENT_SUPPORTDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0xC947BE0)
#define RPG_CLIENT_SUPPORTDATA_SET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0xC947E00)
#define RPG_CLIENT_SUPPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC9476A0)

namespace RPG::Client
{
	inline static constexpr unsigned int SupportData_TypeDefinitionIndex = 60051;

	class SupportData : public ::System::Object
	{
	public:
		::RPG::Client::HeadFrameInfo* _HeadFrameInfo; // 0x10
		::RPG::Client::PlayerPlatformInfo* _PlatformInfo_k__BackingField; // 0x18
		::Class_1_21DCD4640D389503_22* _RowInfo; // 0x20

		::System::Void _ctor(::Class_1_21DCD4640D389503_22* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_22*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPPORTDATA__CTOR_OFFSET))(this, a1);
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

		::System::Void set_PlatformInfo(::RPG::Client::PlayerPlatformInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerPlatformInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPPORTDATA_SET_PLATFORMINFO_OFFSET))(this, a1);
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

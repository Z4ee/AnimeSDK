#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_870;
class Class_1_D17272E82AE804C2_207;
class Class_1_D17272E82AE804C2_791;
class Class_1_D40936EF3BF54118_84;
class Class_1_FDDE323211B0FB91;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RogueBuffData; }
namespace RPG::Client { class RogueBuffEnhanceItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEBUFFINFO_COUNTACHIVEDBUFFBYBUFFTYPE_OFFSET UNITYSDK_OFFSET(0xC772DF0)
#define RPG_CLIENT_ROGUEBUFFINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC7728B0)
#define RPG_CLIENT_ROGUEBUFFINFO_GETACHIVEDBUFFLIST_OFFSET UNITYSDK_OFFSET(0xC772C40)
#define RPG_CLIENT_ROGUEBUFFINFO_GETACHIVEDBUFF_OFFSET UNITYSDK_OFFSET(0xC772CA0)
#define RPG_CLIENT_ROGUEBUFFINFO_GETROGUEBUFFENHANCEITEM_OFFSET UNITYSDK_OFFSET(0xC772FD0)
#define RPG_CLIENT_ROGUEBUFFINFO_GET_ACHIVEDBUFFS_OFFSET UNITYSDK_OFFSET(0xC772F70)
#define RPG_CLIENT_ROGUEBUFFINFO_GET_BUFFACHIVEDDATA_OFFSET UNITYSDK_OFFSET(0xC773030)
#define RPG_CLIENT_ROGUEBUFFINFO_GET_SENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0xC773050)
#define RPG_CLIENT_ROGUEBUFFINFO_HASACHIVEDBUFF_OFFSET UNITYSDK_OFFSET(0xC772D90)
#define RPG_CLIENT_ROGUEBUFFINFO_REFRESHACHIVEDBUFFS_1_OFFSET UNITYSDK_OFFSET(0xC772AF0)
#define RPG_CLIENT_ROGUEBUFFINFO_REFRESHACHIVEDBUFFS_OFFSET UNITYSDK_OFFSET(0xC7729A0)
#define RPG_CLIENT_ROGUEBUFFINFO_REFRESHORADDACHIVEDBUFF_1_OFFSET UNITYSDK_OFFSET(0xC772B60)
#define RPG_CLIENT_ROGUEBUFFINFO_REFRESHORADDACHIVEDBUFF_OFFSET UNITYSDK_OFFSET(0xC772A10)
#define RPG_CLIENT_ROGUEBUFFINFO_REMOVEACHIVEDBUFF_1_OFFSET UNITYSDK_OFFSET(0xC772BD0)
#define RPG_CLIENT_ROGUEBUFFINFO_REMOVEACHIVEDBUFF_OFFSET UNITYSDK_OFFSET(0xC772A80)
#define RPG_CLIENT_ROGUEBUFFINFO_SETSENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0xC772860)
#define RPG_CLIENT_ROGUEBUFFINFO_SET_BUFFACHIVEDDATA_OFFSET UNITYSDK_OFFSET(0xC773040)
#define RPG_CLIENT_ROGUEBUFFINFO_SET_SENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0xC773060)
#define RPG_CLIENT_ROGUEBUFFINFO_SYNCACHIVEDBUFF_OFFSET UNITYSDK_OFFSET(0xC772910)
#define RPG_CLIENT_ROGUEBUFFINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC772820)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueBuffInfo_TypeDefinitionIndex = 62833;

	class RogueBuffInfo : public ::System::Object
	{
	public:
		::Class_1_FDDE323211B0FB91* _BuffAchivedData_k__BackingField; // 0x10
		::Class_0_16E4307DCC419505_870* _SendPacketCmd_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO__CTOR_OFFSET))(this);
		}

		::System::Void SetSendPacketCmd(::Class_0_16E4307DCC419505_870* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_870*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_SETSENDPACKETCMD_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncAchivedBuff(::Class_1_D40936EF3BF54118_84* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_84*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_SYNCACHIVEDBUFF_OFFSET))(this, a1);
		}

		::System::Void RefreshAchivedBuffs(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_791*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_791*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_REFRESHACHIVEDBUFFS_OFFSET))(this, a1);
		}

		::System::Void RefreshOrAddAchivedBuff(::Class_1_D17272E82AE804C2_791* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_791*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_REFRESHORADDACHIVEDBUFF_OFFSET))(this, a1);
		}

		::System::Void RemoveAchivedBuff(::Class_1_D17272E82AE804C2_791* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_791*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_REMOVEACHIVEDBUFF_OFFSET))(this, a1);
		}

		::System::Void RefreshAchivedBuffs_1(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_207*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_207*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_REFRESHACHIVEDBUFFS_1_OFFSET))(this, a1);
		}

		::System::Void RefreshOrAddAchivedBuff_1(::Class_1_D17272E82AE804C2_207* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_207*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_REFRESHORADDACHIVEDBUFF_1_OFFSET))(this, a1);
		}

		::System::Void RemoveAchivedBuff_1(::Class_1_D17272E82AE804C2_207* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_207*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_REMOVEACHIVEDBUFF_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* GetAchivedBuffList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_GETACHIVEDBUFFLIST_OFFSET))(this);
		}

		::RPG::Client::RogueBuffData* GetAchivedBuff(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueBuffData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_GETACHIVEDBUFF_OFFSET))(this, a1);
		}

		::System::Boolean HasAchivedBuff(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_HASACHIVEDBUFF_OFFSET))(this, a1);
		}

		::System::UInt32 CountAchivedBuffByBuffType(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_COUNTACHIVEDBUFFBYBUFFTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::RogueBuffEnhanceItem* GetRogueBuffEnhanceItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueBuffEnhanceItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_GETROGUEBUFFENHANCEITEM_OFFSET))(this, a1);
		}

		::Class_1_FDDE323211B0FB91* get_BuffAchivedData()
		{
			return ((::Class_1_FDDE323211B0FB91*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_GET_BUFFACHIVEDDATA_OFFSET))(this);
		}

		::System::Void set_BuffAchivedData(::Class_1_FDDE323211B0FB91* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FDDE323211B0FB91*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_SET_BUFFACHIVEDDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* get_AchivedBuffs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_GET_ACHIVEDBUFFS_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_870* get_SendPacketCmd()
		{
			return ((::Class_0_16E4307DCC419505_870*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_GET_SENDPACKETCMD_OFFSET))(this);
		}

		::System::Void set_SendPacketCmd(::Class_0_16E4307DCC419505_870* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_870*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_SET_SENDPACKETCMD_OFFSET))(this, a1);
		}
	};
}

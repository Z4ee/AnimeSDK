#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_708;
class Class_1_1F79CAF7D066E7B3;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEPICKAVATARINFO_ADDPICKAVATAR_OFFSET UNITYSDK_OFFSET(0xA3481A0)
#define RPG_CLIENT_ROGUEPICKAVATARINFO_ADDPICKTRIALAVATAR_OFFSET UNITYSDK_OFFSET(0xA348270)
#define RPG_CLIENT_ROGUEPICKAVATARINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA35AD30)
#define RPG_CLIENT_ROGUEPICKAVATARINFO_GET_PICKAVATARIDS_OFFSET UNITYSDK_OFFSET(0xA35B190)
#define RPG_CLIENT_ROGUEPICKAVATARINFO_GET_PICKTRIALAVATARIDS_OFFSET UNITYSDK_OFFSET(0xA35B1B0)
#define RPG_CLIENT_ROGUEPICKAVATARINFO_GET_SENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0xA35B1D0)
#define RPG_CLIENT_ROGUEPICKAVATARINFO_REFRESHPICKAVATARS_OFFSET UNITYSDK_OFFSET(0xA35AE40)
#define RPG_CLIENT_ROGUEPICKAVATARINFO_REFRESHPICKTRIALAVATARS_OFFSET UNITYSDK_OFFSET(0xA35AF70)
#define RPG_CLIENT_ROGUEPICKAVATARINFO_SETSENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0xA35ACE0)
#define RPG_CLIENT_ROGUEPICKAVATARINFO_SET_PICKAVATARIDS_OFFSET UNITYSDK_OFFSET(0xA35B1A0)
#define RPG_CLIENT_ROGUEPICKAVATARINFO_SET_PICKTRIALAVATARIDS_OFFSET UNITYSDK_OFFSET(0xA35B1C0)
#define RPG_CLIENT_ROGUEPICKAVATARINFO_SET_SENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0xA35B1E0)
#define RPG_CLIENT_ROGUEPICKAVATARINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xA35ADD0)
#define RPG_CLIENT_ROGUEPICKAVATARINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA35AC40)

namespace RPG::Client
{
	inline static constexpr unsigned int RoguePickAvatarInfo_TypeDefinitionIndex = 54678;

	class RoguePickAvatarInfo : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_708* _SendPacketCmd_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _PickAvatarIDs_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _PickTrialAvatarIDs_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO__CTOR_OFFSET))(this);
		}

		::System::Void SetSendPacketCmd(::Class_0_16E4307DCC419505_708* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_708*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_SETSENDPACKETCMD_OFFSET))(this, cmd);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_1F79CAF7D066E7B3* gameLineupInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1F79CAF7D066E7B3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_SYNC_OFFSET))(this, gameLineupInfo);
		}

		::System::Void RefreshPickAvatars(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* avatarIDs)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_REFRESHPICKAVATARS_OFFSET))(this, avatarIDs);
		}

		::System::Void RefreshPickTrialAvatars(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* trialAvatarIDs)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_REFRESHPICKTRIALAVATARS_OFFSET))(this, trialAvatarIDs);
		}

		::System::Void AddPickAvatar(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_ADDPICKAVATAR_OFFSET))(this, avatarID);
		}

		::System::Void AddPickTrialAvatar(::System::UInt32 trialAvatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_ADDPICKTRIALAVATAR_OFFSET))(this, trialAvatarID);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_PickAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_GET_PICKAVATARIDS_OFFSET))(this);
		}

		::System::Void set_PickAvatarIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_SET_PICKAVATARIDS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_PickTrialAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_GET_PICKTRIALAVATARIDS_OFFSET))(this);
		}

		::System::Void set_PickTrialAvatarIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_SET_PICKTRIALAVATARIDS_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_708* get_SendPacketCmd()
		{
			return ((::Class_0_16E4307DCC419505_708*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_GET_SENDPACKETCMD_OFFSET))(this);
		}

		::System::Void set_SendPacketCmd(::Class_0_16E4307DCC419505_708* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_708*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_SET_SENDPACKETCMD_OFFSET))(this, value);
		}
	};
}

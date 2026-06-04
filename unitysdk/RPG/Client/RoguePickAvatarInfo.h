#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_859;
class Class_1_FB75FBA8125F3AC5;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEPICKAVATARINFO_ADDPICKAVATAR_OFFSET UNITYSDK_OFFSET(0xC7CF060)
#define RPG_CLIENT_ROGUEPICKAVATARINFO_ADDPICKTRIALAVATAR_OFFSET UNITYSDK_OFFSET(0xC7CF1D0)
#define RPG_CLIENT_ROGUEPICKAVATARINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC7E1AC0)
#define RPG_CLIENT_ROGUEPICKAVATARINFO_GET_PICKAVATARIDS_OFFSET UNITYSDK_OFFSET(0xC7E1E80)
#define RPG_CLIENT_ROGUEPICKAVATARINFO_GET_PICKTRIALAVATARIDS_OFFSET UNITYSDK_OFFSET(0xC7E1EA0)
#define RPG_CLIENT_ROGUEPICKAVATARINFO_GET_SENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0xC7E1EC0)
#define RPG_CLIENT_ROGUEPICKAVATARINFO_REFRESHPICKAVATARS_OFFSET UNITYSDK_OFFSET(0xC7E1BB0)
#define RPG_CLIENT_ROGUEPICKAVATARINFO_REFRESHPICKTRIALAVATARS_OFFSET UNITYSDK_OFFSET(0xC7E1CB0)
#define RPG_CLIENT_ROGUEPICKAVATARINFO_SETSENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0xC7E1A70)
#define RPG_CLIENT_ROGUEPICKAVATARINFO_SET_PICKAVATARIDS_OFFSET UNITYSDK_OFFSET(0xC7E1E90)
#define RPG_CLIENT_ROGUEPICKAVATARINFO_SET_PICKTRIALAVATARIDS_OFFSET UNITYSDK_OFFSET(0xC7E1EB0)
#define RPG_CLIENT_ROGUEPICKAVATARINFO_SET_SENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0xC7E1ED0)
#define RPG_CLIENT_ROGUEPICKAVATARINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xC7E1B40)
#define RPG_CLIENT_ROGUEPICKAVATARINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC7E19D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoguePickAvatarInfo_TypeDefinitionIndex = 62799;

	class RoguePickAvatarInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _PickTrialAvatarIDs_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _PickAvatarIDs_k__BackingField; // 0x18
		::Class_0_16E4307DCC419505_859* _SendPacketCmd_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO__CTOR_OFFSET))(this);
		}

		::System::Void SetSendPacketCmd(::Class_0_16E4307DCC419505_859* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_859*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_SETSENDPACKETCMD_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_FB75FBA8125F3AC5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FB75FBA8125F3AC5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void RefreshPickAvatars(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_REFRESHPICKAVATARS_OFFSET))(this, a1);
		}

		::System::Void RefreshPickTrialAvatars(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_REFRESHPICKTRIALAVATARS_OFFSET))(this, a1);
		}

		::System::Void AddPickAvatar(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_ADDPICKAVATAR_OFFSET))(this, a1);
		}

		::System::Void AddPickTrialAvatar(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_ADDPICKTRIALAVATAR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_PickAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_GET_PICKAVATARIDS_OFFSET))(this);
		}

		::System::Void set_PickAvatarIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_SET_PICKAVATARIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_PickTrialAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_GET_PICKTRIALAVATARIDS_OFFSET))(this);
		}

		::System::Void set_PickTrialAvatarIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_SET_PICKTRIALAVATARIDS_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_859* get_SendPacketCmd()
		{
			return ((::Class_0_16E4307DCC419505_859*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_GET_SENDPACKETCMD_OFFSET))(this);
		}

		::System::Void set_SendPacketCmd(::Class_0_16E4307DCC419505_859* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_859*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPICKAVATARINFO_SET_SENDPACKETCMD_OFFSET))(this, a1);
		}
	};
}

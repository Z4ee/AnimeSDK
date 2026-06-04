#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_860;
class Class_1_355A2207C3B7A99D_78;
class Class_1_C74059A83466814F;
namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEREVIVEAVATARINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC7E32E0)
#define RPG_CLIENT_ROGUEREVIVEAVATARINFO_GET_REVIVEAVATARCOSTITEMS_OFFSET UNITYSDK_OFFSET(0xC7E36D0)
#define RPG_CLIENT_ROGUEREVIVEAVATARINFO_GET_SENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0xC7E36F0)
#define RPG_CLIENT_ROGUEREVIVEAVATARINFO_REFRESHREVIVEAVATARINFO_1_OFFSET UNITYSDK_OFFSET(0xC7E3350)
#define RPG_CLIENT_ROGUEREVIVEAVATARINFO_REFRESHREVIVEAVATARINFO_2_OFFSET UNITYSDK_OFFSET(0xC7E35A0)
#define RPG_CLIENT_ROGUEREVIVEAVATARINFO_REFRESHREVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0xC7CF510)
#define RPG_CLIENT_ROGUEREVIVEAVATARINFO_SETSENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0xC7E3290)
#define RPG_CLIENT_ROGUEREVIVEAVATARINFO_SET_REVIVEAVATARCOSTITEMS_OFFSET UNITYSDK_OFFSET(0xC7E36E0)
#define RPG_CLIENT_ROGUEREVIVEAVATARINFO_SET_SENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0xC7E3700)
#define RPG_CLIENT_ROGUEREVIVEAVATARINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC7E3280)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueReviveAvatarInfo_TypeDefinitionIndex = 62800;

	class RogueReviveAvatarInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* _ReviveAvatarCostItems_k__BackingField; // 0x10
		::Class_0_16E4307DCC419505_860* _SendPacketCmd_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEREVIVEAVATARINFO__CTOR_OFFSET))(this);
		}

		::System::Void SetSendPacketCmd(::Class_0_16E4307DCC419505_860* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_860*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEREVIVEAVATARINFO_SETSENDPACKETCMD_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEREVIVEAVATARINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshReviveAvatarInfo(::Class_1_355A2207C3B7A99D_78* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_78*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEREVIVEAVATARINFO_REFRESHREVIVEAVATARINFO_OFFSET))(this, a1);
		}

		::System::Void RefreshReviveAvatarInfo_1(::Class_1_C74059A83466814F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C74059A83466814F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEREVIVEAVATARINFO_REFRESHREVIVEAVATARINFO_1_OFFSET))(this, a1);
		}

		::System::Void RefreshReviveAvatarInfo_2(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEREVIVEAVATARINFO_REFRESHREVIVEAVATARINFO_2_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* get_ReviveAvatarCostItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEREVIVEAVATARINFO_GET_REVIVEAVATARCOSTITEMS_OFFSET))(this);
		}

		::System::Void set_ReviveAvatarCostItems(::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEREVIVEAVATARINFO_SET_REVIVEAVATARCOSTITEMS_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_860* get_SendPacketCmd()
		{
			return ((::Class_0_16E4307DCC419505_860*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEREVIVEAVATARINFO_GET_SENDPACKETCMD_OFFSET))(this);
		}

		::System::Void set_SendPacketCmd(::Class_0_16E4307DCC419505_860* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_860*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEREVIVEAVATARINFO_SET_SENDPACKETCMD_OFFSET))(this, a1);
		}
	};
}

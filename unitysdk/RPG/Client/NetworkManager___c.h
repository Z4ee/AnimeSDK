#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B87448D5E720C3DE.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_7;
class Class_1_D17272E82AE804C2_113;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class GlobalDispatchData_ServerData; }
namespace RPG::Client::ActivityIdleLive { class SpEquipSlotData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_NETWORKMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x182616E0)
#define RPG_CLIENT_NETWORKMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18261710)
#define RPG_CLIENT_NETWORKMANAGER___C__SENDIDLELIVEREPLACETEAMCSREQ_B__167_0_OFFSET UNITYSDK_OFFSET(0x182617B0)
#define RPG_CLIENT_NETWORKMANAGER___C__SENDIDLELIVESTARTDUNGEONCSREQ_B__180_0_OFFSET UNITYSDK_OFFSET(0x182617E0)
#define RPG_CLIENT_NETWORKMANAGER___C__SENDIDLELIVESTARTDUNGEONCSREQ_B__180_1_OFFSET UNITYSDK_OFFSET(0x18261810)
#define RPG_CLIENT_NETWORKMANAGER___C__SENDPVEBATTLERESULTCSREQ_B__360_0_OFFSET UNITYSDK_OFFSET(0x182618A0)
#define RPG_CLIENT_NETWORKMANAGER___C__SENDROGUEMAGICREVIVEAVATARCSREQ_B__1031_0_OFFSET UNITYSDK_OFFSET(0x18261910)
#define RPG_CLIENT_NETWORKMANAGER___C__SETRECOMMANDSERVERBYPINGANDREGION_B__66_0_OFFSET UNITYSDK_OFFSET(0x18261790)
#define RPG_CLIENT_NETWORKMANAGER___C___ONGLOBALDISPATCHRESPONSE_B__59_0_OFFSET UNITYSDK_OFFSET(0x18261720)

namespace RPG::Client
{
	inline static constexpr unsigned int NetworkManager___c_TypeDefinitionIndex = 66260;

	class NetworkManager___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GlobalDispatchData_ServerData*, ::System::Int64>** StaticGet___9__66_0()
		{
			return (::System::Func_2<::RPG::Client::GlobalDispatchData_ServerData*, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(NetworkManager___c_TypeDefinitionIndex)->GetStaticField(0x5FF20);
		}
		static ::System::Func_2<::Struct_2_B87448D5E720C3DE, ::Class_1_21DCD4640D389503_7*>** StaticGet___9__360_0()
		{
			return (::System::Func_2<::Struct_2_B87448D5E720C3DE, ::Class_1_21DCD4640D389503_7*>**)Il2CppClass::FromTypeDefinitionIndex(NetworkManager___c_TypeDefinitionIndex)->GetStaticField(0x5FF28);
		}
		static ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::UInt32>** StaticGet___9__1031_0()
		{
			return (::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(NetworkManager___c_TypeDefinitionIndex)->GetStaticField(0x5FF30);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::SpEquipSlotData*, ::Class_1_D17272E82AE804C2_113*>** StaticGet___9__180_1()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::SpEquipSlotData*, ::Class_1_D17272E82AE804C2_113*>**)Il2CppClass::FromTypeDefinitionIndex(NetworkManager___c_TypeDefinitionIndex)->GetStaticField(0x5FF38);
		}
		static ::RPG::Client::NetworkManager___c** StaticGet___9()
		{
			return (::RPG::Client::NetworkManager___c**)Il2CppClass::FromTypeDefinitionIndex(NetworkManager___c_TypeDefinitionIndex)->GetStaticField(0x5FF40);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::Class_1_D17272E82AE804C2_113*>** StaticGet___9__167_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::Class_1_D17272E82AE804C2_113*>**)Il2CppClass::FromTypeDefinitionIndex(NetworkManager___c_TypeDefinitionIndex)->GetStaticField(0x5FF48);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::Class_1_D17272E82AE804C2_113*>** StaticGet___9__180_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::Class_1_D17272E82AE804C2_113*>**)Il2CppClass::FromTypeDefinitionIndex(NetworkManager___c_TypeDefinitionIndex)->GetStaticField(0x5FF50);
		}
		static ::System::Func_2<::RPG::Client::GlobalDispatchData_ServerData*, ::System::Boolean>** StaticGet___9__59_0()
		{
			return (::System::Func_2<::RPG::Client::GlobalDispatchData_ServerData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NetworkManager___c_TypeDefinitionIndex)->GetStaticField(0x5FF58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __OnGlobalDispatchResponse_b__59_0(::RPG::Client::GlobalDispatchData_ServerData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GlobalDispatchData_ServerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C___ONGLOBALDISPATCHRESPONSE_B__59_0_OFFSET))(this, a1);
		}

		::System::Int64 _SetRecommandServerByPingAndRegion_b__66_0(::RPG::Client::GlobalDispatchData_ServerData* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::RPG::Client::GlobalDispatchData_ServerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__SETRECOMMANDSERVERBYPINGANDREGION_B__66_0_OFFSET))(this, a1);
		}

		::Class_1_D17272E82AE804C2_113* _SendIdleLiveReplaceTeamCsReq_b__167_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::Class_1_D17272E82AE804C2_113*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__SENDIDLELIVEREPLACETEAMCSREQ_B__167_0_OFFSET))(this, a1);
		}

		::Class_1_D17272E82AE804C2_113* _SendIdleLiveStartDungeonCsReq_b__180_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::Class_1_D17272E82AE804C2_113*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__SENDIDLELIVESTARTDUNGEONCSREQ_B__180_0_OFFSET))(this, a1);
		}

		::Class_1_D17272E82AE804C2_113* _SendIdleLiveStartDungeonCsReq_b__180_1(::RPG::Client::ActivityIdleLive::SpEquipSlotData* a1)
		{
			return ((::Class_1_D17272E82AE804C2_113*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpEquipSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__SENDIDLELIVESTARTDUNGEONCSREQ_B__180_1_OFFSET))(this, a1);
		}

		::Class_1_21DCD4640D389503_7* _SendPVEBattleResultCsReq_b__360_0(::Struct_2_B87448D5E720C3DE a1)
		{
			return ((::Class_1_21DCD4640D389503_7*(*)(::PVOID, ::Struct_2_B87448D5E720C3DE))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__SENDPVEBATTLERESULTCSREQ_B__360_0_OFFSET))(this, a1);
		}

		::System::UInt32 _SendRogueMagicReviveAvatarCsReq_b__1031_0(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__SENDROGUEMAGICREVIVEAVATARCSREQ_B__1031_0_OFFSET))(this, a1);
		}
	};
}

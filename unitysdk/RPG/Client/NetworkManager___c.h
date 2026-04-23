#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B87448D5E720C3DE.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_102;
class Class_1_EBB10EC01CCC4716_5;
namespace RPG::Client { class GlobalDispatchData_ServerData; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client::ActivityIdleLive { class SpEquipSlotData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_NETWORKMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xABD3110)
#define RPG_CLIENT_NETWORKMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xABD3140)
#define RPG_CLIENT_NETWORKMANAGER___C__SENDIDLELIVEREPLACETEAMCSREQ_B__167_0_OFFSET UNITYSDK_OFFSET(0xABD31E0)
#define RPG_CLIENT_NETWORKMANAGER___C__SENDIDLELIVESTARTDUNGEONCSREQ_B__180_0_OFFSET UNITYSDK_OFFSET(0xABD3210)
#define RPG_CLIENT_NETWORKMANAGER___C__SENDIDLELIVESTARTDUNGEONCSREQ_B__180_1_OFFSET UNITYSDK_OFFSET(0xABD3240)
#define RPG_CLIENT_NETWORKMANAGER___C__SENDPVEBATTLERESULTCSREQ_B__376_0_OFFSET UNITYSDK_OFFSET(0xABD3290)
#define RPG_CLIENT_NETWORKMANAGER___C__SENDROGUEMAGICREVIVEAVATARCSREQ_B__1013_0_OFFSET UNITYSDK_OFFSET(0xABD3300)
#define RPG_CLIENT_NETWORKMANAGER___C__SETRECOMMANDSERVERBYPINGANDREGION_B__66_0_OFFSET UNITYSDK_OFFSET(0xABD31C0)
#define RPG_CLIENT_NETWORKMANAGER___C___ONGLOBALDISPATCHRESPONSE_B__59_0_OFFSET UNITYSDK_OFFSET(0xABD3150)

namespace RPG::Client
{
	inline static constexpr unsigned int NetworkManager___c_TypeDefinitionIndex = 63938;

	class NetworkManager___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Struct_2_B87448D5E720C3DE, ::Class_1_EBB10EC01CCC4716_5*>** StaticGet___9__376_0()
		{
			return (::System::Func_2<::Struct_2_B87448D5E720C3DE, ::Class_1_EBB10EC01CCC4716_5*>**)Il2CppClass::FromTypeDefinitionIndex(NetworkManager___c_TypeDefinitionIndex)->GetStaticField(0x51130);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::SpEquipSlotData*, ::Class_1_D17272E82AE804C2_102*>** StaticGet___9__180_1()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::SpEquipSlotData*, ::Class_1_D17272E82AE804C2_102*>**)Il2CppClass::FromTypeDefinitionIndex(NetworkManager___c_TypeDefinitionIndex)->GetStaticField(0x51138);
		}
		static ::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::UInt32>** StaticGet___9__1013_0()
		{
			return (::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(NetworkManager___c_TypeDefinitionIndex)->GetStaticField(0x51140);
		}
		static ::System::Func_2<::RPG::Client::GlobalDispatchData_ServerData*, ::System::Boolean>** StaticGet___9__59_0()
		{
			return (::System::Func_2<::RPG::Client::GlobalDispatchData_ServerData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NetworkManager___c_TypeDefinitionIndex)->GetStaticField(0x51148);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::Class_1_D17272E82AE804C2_102*>** StaticGet___9__167_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::Class_1_D17272E82AE804C2_102*>**)Il2CppClass::FromTypeDefinitionIndex(NetworkManager___c_TypeDefinitionIndex)->GetStaticField(0x51150);
		}
		static ::RPG::Client::NetworkManager___c** StaticGet___9()
		{
			return (::RPG::Client::NetworkManager___c**)Il2CppClass::FromTypeDefinitionIndex(NetworkManager___c_TypeDefinitionIndex)->GetStaticField(0x51158);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::Class_1_D17272E82AE804C2_102*>** StaticGet___9__180_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::Class_1_D17272E82AE804C2_102*>**)Il2CppClass::FromTypeDefinitionIndex(NetworkManager___c_TypeDefinitionIndex)->GetStaticField(0x51160);
		}
		static ::System::Func_2<::RPG::Client::GlobalDispatchData_ServerData*, ::System::Int64>** StaticGet___9__66_0()
		{
			return (::System::Func_2<::RPG::Client::GlobalDispatchData_ServerData*, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(NetworkManager___c_TypeDefinitionIndex)->GetStaticField(0x51168);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __OnGlobalDispatchResponse_b__59_0(::RPG::Client::GlobalDispatchData_ServerData* r)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GlobalDispatchData_ServerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C___ONGLOBALDISPATCHRESPONSE_B__59_0_OFFSET))(this, r);
		}

		::System::Int64 _SetRecommandServerByPingAndRegion_b__66_0(::RPG::Client::GlobalDispatchData_ServerData* a)
		{
			return ((::System::Int64(*)(::PVOID, ::RPG::Client::GlobalDispatchData_ServerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__SETRECOMMANDSERVERBYPINGANDREGION_B__66_0_OFFSET))(this, a);
		}

		::Class_1_D17272E82AE804C2_102* _SendIdleLiveReplaceTeamCsReq_b__167_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> item)
		{
			return ((::Class_1_D17272E82AE804C2_102*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__SENDIDLELIVEREPLACETEAMCSREQ_B__167_0_OFFSET))(this, item);
		}

		::Class_1_D17272E82AE804C2_102* _SendIdleLiveStartDungeonCsReq_b__180_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> item)
		{
			return ((::Class_1_D17272E82AE804C2_102*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__SENDIDLELIVESTARTDUNGEONCSREQ_B__180_0_OFFSET))(this, item);
		}

		::Class_1_D17272E82AE804C2_102* _SendIdleLiveStartDungeonCsReq_b__180_1(::RPG::Client::ActivityIdleLive::SpEquipSlotData* item)
		{
			return ((::Class_1_D17272E82AE804C2_102*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpEquipSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__SENDIDLELIVESTARTDUNGEONCSREQ_B__180_1_OFFSET))(this, item);
		}

		::Class_1_EBB10EC01CCC4716_5* _SendPVEBattleResultCsReq_b__376_0(::Struct_2_B87448D5E720C3DE x)
		{
			return ((::Class_1_EBB10EC01CCC4716_5*(*)(::PVOID, ::Struct_2_B87448D5E720C3DE))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__SENDPVEBATTLERESULTCSREQ_B__376_0_OFFSET))(this, x);
		}

		::System::UInt32 _SendRogueMagicReviveAvatarCsReq_b__1013_0(::RPG::Client::IAvatarInfoProvider* avatar)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__SENDROGUEMAGICREVIVEAVATARCSREQ_B__1013_0_OFFSET))(this, avatar);
		}
	};
}

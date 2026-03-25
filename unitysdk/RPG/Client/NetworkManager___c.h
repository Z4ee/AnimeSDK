#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B87448D5E720C3DE.h"
#include "unitysdk/System/Object.h"

class Class_1_EBB10EC01CCC4716_3;
namespace RPG::Client { class GlobalDispatchData_ServerData; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_NETWORKMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9E85AC0)
#define RPG_CLIENT_NETWORKMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9E85AF0)
#define RPG_CLIENT_NETWORKMANAGER___C__SENDPVEBATTLERESULTCSREQ_B__333_0_OFFSET UNITYSDK_OFFSET(0x9E85B90)
#define RPG_CLIENT_NETWORKMANAGER___C__SENDROGUEMAGICREVIVEAVATARCSREQ_B__941_0_OFFSET UNITYSDK_OFFSET(0x9E85C00)
#define RPG_CLIENT_NETWORKMANAGER___C__SETRECOMMANDSERVERBYPINGANDREGION_B__66_0_OFFSET UNITYSDK_OFFSET(0x9E85B70)
#define RPG_CLIENT_NETWORKMANAGER___C___ONGLOBALDISPATCHRESPONSE_B__59_0_OFFSET UNITYSDK_OFFSET(0x9E85B00)

namespace RPG::Client
{
	inline static constexpr unsigned int NetworkManager___c_TypeDefinitionIndex = 56694;

	class NetworkManager___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::UInt32>** StaticGet___9__941_0()
		{
			return (::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(NetworkManager___c_TypeDefinitionIndex)->GetStaticField(0x44060);
		}
		static ::System::Func_2<::Struct_2_B87448D5E720C3DE, ::Class_1_EBB10EC01CCC4716_3*>** StaticGet___9__333_0()
		{
			return (::System::Func_2<::Struct_2_B87448D5E720C3DE, ::Class_1_EBB10EC01CCC4716_3*>**)Il2CppClass::FromTypeDefinitionIndex(NetworkManager___c_TypeDefinitionIndex)->GetStaticField(0x44068);
		}
		static ::System::Func_2<::RPG::Client::GlobalDispatchData_ServerData*, ::System::Boolean>** StaticGet___9__59_0()
		{
			return (::System::Func_2<::RPG::Client::GlobalDispatchData_ServerData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NetworkManager___c_TypeDefinitionIndex)->GetStaticField(0x44070);
		}
		static ::RPG::Client::NetworkManager___c** StaticGet___9()
		{
			return (::RPG::Client::NetworkManager___c**)Il2CppClass::FromTypeDefinitionIndex(NetworkManager___c_TypeDefinitionIndex)->GetStaticField(0x44078);
		}
		static ::System::Func_2<::RPG::Client::GlobalDispatchData_ServerData*, ::System::Int64>** StaticGet___9__66_0()
		{
			return (::System::Func_2<::RPG::Client::GlobalDispatchData_ServerData*, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(NetworkManager___c_TypeDefinitionIndex)->GetStaticField(0x44080);
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

		::Class_1_EBB10EC01CCC4716_3* _SendPVEBattleResultCsReq_b__333_0(::Struct_2_B87448D5E720C3DE x)
		{
			return ((::Class_1_EBB10EC01CCC4716_3*(*)(::PVOID, ::Struct_2_B87448D5E720C3DE))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__SENDPVEBATTLERESULTCSREQ_B__333_0_OFFSET))(this, x);
		}

		::System::UInt32 _SendRogueMagicReviveAvatarCsReq_b__941_0(::RPG::Client::IAvatarInfoProvider* avatar)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__SENDROGUEMAGICREVIVEAVATARCSREQ_B__941_0_OFFSET))(this, avatar);
		}
	};
}

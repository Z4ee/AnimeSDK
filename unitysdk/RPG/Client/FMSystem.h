#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_549;
class Class_0_16E4307DCC419505_550;
class Class_1_74F7A8BE5C5500BF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_FMSYSTEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCE58EA0)
#define RPG_CLIENT_FMSYSTEM_GET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0xCE59B50)
#define RPG_CLIENT_FMSYSTEM_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xCE58700)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_140DE6169D1DECCE_OFFSET UNITYSDK_OFFSET(0xCE59330)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0xCE57650)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_244BC2CA6DC57505_OFFSET UNITYSDK_OFFSET(0xCE587A0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_30BE3523CF9B739E_1_OFFSET UNITYSDK_OFFSET(0xCE575A0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_30BE3523CF9B739E_OFFSET UNITYSDK_OFFSET(0xCE57260)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_400F35719779E796_OFFSET UNITYSDK_OFFSET(0xCE59900)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_518C6F1B8C5A6FFD_1_OFFSET UNITYSDK_OFFSET(0xCE574B0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_518C6F1B8C5A6FFD_OFFSET UNITYSDK_OFFSET(0xCE57170)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_5466C2B94F8B36FC_OFFSET UNITYSDK_OFFSET(0xCE59460)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_838396E16A1F8A0F_1_OFFSET UNITYSDK_OFFSET(0xCE555B0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_838396E16A1F8A0F_OFFSET UNITYSDK_OFFSET(0xCE560B0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_87D695987E98317C_1_OFFSET UNITYSDK_OFFSET(0xCE56580)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_87D695987E98317C_OFFSET UNITYSDK_OFFSET(0xCE57B80)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_9A0D510306ACF303_OFFSET UNITYSDK_OFFSET(0xCE580E0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_BD22CF6620FEF6E4_OFFSET UNITYSDK_OFFSET(0xCE56190)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_C500D4625B94583C_OFFSET UNITYSDK_OFFSET(0xCE590D0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xCE58720)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xCE58760)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCE586C0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_D3B8CF0C6A611E3A_1_OFFSET UNITYSDK_OFFSET(0xCE57310)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_D3B8CF0C6A611E3A_OFFSET UNITYSDK_OFFSET(0xCE56FD0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_D902FB55DC3AAD05_OFFSET UNITYSDK_OFFSET(0xCE57980)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_FCAE7D0A63C8DDC3_OFFSET UNITYSDK_OFFSET(0xCE55740)
#define RPG_CLIENT_FMSYSTEM_SET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0xCE59B60)
#define RPG_CLIENT_FMSYSTEM_SET_ISVALID_OFFSET UNITYSDK_OFFSET(0xCE58710)
#define RPG_CLIENT_FMSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xCE59B70)

namespace RPG::Client
{
	inline static constexpr unsigned int FMSystem_TypeDefinitionIndex = 60903;

	class FMSystem : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_550*>* _CustomChannelSources; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_549*>* _CustomChannelClients; // 0x18
		::System::Boolean _IsValid_k__BackingField; // 0x20
		::System::Boolean _IsPause_k__BackingField; // 0x21
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_550*>* _ChannelSources; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_550*>* _ActiveChannelSources; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_74F7A8BE5C5500BF*>* _ChannelReceivers; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_D3B8CF0C6A611E3A(::System::String* a1, ::Class_0_16E4307DCC419505_550* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_550*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_D3B8CF0C6A611E3A_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_518C6F1B8C5A6FFD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_518C6F1B8C5A6FFD_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_550* Method_1_30BE3523CF9B739E(::System::String* a1)
		{
			return ((::Class_0_16E4307DCC419505_550*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_30BE3523CF9B739E_OFFSET))(this, a1);
		}

		::System::Void Method_1_D3B8CF0C6A611E3A_1(::System::String* a1, ::Class_0_16E4307DCC419505_549* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_549*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_D3B8CF0C6A611E3A_1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_518C6F1B8C5A6FFD_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_518C6F1B8C5A6FFD_1_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_549* Method_1_30BE3523CF9B739E_1(::System::String* a1)
		{
			return ((::Class_0_16E4307DCC419505_549*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_30BE3523CF9B739E_1_OFFSET))(this, a1);
		}

		::System::Void Method_1_1F130271093617A5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_1F130271093617A5_OFFSET))(this);
		}

		static ::RPG::Client::FMSystem* Method_1_D902FB55DC3AAD05()
		{
			return ((::RPG::Client::FMSystem*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_D902FB55DC3AAD05_OFFSET))();
		}

		static ::System::Boolean Method_1_838396E16A1F8A0F(::Class_0_16E4307DCC419505_550* a1)
		{
			return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_550*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_838396E16A1F8A0F_OFFSET))(a1);
		}

		static ::System::Boolean Method_1_838396E16A1F8A0F_1(::Class_0_16E4307DCC419505_549* a1)
		{
			return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_549*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_838396E16A1F8A0F_1_OFFSET))(a1);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_GET_ISVALID_OFFSET))(this);
		}

		::System::Void set_IsValid(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_SET_ISVALID_OFFSET))(this, a1);
		}

		::System::Void Method_1_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
		}

		::System::Void Method_1_244BC2CA6DC57505(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_244BC2CA6DC57505_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_DISPOSE_OFFSET))(this);
		}

		::System::Void Method_1_87D695987E98317C(::Class_0_16E4307DCC419505_550* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_550*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_87D695987E98317C_OFFSET))(this, a1);
		}

		::System::Void Method_1_87D695987E98317C_1(::Class_0_16E4307DCC419505_550* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_550*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_87D695987E98317C_1_OFFSET))(this, a1);
		}

		::System::Void Method_1_BD22CF6620FEF6E4(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_BD22CF6620FEF6E4_OFFSET))(this, a1);
		}

		::System::Void Method_1_C500D4625B94583C(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_C500D4625B94583C_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_140DE6169D1DECCE(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_140DE6169D1DECCE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_9A0D510306ACF303(::Class_0_16E4307DCC419505_549* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_549*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_9A0D510306ACF303_OFFSET))(this, a1);
		}

		::System::Void Method_1_FCAE7D0A63C8DDC3(::Class_0_16E4307DCC419505_549* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_549*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_FCAE7D0A63C8DDC3_OFFSET))(this, a1);
		}

		::System::Void Method_1_5466C2B94F8B36FC(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_5466C2B94F8B36FC_OFFSET))(this, a1);
		}

		::System::Void Method_1_400F35719779E796(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_400F35719779E796_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_GET_ISPAUSE_OFFSET))(this);
		}

		::System::Void set_IsPause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_SET_ISPAUSE_OFFSET))(this, a1);
		}
	};
}

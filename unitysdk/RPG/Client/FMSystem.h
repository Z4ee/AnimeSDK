#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_403;
class Class_0_16E4307DCC419505_404;
class Class_1_74F7A8BE5C5500BF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_FMSYSTEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB968BC0)
#define RPG_CLIENT_FMSYSTEM_GET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0xB969620)
#define RPG_CLIENT_FMSYSTEM_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xB968520)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0xB967870)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_27C2887D49F6F6B3_OFFSET UNITYSDK_OFFSET(0xB968130)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_30BE3523CF9B739E_1_OFFSET UNITYSDK_OFFSET(0xB9677C0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_30BE3523CF9B739E_OFFSET UNITYSDK_OFFSET(0xB967480)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_400F35719779E796_OFFSET UNITYSDK_OFFSET(0xB9693D0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_518C6F1B8C5A6FFD_1_OFFSET UNITYSDK_OFFSET(0xB9676D0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_518C6F1B8C5A6FFD_OFFSET UNITYSDK_OFFSET(0xB967390)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_5466C2B94F8B36FC_OFFSET UNITYSDK_OFFSET(0xB968FF0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_838396E16A1F8A0F_1_OFFSET UNITYSDK_OFFSET(0xB965660)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_838396E16A1F8A0F_OFFSET UNITYSDK_OFFSET(0xB966240)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_87D695987E98317C_1_OFFSET UNITYSDK_OFFSET(0xB9666C0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_87D695987E98317C_OFFSET UNITYSDK_OFFSET(0xB967D40)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_89F155ADF08BB250_OFFSET UNITYSDK_OFFSET(0xB967BA0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_A4E70CB481BCC07A_OFFSET UNITYSDK_OFFSET(0xB9657F0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_B815CC8D577760D2_OFFSET UNITYSDK_OFFSET(0xB9685C0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_BD22CF6620FEF6E4_OFFSET UNITYSDK_OFFSET(0xB966320)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB968540)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xB968580)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB9684E0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_D3B8CF0C6A611E3A_1_OFFSET UNITYSDK_OFFSET(0xB967530)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_D3B8CF0C6A611E3A_OFFSET UNITYSDK_OFFSET(0xB9671F0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_E1C787AF75EB04DB_OFFSET UNITYSDK_OFFSET(0xB968DF0)
#define RPG_CLIENT_FMSYSTEM_SET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0xB969630)
#define RPG_CLIENT_FMSYSTEM_SET_ISVALID_OFFSET UNITYSDK_OFFSET(0xB968530)
#define RPG_CLIENT_FMSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB969640)

namespace RPG::Client
{
	inline static constexpr unsigned int FMSystem_TypeDefinitionIndex = 56926;

	class FMSystem : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_404*>* _CustomChannelSources; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_403*>* _CustomChannelClients; // 0x18
		::System::Boolean _IsValid_k__BackingField; // 0x20
		::System::Boolean _IsPause_k__BackingField; // 0x21
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_404*>* _ChannelSources; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_404*>* _ActiveChannelSources; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_74F7A8BE5C5500BF*>* _ChannelReceivers; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_D3B8CF0C6A611E3A(::System::String* a1, ::Class_0_16E4307DCC419505_404* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_404*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_D3B8CF0C6A611E3A_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_518C6F1B8C5A6FFD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_518C6F1B8C5A6FFD_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_404* Method_1_30BE3523CF9B739E(::System::String* a1)
		{
			return ((::Class_0_16E4307DCC419505_404*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_30BE3523CF9B739E_OFFSET))(this, a1);
		}

		::System::Void Method_1_D3B8CF0C6A611E3A_1(::System::String* a1, ::Class_0_16E4307DCC419505_403* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_403*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_D3B8CF0C6A611E3A_1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_518C6F1B8C5A6FFD_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_518C6F1B8C5A6FFD_1_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_403* Method_1_30BE3523CF9B739E_1(::System::String* a1)
		{
			return ((::Class_0_16E4307DCC419505_403*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_30BE3523CF9B739E_1_OFFSET))(this, a1);
		}

		::System::Void Method_1_1F130271093617A5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_1F130271093617A5_OFFSET))(this);
		}

		static ::RPG::Client::FMSystem* Method_1_89F155ADF08BB250()
		{
			return ((::RPG::Client::FMSystem*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_89F155ADF08BB250_OFFSET))();
		}

		static ::System::Boolean Method_1_838396E16A1F8A0F(::Class_0_16E4307DCC419505_404* a1)
		{
			return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_404*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_838396E16A1F8A0F_OFFSET))(a1);
		}

		static ::System::Boolean Method_1_838396E16A1F8A0F_1(::Class_0_16E4307DCC419505_403* a1)
		{
			return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_403*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_838396E16A1F8A0F_1_OFFSET))(a1);
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

		::System::Void Method_1_B815CC8D577760D2(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_B815CC8D577760D2_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_DISPOSE_OFFSET))(this);
		}

		::System::Void Method_1_87D695987E98317C(::Class_0_16E4307DCC419505_404* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_404*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_87D695987E98317C_OFFSET))(this, a1);
		}

		::System::Void Method_1_87D695987E98317C_1(::Class_0_16E4307DCC419505_404* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_404*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_87D695987E98317C_1_OFFSET))(this, a1);
		}

		::System::Void Method_1_BD22CF6620FEF6E4(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_BD22CF6620FEF6E4_OFFSET))(this, a1);
		}

		::System::Void Method_1_E1C787AF75EB04DB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_E1C787AF75EB04DB_OFFSET))(this, a1);
		}

		::System::Void Method_1_27C2887D49F6F6B3(::Class_0_16E4307DCC419505_403* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_403*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_27C2887D49F6F6B3_OFFSET))(this, a1);
		}

		::System::Void Method_1_A4E70CB481BCC07A(::Class_0_16E4307DCC419505_403* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_403*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_A4E70CB481BCC07A_OFFSET))(this, a1);
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

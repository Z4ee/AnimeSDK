#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_462;
class Class_0_16E4307DCC419505_463;
class Class_1_74F7A8BE5C5500BF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_FMSYSTEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF125F0)
#define RPG_CLIENT_FMSYSTEM_GET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0xCF13170)
#define RPG_CLIENT_FMSYSTEM_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xCF11E50)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0xCF10DA0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_244BC2CA6DC57505_OFFSET UNITYSDK_OFFSET(0xCF11EF0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_400F35719779E796_OFFSET UNITYSDK_OFFSET(0xCF12F20)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_5466C2B94F8B36FC_OFFSET UNITYSDK_OFFSET(0xCF12A80)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_7EDBC63FC2BC53F4_1_OFFSET UNITYSDK_OFFSET(0xCF10B90)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_7EDBC63FC2BC53F4_OFFSET UNITYSDK_OFFSET(0xCF107B0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_838396E16A1F8A0F_1_OFFSET UNITYSDK_OFFSET(0xCF0EBC0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_838396E16A1F8A0F_OFFSET UNITYSDK_OFFSET(0xCF0F6C0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_87D695987E98317C_1_OFFSET UNITYSDK_OFFSET(0xCF0FB90)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_87D695987E98317C_OFFSET UNITYSDK_OFFSET(0xCF112D0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_9A0D510306ACF303_OFFSET UNITYSDK_OFFSET(0xCF11830)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_ADE9B05D0E6295A7_1_OFFSET UNITYSDK_OFFSET(0xCF10CC0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_ADE9B05D0E6295A7_OFFSET UNITYSDK_OFFSET(0xCF108E0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_BD22CF6620FEF6E4_OFFSET UNITYSDK_OFFSET(0xCF0F7A0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_C500D4625B94583C_OFFSET UNITYSDK_OFFSET(0xCF12820)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xCF11E70)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xCF11EB0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCF11E10)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_D3B8CF0C6A611E3A_1_OFFSET UNITYSDK_OFFSET(0xCF109C0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_D3B8CF0C6A611E3A_OFFSET UNITYSDK_OFFSET(0xCF105E0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_D902FB55DC3AAD05_OFFSET UNITYSDK_OFFSET(0xCF110D0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_FCAE7D0A63C8DDC3_OFFSET UNITYSDK_OFFSET(0xCF0ED50)
#define RPG_CLIENT_FMSYSTEM_SET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0xCF13180)
#define RPG_CLIENT_FMSYSTEM_SET_ISVALID_OFFSET UNITYSDK_OFFSET(0xCF11E60)
#define RPG_CLIENT_FMSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xCF13190)

namespace RPG::Client
{
	inline static constexpr unsigned int FMSystem_TypeDefinitionIndex = 61000;

	class FMSystem : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_463*>* _CustomChannelSources; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_462*>* _CustomChannelClients; // 0x18
		::System::Boolean _IsValid_k__BackingField; // 0x20
		::System::Boolean _IsPause_k__BackingField; // 0x21
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_463*>* _ChannelSources; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_463*>* _ActiveChannelSources; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_74F7A8BE5C5500BF*>* _ChannelReceivers; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_D3B8CF0C6A611E3A(::System::String* a1, ::Class_0_16E4307DCC419505_463* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_463*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_D3B8CF0C6A611E3A_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_7EDBC63FC2BC53F4(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_7EDBC63FC2BC53F4_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_463* Method_1_ADE9B05D0E6295A7(::System::String* a1)
		{
			return ((::Class_0_16E4307DCC419505_463*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_ADE9B05D0E6295A7_OFFSET))(this, a1);
		}

		::System::Void Method_1_D3B8CF0C6A611E3A_1(::System::String* a1, ::Class_0_16E4307DCC419505_462* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_462*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_D3B8CF0C6A611E3A_1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_7EDBC63FC2BC53F4_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_7EDBC63FC2BC53F4_1_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_462* Method_1_ADE9B05D0E6295A7_1(::System::String* a1)
		{
			return ((::Class_0_16E4307DCC419505_462*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_ADE9B05D0E6295A7_1_OFFSET))(this, a1);
		}

		::System::Void Method_1_1F130271093617A5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_1F130271093617A5_OFFSET))(this);
		}

		static ::RPG::Client::FMSystem* Method_1_D902FB55DC3AAD05()
		{
			return ((::RPG::Client::FMSystem*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_D902FB55DC3AAD05_OFFSET))();
		}

		static ::System::Boolean Method_1_838396E16A1F8A0F(::Class_0_16E4307DCC419505_463* a1)
		{
			return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_463*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_838396E16A1F8A0F_OFFSET))(a1);
		}

		static ::System::Boolean Method_1_838396E16A1F8A0F_1(::Class_0_16E4307DCC419505_462* a1)
		{
			return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_462*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_838396E16A1F8A0F_1_OFFSET))(a1);
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

		::System::Void Method_1_87D695987E98317C(::Class_0_16E4307DCC419505_463* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_463*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_87D695987E98317C_OFFSET))(this, a1);
		}

		::System::Void Method_1_87D695987E98317C_1(::Class_0_16E4307DCC419505_463* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_463*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_87D695987E98317C_1_OFFSET))(this, a1);
		}

		::System::Void Method_1_BD22CF6620FEF6E4(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_BD22CF6620FEF6E4_OFFSET))(this, a1);
		}

		::System::Void Method_1_C500D4625B94583C(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_C500D4625B94583C_OFFSET))(this, a1);
		}

		::System::Void Method_1_9A0D510306ACF303(::Class_0_16E4307DCC419505_462* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_462*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_9A0D510306ACF303_OFFSET))(this, a1);
		}

		::System::Void Method_1_FCAE7D0A63C8DDC3(::Class_0_16E4307DCC419505_462* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_462*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_FCAE7D0A63C8DDC3_OFFSET))(this, a1);
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

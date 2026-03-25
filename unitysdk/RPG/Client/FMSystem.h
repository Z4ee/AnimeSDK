#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_377;
class Class_0_16E4307DCC419505_378;
class Class_1_74F7A8BE5C5500BF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_FMSYSTEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9658D30)
#define RPG_CLIENT_FMSYSTEM_GET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0x96597C0)
#define RPG_CLIENT_FMSYSTEM_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x9658620)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_2439B52C953E2E46_OFFSET UNITYSDK_OFFSET(0x96579E0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_261814E9E5018383_1_OFFSET UNITYSDK_OFFSET(0x96575D0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_261814E9E5018383_OFFSET UNITYSDK_OFFSET(0x96571C0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_2767989B1782DE75_OFFSET UNITYSDK_OFFSET(0x96595B0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_422BC3370982FBE0_OFFSET UNITYSDK_OFFSET(0x96591E0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_44932B303F1165E9_OFFSET UNITYSDK_OFFSET(0x9657D40)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_7EDBC63FC2BC53F4_1_OFFSET UNITYSDK_OFFSET(0x96577B0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_7EDBC63FC2BC53F4_OFFSET UNITYSDK_OFFSET(0x96573A0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_838396E16A1F8A0F_1_OFFSET UNITYSDK_OFFSET(0x96555E0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_838396E16A1F8A0F_OFFSET UNITYSDK_OFFSET(0x9656190)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_87D695987E98317C_1_OFFSET UNITYSDK_OFFSET(0x9656640)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_87D695987E98317C_2_OFFSET UNITYSDK_OFFSET(0x96581F0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_87D695987E98317C_OFFSET UNITYSDK_OFFSET(0x9657ED0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_88E99A17C817F5C9_OFFSET UNITYSDK_OFFSET(0x96586C0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_ADE9B05D0E6295A7_1_OFFSET UNITYSDK_OFFSET(0x96578F0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_ADE9B05D0E6295A7_OFFSET UNITYSDK_OFFSET(0x96574E0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_BD22CF6620FEF6E4_OFFSET UNITYSDK_OFFSET(0x9658FA0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_BEF2D00B46C3636D_OFFSET UNITYSDK_OFFSET(0x9656260)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x9658640)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x9658680)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x96585E0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_FCAE7D0A63C8DDC3_OFFSET UNITYSDK_OFFSET(0x9655770)
#define RPG_CLIENT_FMSYSTEM_SET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0x96597D0)
#define RPG_CLIENT_FMSYSTEM_SET_ISVALID_OFFSET UNITYSDK_OFFSET(0x9658630)
#define RPG_CLIENT_FMSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x96597E0)

namespace RPG::Client
{
	inline static constexpr unsigned int FMSystem_TypeDefinitionIndex = 49367;

	class FMSystem : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_378*>* _CustomChannelSources; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_377*>* _CustomChannelClients; // 0x18
		::System::Boolean _IsValid_k__BackingField; // 0x20
		::System::Boolean _IsPause_k__BackingField; // 0x21
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_378*>* _ChannelSources; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_378*>* _ActiveChannelSources; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_74F7A8BE5C5500BF*>* _ChannelReceivers; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_261814E9E5018383(::System::String* a1, ::Class_0_16E4307DCC419505_378* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_378*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_261814E9E5018383_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_7EDBC63FC2BC53F4(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_7EDBC63FC2BC53F4_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_378* Method_1_ADE9B05D0E6295A7(::System::String* a1)
		{
			return ((::Class_0_16E4307DCC419505_378*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_ADE9B05D0E6295A7_OFFSET))(this, a1);
		}

		::System::Void Method_1_261814E9E5018383_1(::System::String* a1, ::Class_0_16E4307DCC419505_377* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_377*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_261814E9E5018383_1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_7EDBC63FC2BC53F4_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_7EDBC63FC2BC53F4_1_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_377* Method_1_ADE9B05D0E6295A7_1(::System::String* a1)
		{
			return ((::Class_0_16E4307DCC419505_377*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_ADE9B05D0E6295A7_1_OFFSET))(this, a1);
		}

		::System::Void Method_1_2439B52C953E2E46()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_2439B52C953E2E46_OFFSET))(this);
		}

		static ::RPG::Client::FMSystem* Method_1_44932B303F1165E9()
		{
			return ((::RPG::Client::FMSystem*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_44932B303F1165E9_OFFSET))();
		}

		static ::System::Boolean Method_1_838396E16A1F8A0F(::Class_0_16E4307DCC419505_378* a1)
		{
			return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_378*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_838396E16A1F8A0F_OFFSET))(a1);
		}

		static ::System::Boolean Method_1_838396E16A1F8A0F_1(::Class_0_16E4307DCC419505_377* a1)
		{
			return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_377*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_838396E16A1F8A0F_1_OFFSET))(a1);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_GET_ISVALID_OFFSET))(this);
		}

		::System::Void set_IsValid(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_SET_ISVALID_OFFSET))(this, value);
		}

		::System::Void Method_1_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
		}

		::System::Void Method_1_88E99A17C817F5C9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_88E99A17C817F5C9_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_DISPOSE_OFFSET))(this);
		}

		::System::Void Method_1_87D695987E98317C(::Class_0_16E4307DCC419505_378* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_378*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_87D695987E98317C_OFFSET))(this, a1);
		}

		::System::Void Method_1_87D695987E98317C_1(::Class_0_16E4307DCC419505_378* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_378*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_87D695987E98317C_1_OFFSET))(this, a1);
		}

		::System::Void Method_1_BEF2D00B46C3636D(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_BEF2D00B46C3636D_OFFSET))(this, a1);
		}

		::System::Void Method_1_BD22CF6620FEF6E4(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_BD22CF6620FEF6E4_OFFSET))(this, a1);
		}

		::System::Void Method_1_87D695987E98317C_2(::Class_0_16E4307DCC419505_377* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_377*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_87D695987E98317C_2_OFFSET))(this, a1);
		}

		::System::Void Method_1_FCAE7D0A63C8DDC3(::Class_0_16E4307DCC419505_377* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_377*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_FCAE7D0A63C8DDC3_OFFSET))(this, a1);
		}

		::System::Void Method_1_422BC3370982FBE0(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_422BC3370982FBE0_OFFSET))(this, a1);
		}

		::System::Void Method_1_2767989B1782DE75(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_2767989B1782DE75_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_GET_ISPAUSE_OFFSET))(this);
		}

		::System::Void set_IsPause(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_SET_ISPAUSE_OFFSET))(this, value);
		}
	};
}

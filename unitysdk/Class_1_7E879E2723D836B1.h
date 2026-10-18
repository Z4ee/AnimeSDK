#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeRace/CakeRaceUIType.h"
#include "unitysdk/RPG/Client/UILayer.h"
#include "unitysdk/System/Object.h"

class Class_1_2568E3CEAD1BEC7A;
namespace RPG::Client { class LuaUIGameFlowContext; }
namespace RPG::Client::CakeRace { class CakeRaceGameFlow; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7E879E2723D836B1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB799540)
#define CLASS_1_7E879E2723D836B1_METHOD_1_003BD591B1C368CB_OFFSET UNITYSDK_OFFSET(0xB79B940)
#define CLASS_1_7E879E2723D836B1_METHOD_1_1FAC85E77B149E13_OFFSET UNITYSDK_OFFSET(0xB79B190)
#define CLASS_1_7E879E2723D836B1_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xB799590)
#define CLASS_1_7E879E2723D836B1_METHOD_1_48DFFE87859ABA7E_OFFSET UNITYSDK_OFFSET(0xB799220)
#define CLASS_1_7E879E2723D836B1_METHOD_1_53D7AA571E5DE975_OFFSET UNITYSDK_OFFSET(0xB79B380)
#define CLASS_1_7E879E2723D836B1_METHOD_1_5CC2F06278AB10F1_OFFSET UNITYSDK_OFFSET(0xB799840)
#define CLASS_1_7E879E2723D836B1_METHOD_1_5D868BBF71F36CB2_OFFSET UNITYSDK_OFFSET(0xB799890)
#define CLASS_1_7E879E2723D836B1_METHOD_1_67F4204E24FCEC7D_OFFSET UNITYSDK_OFFSET(0xB79A990)
#define CLASS_1_7E879E2723D836B1_METHOD_1_6CCA5F124416D9D5_OFFSET UNITYSDK_OFFSET(0xB79ADD0)
#define CLASS_1_7E879E2723D836B1_METHOD_1_87D9AD9D5C50B4D9_OFFSET UNITYSDK_OFFSET(0xB799EE0)
#define CLASS_1_7E879E2723D836B1_METHOD_1_88270C2640C14535_OFFSET UNITYSDK_OFFSET(0xB799710)
#define CLASS_1_7E879E2723D836B1_METHOD_1_9E163F4C281BBEF6_OFFSET UNITYSDK_OFFSET(0xB799BA0)
#define CLASS_1_7E879E2723D836B1_METHOD_1_A8D19485AA054B2A_OFFSET UNITYSDK_OFFSET(0xB7993B0)
#define CLASS_1_7E879E2723D836B1_METHOD_1_B32AE923D9AD8630_OFFSET UNITYSDK_OFFSET(0xB799E00)
#define CLASS_1_7E879E2723D836B1_METHOD_1_B51DDBA0992433B6_OFFSET UNITYSDK_OFFSET(0xB79A1E0)
#define CLASS_1_7E879E2723D836B1_METHOD_1_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0xB7992D0)
#define CLASS_1_7E879E2723D836B1_METHOD_1_B65AC51B2FA83B37_OFFSET UNITYSDK_OFFSET(0xB799A00)
#define CLASS_1_7E879E2723D836B1_METHOD_1_C58932284750650A_OFFSET UNITYSDK_OFFSET(0xB79A660)
#define CLASS_1_7E879E2723D836B1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB7996A0)
#define CLASS_1_7E879E2723D836B1_METHOD_1_D458C0B2682F3322_OFFSET UNITYSDK_OFFSET(0xB799A60)
#define CLASS_1_7E879E2723D836B1_METHOD_1_D7A684E848304BB4_OFFSET UNITYSDK_OFFSET(0xB799F20)
#define CLASS_1_7E879E2723D836B1_METHOD_1_D964CEFF421C67C0_OFFSET UNITYSDK_OFFSET(0xB79A250)
#define CLASS_1_7E879E2723D836B1_METHOD_1_F1B82A12429A21BF_OFFSET UNITYSDK_OFFSET(0xB79A100)
#define CLASS_1_7E879E2723D836B1_METHOD_1_F72BC937B893688C_OFFSET UNITYSDK_OFFSET(0xB79A9D0)
#define CLASS_1_7E879E2723D836B1_METHOD_1_FFB6E2A5FCB91D4D_1_OFFSET UNITYSDK_OFFSET(0xB79AF70)
#define CLASS_1_7E879E2723D836B1_METHOD_1_FFB6E2A5FCB91D4D_OFFSET UNITYSDK_OFFSET(0xB79AA30)
#define CLASS_1_7E879E2723D836B1__CTOR_OFFSET UNITYSDK_OFFSET(0xB7994B0)
#define CLASS_1_7E879E2723D836B1__TRYASYNCSHOWUIFROMENTRANCE_B__28_0_OFFSET UNITYSDK_OFFSET(0xB79B990)

inline static constexpr unsigned int Class_1_7E879E2723D836B1_TypeDefinitionIndex = 76454;

class Class_1_7E879E2723D836B1 : public ::System::Object
{
public:
	::RPG::Client::Promises::IPromise* EJMEANAGOEE; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::Client::CakeRace::CakeRaceUIType, ::RPG::Client::LuaUIGameFlowContext*>* CMEMEFOLKFL; // 0x18
	::RPG::Client::LuaUIGameFlowContext* IMPKDFFGLGM; // 0x20
	::RPG::Client::Promises::IPromise* CHPKBAIKLKH; // 0x28
	::RPG::Client::CakeRace::CakeRaceUIType ICIAMAFJPDA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E879E2723D836B1__CTOR_OFFSET))(this);
	}

	::RPG::Client::CakeRace::CakeRaceGameFlow* Method_1_48DFFE87859ABA7E()
	{
		return ((::RPG::Client::CakeRace::CakeRaceGameFlow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E879E2723D836B1_METHOD_1_48DFFE87859ABA7E_OFFSET))(this);
	}

	::Class_1_2568E3CEAD1BEC7A* Method_1_B64C60973842FE45()
	{
		return ((::Class_1_2568E3CEAD1BEC7A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E879E2723D836B1_METHOD_1_B64C60973842FE45_OFFSET))(this);
	}

	static ::Class_1_7E879E2723D836B1* Method_1_A8D19485AA054B2A()
	{
		return ((::Class_1_7E879E2723D836B1*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E879E2723D836B1_METHOD_1_A8D19485AA054B2A_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E879E2723D836B1_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E879E2723D836B1_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_5CC2F06278AB10F1(::RPG::Client::LuaUIGameFlowContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LuaUIGameFlowContext*))((::PBYTE)hIl2Cpp + CLASS_1_7E879E2723D836B1_METHOD_1_5CC2F06278AB10F1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B65AC51B2FA83B37(::RPG::Client::LuaUIGameFlowContext* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LuaUIGameFlowContext*))((::PBYTE)hIl2Cpp + CLASS_1_7E879E2723D836B1_METHOD_1_B65AC51B2FA83B37_OFFSET))(this, a1);
	}

	::RPG::Client::LuaUIGameFlowContext* Method_1_D458C0B2682F3322(::RPG::Client::CakeRace::CakeRaceUIType a1)
	{
		return ((::RPG::Client::LuaUIGameFlowContext*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType))((::PBYTE)hIl2Cpp + CLASS_1_7E879E2723D836B1_METHOD_1_D458C0B2682F3322_OFFSET))(this, a1);
	}

	::RPG::Client::LuaUIGameFlowContext* Method_1_9E163F4C281BBEF6(::RPG::Client::CakeRace::CakeRaceUIType a1)
	{
		return ((::RPG::Client::LuaUIGameFlowContext*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType))((::PBYTE)hIl2Cpp + CLASS_1_7E879E2723D836B1_METHOD_1_9E163F4C281BBEF6_OFFSET))(this, a1);
	}

	::System::Void Method_1_B32AE923D9AD8630(::RPG::Client::LuaUIGameFlowContext*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LuaUIGameFlowContext*&))((::PBYTE)hIl2Cpp + CLASS_1_7E879E2723D836B1_METHOD_1_B32AE923D9AD8630_OFFSET))(this, a1);
	}

	::System::Void Method_1_88270C2640C14535(::RPG::Client::CakeRace::CakeRaceUIType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType))((::PBYTE)hIl2Cpp + CLASS_1_7E879E2723D836B1_METHOD_1_88270C2640C14535_OFFSET))(this, a1);
	}

	::System::Void Method_1_5D868BBF71F36CB2(::RPG::Client::LuaUIGameFlowContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LuaUIGameFlowContext*))((::PBYTE)hIl2Cpp + CLASS_1_7E879E2723D836B1_METHOD_1_5D868BBF71F36CB2_OFFSET))(this, a1);
	}

	static ::System::String* Method_1_87D9AD9D5C50B4D9(::RPG::Client::CakeRace::CakeRaceUIType a1)
	{
		return ((::System::String*(*)(::RPG::Client::CakeRace::CakeRaceUIType))((::PBYTE)hIl2Cpp + CLASS_1_7E879E2723D836B1_METHOD_1_87D9AD9D5C50B4D9_OFFSET))(a1);
	}

	static ::System::String* Method_1_D7A684E848304BB4(::RPG::Client::CakeRace::CakeRaceUIType a1)
	{
		return ((::System::String*(*)(::RPG::Client::CakeRace::CakeRaceUIType))((::PBYTE)hIl2Cpp + CLASS_1_7E879E2723D836B1_METHOD_1_D7A684E848304BB4_OFFSET))(a1);
	}

	static ::RPG::Client::UILayer Method_1_F1B82A12429A21BF(::RPG::Client::CakeRace::CakeRaceUIType a1)
	{
		return ((::RPG::Client::UILayer(*)(::RPG::Client::CakeRace::CakeRaceUIType))((::PBYTE)hIl2Cpp + CLASS_1_7E879E2723D836B1_METHOD_1_F1B82A12429A21BF_OFFSET))(a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_B51DDBA0992433B6(::RPG::Client::CakeRace::CakeRaceUIType a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_7E879E2723D836B1_METHOD_1_B51DDBA0992433B6_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_1_D964CEFF421C67C0(::RPG::Client::CakeRace::CakeRaceUIType a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_7E879E2723D836B1_METHOD_1_D964CEFF421C67C0_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_1_C58932284750650A(::RPG::Client::CakeRace::CakeRaceUIType a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_7E879E2723D836B1_METHOD_1_C58932284750650A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_67F4204E24FCEC7D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E879E2723D836B1_METHOD_1_67F4204E24FCEC7D_OFFSET))(this);
	}

	::System::Boolean Method_1_F72BC937B893688C(::RPG::Client::CakeRace::CakeRaceUIType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType))((::PBYTE)hIl2Cpp + CLASS_1_7E879E2723D836B1_METHOD_1_F72BC937B893688C_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::Promises::IPromise*>* Method_1_FFB6E2A5FCB91D4D(::RPG::Client::CakeRace::CakeRaceUIType a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_7E879E2723D836B1_METHOD_1_FFB6E2A5FCB91D4D_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_1_6CCA5F124416D9D5(::RPG::Client::CakeRace::CakeRaceUIType a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_7E879E2723D836B1_METHOD_1_6CCA5F124416D9D5_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::RPG::Client::Promises::IPromise*>* Method_1_FFB6E2A5FCB91D4D_1(::RPG::Client::CakeRace::CakeRaceUIType a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_7E879E2723D836B1_METHOD_1_FFB6E2A5FCB91D4D_1_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_1_1FAC85E77B149E13(::RPG::Client::CakeRace::CakeRaceUIType a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_7E879E2723D836B1_METHOD_1_1FAC85E77B149E13_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_1_53D7AA571E5DE975(::RPG::Client::CakeRace::CakeRaceUIType a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_7E879E2723D836B1_METHOD_1_53D7AA571E5DE975_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E879E2723D836B1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_003BD591B1C368CB(::RPG::Client::CakeRace::CakeRaceUIType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceUIType))((::PBYTE)hIl2Cpp + CLASS_1_7E879E2723D836B1_METHOD_1_003BD591B1C368CB_OFFSET))(this, a1);
	}

	::System::Void _TryAsyncShowUIFromEntrance_b__28_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E879E2723D836B1__TRYASYNCSHOWUIFROMENTRANCE_B__28_0_OFFSET))(this);
	}
};

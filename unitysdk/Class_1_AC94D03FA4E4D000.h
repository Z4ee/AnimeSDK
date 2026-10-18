#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AC94D03FA4E4D000_DeviceInputType.h"
#include "unitysdk/Class_2_4ECEAC2E03C4560A_NpcShowState.h"
#include "unitysdk/Class_2_4ECEAC2E03C4560A_NpcStateControlSource.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingInstanceNotifyType.h"
#include "unitysdk/RPG/Client/TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
class Class_1_8A6989C352B0F0F0;
class Class_1_B338251AE5C2EEC8;
class Class_1_BC2A32B558A4FA5E;
namespace RPG::Client { class EraFlipperCommonConfig; }
namespace RPG::Client { class FlipDevicePoint; }
namespace RPG::Client { class PartialFlipDeviceComponent; }
namespace RPG::Client { class TimeSpaceCrisscrossAdditionsMonoPlugin; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_AC94D03FA4E4D000_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB307DF0)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_06D1E9AF28B5846F_OFFSET UNITYSDK_OFFSET(0xB3081B0)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_3789E05CE3C8CF29_OFFSET UNITYSDK_OFFSET(0xB307420)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xB307CE0)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_391A84BCD9F51317_2_OFFSET UNITYSDK_OFFSET(0xB307D20)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_391A84BCD9F51317_3_OFFSET UNITYSDK_OFFSET(0xB307D70)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_391A84BCD9F51317_4_OFFSET UNITYSDK_OFFSET(0xB307DB0)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB307CA0)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_3CAB3F134E5CEF52_OFFSET UNITYSDK_OFFSET(0xB30A580)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_4BD913AFB9634F5C_OFFSET UNITYSDK_OFFSET(0xB305160)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_5A8B223EA7063738_OFFSET UNITYSDK_OFFSET(0xB307B30)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_5C328546CB504392_OFFSET UNITYSDK_OFFSET(0xB309510)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_655DDB722F1FDE73_OFFSET UNITYSDK_OFFSET(0xB305C10)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_6715F7AFCB349BDB_OFFSET UNITYSDK_OFFSET(0xB308480)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_6A4C788A28252B28_OFFSET UNITYSDK_OFFSET(0xB30B2B0)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0xB3054F0)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_7AEA4B2B25797605_OFFSET UNITYSDK_OFFSET(0xB3087D0)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_7B8BFF2FF2582092_OFFSET UNITYSDK_OFFSET(0xB309EC0)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_80D207ED4C77468A_OFFSET UNITYSDK_OFFSET(0xB3097C0)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xB3076B0)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_8A22347D5E1449AC_OFFSET UNITYSDK_OFFSET(0xB3069B0)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_93583691E945E985_OFFSET UNITYSDK_OFFSET(0xB309E40)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0xB30A9F0)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_9AE9D0F1A19E41A8_OFFSET UNITYSDK_OFFSET(0xB30A0B0)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_9CDBAF0D5AB4A4BD_OFFSET UNITYSDK_OFFSET(0xB308E60)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_AE252E33F5F9F5F9_OFFSET UNITYSDK_OFFSET(0xB308B50)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_B06F516E4459C742_OFFSET UNITYSDK_OFFSET(0xB309B30)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_B799DB9989A18F1D_OFFSET UNITYSDK_OFFSET(0xB309390)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0xB30AAD0)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_BBAF4B070327A414_OFFSET UNITYSDK_OFFSET(0xB3088E0)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_C122055518F63AF1_OFFSET UNITYSDK_OFFSET(0xB305A00)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0xB3074B0)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_CAE0B6AE1B0E6258_OFFSET UNITYSDK_OFFSET(0xB309A50)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_CCF608E873226D0C_OFFSET UNITYSDK_OFFSET(0xB30AD90)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_DC56C980598137B4_OFFSET UNITYSDK_OFFSET(0xB308330)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_DFD7F5C5419FD422_OFFSET UNITYSDK_OFFSET(0xB30A0C0)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_EBAB6A35C21A2A5B_OFFSET UNITYSDK_OFFSET(0xB306410)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_EED323CA3E695488_OFFSET UNITYSDK_OFFSET(0xB307740)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xB308A70)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_F726AC1E08395F1A_OFFSET UNITYSDK_OFFSET(0xB30B010)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_FD3B916300F77FDA_OFFSET UNITYSDK_OFFSET(0xB307660)
#define CLASS_1_AC94D03FA4E4D000_METHOD_1_FE97A51964212110_OFFSET UNITYSDK_OFFSET(0xB309000)
#define CLASS_1_AC94D03FA4E4D000__CTOR_OFFSET UNITYSDK_OFFSET(0xB304EF0)

inline static constexpr unsigned int Class_1_AC94D03FA4E4D000_TypeDefinitionIndex = 60521;

class Class_1_AC94D03FA4E4D000 : public ::System::Object
{
public:
	::RPG::Client::EraFlipperCommonConfig* PCCAFFNJDIA; // 0x10
	::Class_1_B338251AE5C2EEC8* PJPLBAAGDBP; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::Client::PartialFlipDeviceComponent*, ::System::Int32>* JNOANAAABEM; // 0x20
	::System::Collections::Generic::List_1<::RPG::Client::TimeSpaceCrisscrossAdditionsMonoPlugin*>* OECINMCJHNL; // 0x28
	::System::Collections::Generic::Dictionary_2<::RPG::Client::PartialFlipDeviceComponent*, ::Class_1_BC2A32B558A4FA5E*>* JCKMGLMEALK; // 0x30
	::RPG::Client::Promises::Promise* HLMGFOIAFFE; // 0x38
	::RPG::Client::PartialFlipDeviceComponent* HNBBCNGNNBM; // 0x40
	::Il2CppArray<::RPG::Client::PartialFlipDeviceComponent*>* FEMMCBFCMEL; // 0x48
	::System::Boolean HNNMIKKHFKE; // 0x50
	::System::Boolean GBIGPLLOLJO; // 0x51
	::System::Boolean LOOAANPOJDG; // 0x52
	::System::Boolean KIONCABKICE; // 0x53
	::Class_1_AC94D03FA4E4D000_DeviceInputType LIDMCACHCPE; // 0x54
	::System::Boolean BFCKNLCJHHA; // 0x58
	::System::Boolean KAEJFBIPMNF; // 0x59
	::System::Boolean DDGLLDJEJBD; // 0x5A
	::System::Int64 BJPKNEBFNKG; // 0x60

	::System::Void _ctor(::RPG::Client::EraFlipperCommonConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EraFlipperCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_4BD913AFB9634F5C(::RPG::Client::PartialFlipDeviceComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_4BD913AFB9634F5C_OFFSET))(this, a1);
	}

	::System::Void Method_1_C122055518F63AF1(::RPG::Client::PartialFlipDeviceComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_C122055518F63AF1_OFFSET))(this, a1);
	}

	::System::Void Method_1_655DDB722F1FDE73()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_655DDB722F1FDE73_OFFSET))(this);
	}

	::System::Void Method_1_8A22347D5E1449AC(::Class_1_B338251AE5C2EEC8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B338251AE5C2EEC8*))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_8A22347D5E1449AC_OFFSET))(this, a1);
	}

	::System::Void Method_1_3789E05CE3C8CF29(::RPG::GameCore::EraStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EraStateType))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_3789E05CE3C8CF29_OFFSET))(this, a1);
	}

	::System::Void Method_1_FD3B916300F77FDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_FD3B916300F77FDA_OFFSET))(this);
	}

	::System::Void Method_1_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_EED323CA3E695488(::RPG::Client::PartialFlipDeviceComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_EED323CA3E695488_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5A8B223EA7063738(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_5A8B223EA7063738_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_391A84BCD9F51317_2_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_391A84BCD9F51317_3_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_391A84BCD9F51317_4_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_06D1E9AF28B5846F(::RPG::Client::PartialFlipDeviceComponent* a1, ::RPG::Client::FlipDevicePoint* a2, ::RPG::Client::FlipDevicePoint* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*, ::RPG::Client::FlipDevicePoint*, ::RPG::Client::FlipDevicePoint*))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_06D1E9AF28B5846F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6715F7AFCB349BDB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_6715F7AFCB349BDB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_AE252E33F5F9F5F9(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_AE252E33F5F9F5F9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9CDBAF0D5AB4A4BD(::RPG::Client::PartialFlipDeviceComponent* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_9CDBAF0D5AB4A4BD_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_FE97A51964212110(::RPG::GameCore::GameEntity* a1, ::RPG::Client::PartialFlipDeviceComponent*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::PartialFlipDeviceComponent*&))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_FE97A51964212110_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B799DB9989A18F1D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_B799DB9989A18F1D_OFFSET))(this);
	}

	::System::Void Method_1_5C328546CB504392(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_5C328546CB504392_OFFSET))(this, a1);
	}

	::System::Void Method_1_CAE0B6AE1B0E6258(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_CAE0B6AE1B0E6258_OFFSET))(this, a1);
	}

	::System::Void Method_1_93583691E945E985(::RPG::GameCore::GameEntity* a1, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_93583691E945E985_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single> Method_1_7B8BFF2FF2582092()
	{
		return ((::System::ValueTuple_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_7B8BFF2FF2582092_OFFSET))(this);
	}

	::System::Boolean Method_1_7AEA4B2B25797605()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_7AEA4B2B25797605_OFFSET))(this);
	}

	::RPG::Client::PartialFlipDeviceComponent* Method_1_9AE9D0F1A19E41A8()
	{
		return ((::RPG::Client::PartialFlipDeviceComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_9AE9D0F1A19E41A8_OFFSET))(this);
	}

	::System::Void Method_1_BBAF4B070327A414(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_BBAF4B070327A414_OFFSET))(this, a1);
	}

	::System::Void Method_1_B06F516E4459C742()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_B06F516E4459C742_OFFSET))(this);
	}

	::System::Void Method_1_DFD7F5C5419FD422(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_DFD7F5C5419FD422_OFFSET))(this, a1);
	}

	::System::Void Method_1_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_80D207ED4C77468A(::Class_2_4ECEAC2E03C4560A_NpcShowState a1, ::Class_2_4ECEAC2E03C4560A_NpcStateControlSource a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4ECEAC2E03C4560A_NpcShowState, ::Class_2_4ECEAC2E03C4560A_NpcStateControlSource))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_80D207ED4C77468A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3CAB3F134E5CEF52()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_3CAB3F134E5CEF52_OFFSET))(this);
	}

	::System::Void Method_1_974A70E8019154E7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_974A70E8019154E7_OFFSET))(this, a1);
	}

	::System::Void Method_1_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_749948B663FCCCEF_OFFSET))(this);
	}

	::System::Void Method_1_EBAB6A35C21A2A5B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_EBAB6A35C21A2A5B_OFFSET))(this);
	}

	::System::Void Method_1_B877181B6123B7F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_B877181B6123B7F6_OFFSET))(this);
	}

	::System::Void Method_1_CCF608E873226D0C(::Class_1_8A6989C352B0F0F0* a1, ::Class_1_303D5A33D1401D59* a2, ::UnityEngine::GameObject* a3, ::RPG::Client::OpenWorld::StreamingInstanceNotifyType a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::Class_1_303D5A33D1401D59*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingInstanceNotifyType))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_CCF608E873226D0C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_F726AC1E08395F1A(::Class_1_8A6989C352B0F0F0* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_F726AC1E08395F1A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DC56C980598137B4(::RPG::Client::PartialFlipDeviceComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_DC56C980598137B4_OFFSET))(this, a1);
	}

	::System::Void Method_1_6A4C788A28252B28(::RPG::Client::PartialFlipDeviceComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AC94D03FA4E4D000_METHOD_1_6A4C788A28252B28_OFFSET))(this, a1);
	}
};

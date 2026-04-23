#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/RtCharacterState.h"
#include "unitysdk/Struct_2_82079FEACF9406E9.h"

class Class_0_16E4307DCC419505_416;
class Class_0_16E4307DCC419505_417;
class Class_0_16E4307DCC419505_418;
class Class_1_33294BFFAE29ECA0;
class Class_1_CB933669B1B3A35B;
class Class_1_D27BF54F25500E5F;
class Class_1_E7BD46EB43F1A06F;
class Class_1_EEF18899F0DE5C2D;
class Class_2_49E3DBB7B28FBCCD;
class Class_3_881497162334D4FF;
namespace RPG::Client { class MockAnimator; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class SortedSet_1; }
namespace UnityEngine { class Animator; }

#define CLASS_2_123F4D9119B4969B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8FA6450)
#define CLASS_2_123F4D9119B4969B_GETUNEVALUATEDNEXTSTATE_OFFSET UNITYSDK_OFFSET(0x8FA51B0)
#define CLASS_2_123F4D9119B4969B_GETUNITYANIMATOR_OFFSET UNITYSDK_OFFSET(0x8FA5240)
#define CLASS_2_123F4D9119B4969B_GET_HITADDITIVELAYERINDEX_OFFSET UNITYSDK_OFFSET(0x8FA52A0)
#define CLASS_2_123F4D9119B4969B_METHOD_2_021F29D215C40ECC_OFFSET UNITYSDK_OFFSET(0x8FA65F0)
#define CLASS_2_123F4D9119B4969B_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x8FA47C0)
#define CLASS_2_123F4D9119B4969B_METHOD_2_05227A9D3187AFF9_OFFSET UNITYSDK_OFFSET(0x8FA23B0)
#define CLASS_2_123F4D9119B4969B_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x8FA33D0)
#define CLASS_2_123F4D9119B4969B_METHOD_2_0B6D58343199C42A_OFFSET UNITYSDK_OFFSET(0x8FA37C0)
#define CLASS_2_123F4D9119B4969B_METHOD_2_1183B3B73E7A53E4_OFFSET UNITYSDK_OFFSET(0x8FA3990)
#define CLASS_2_123F4D9119B4969B_METHOD_2_12478C0F85D62333_OFFSET UNITYSDK_OFFSET(0x8FA52C0)
#define CLASS_2_123F4D9119B4969B_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x8FA47D0)
#define CLASS_2_123F4D9119B4969B_METHOD_2_12CD8F956BFCC78B_OFFSET UNITYSDK_OFFSET(0x8FA5D70)
#define CLASS_2_123F4D9119B4969B_METHOD_2_15B3FFC1F404506F_OFFSET UNITYSDK_OFFSET(0x8FA3AF0)
#define CLASS_2_123F4D9119B4969B_METHOD_2_1D083CAB146B83E4_OFFSET UNITYSDK_OFFSET(0x8FA1270)
#define CLASS_2_123F4D9119B4969B_METHOD_2_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x8FA66E0)
#define CLASS_2_123F4D9119B4969B_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x8FA5FF0)
#define CLASS_2_123F4D9119B4969B_METHOD_2_254E1784F359950C_OFFSET UNITYSDK_OFFSET(0x8FA1A80)
#define CLASS_2_123F4D9119B4969B_METHOD_2_2E06C7864AB69B69_OFFSET UNITYSDK_OFFSET(0x8FA4660)
#define CLASS_2_123F4D9119B4969B_METHOD_2_2E7C0D86C81DC9BF_OFFSET UNITYSDK_OFFSET(0x8FA1D00)
#define CLASS_2_123F4D9119B4969B_METHOD_2_2FED925376FD83FF_OFFSET UNITYSDK_OFFSET(0x8FA5890)
#define CLASS_2_123F4D9119B4969B_METHOD_2_3303033EC7109040_OFFSET UNITYSDK_OFFSET(0x8FA5580)
#define CLASS_2_123F4D9119B4969B_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x8FA4600)
#define CLASS_2_123F4D9119B4969B_METHOD_2_3A0FDEA79C025BE8_OFFSET UNITYSDK_OFFSET(0x8FA60C0)
#define CLASS_2_123F4D9119B4969B_METHOD_2_3CDD0248353333ED_OFFSET UNITYSDK_OFFSET(0x8FA5920)
#define CLASS_2_123F4D9119B4969B_METHOD_2_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x8FA66D0)
#define CLASS_2_123F4D9119B4969B_METHOD_2_4F16AEBA724E7F13_1_OFFSET UNITYSDK_OFFSET(0x8FA2F80)
#define CLASS_2_123F4D9119B4969B_METHOD_2_4F16AEBA724E7F13_OFFSET UNITYSDK_OFFSET(0x8FA2300)
#define CLASS_2_123F4D9119B4969B_METHOD_2_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x8FA6550)
#define CLASS_2_123F4D9119B4969B_METHOD_2_5082EC8D5166F17C_OFFSET UNITYSDK_OFFSET(0x8FA4990)
#define CLASS_2_123F4D9119B4969B_METHOD_2_59E0939087B0349F_OFFSET UNITYSDK_OFFSET(0x8FA2130)
#define CLASS_2_123F4D9119B4969B_METHOD_2_5A62FE0CAE77DA95_OFFSET UNITYSDK_OFFSET(0x8FA3910)
#define CLASS_2_123F4D9119B4969B_METHOD_2_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x8FA11A0)
#define CLASS_2_123F4D9119B4969B_METHOD_2_63D743D6F2ACC495_OFFSET UNITYSDK_OFFSET(0x8FA40F0)
#define CLASS_2_123F4D9119B4969B_METHOD_2_683A41C5906A46A1_OFFSET UNITYSDK_OFFSET(0x8FA3030)
#define CLASS_2_123F4D9119B4969B_METHOD_2_6D443C2C40B77A2D_OFFSET UNITYSDK_OFFSET(0x8FA3F30)
#define CLASS_2_123F4D9119B4969B_METHOD_2_728AAF5EC7FAE911_OFFSET UNITYSDK_OFFSET(0x8FA2870)
#define CLASS_2_123F4D9119B4969B_METHOD_2_741837A0FB99F394_OFFSET UNITYSDK_OFFSET(0x8FA4E10)
#define CLASS_2_123F4D9119B4969B_METHOD_2_7EA127DE55AAA205_OFFSET UNITYSDK_OFFSET(0x8FA57D0)
#define CLASS_2_123F4D9119B4969B_METHOD_2_8422ABC65E83BF12_OFFSET UNITYSDK_OFFSET(0x8FA5440)
#define CLASS_2_123F4D9119B4969B_METHOD_2_8EDB7FE5AA37C50F_1_OFFSET UNITYSDK_OFFSET(0x8FA4650)
#define CLASS_2_123F4D9119B4969B_METHOD_2_8EDB7FE5AA37C50F_OFFSET UNITYSDK_OFFSET(0x8FA4570)
#define CLASS_2_123F4D9119B4969B_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x8FA3360)
#define CLASS_2_123F4D9119B4969B_METHOD_2_9FD7DB10492BF598_OFFSET UNITYSDK_OFFSET(0x8FA1620)
#define CLASS_2_123F4D9119B4969B_METHOD_2_A02A3D1AFE1ACC60_OFFSET UNITYSDK_OFFSET(0x8FA3D20)
#define CLASS_2_123F4D9119B4969B_METHOD_2_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x8FA3D90)
#define CLASS_2_123F4D9119B4969B_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x8FA3310)
#define CLASS_2_123F4D9119B4969B_METHOD_2_AC39A69E40689FBE_OFFSET UNITYSDK_OFFSET(0x8FA53E0)
#define CLASS_2_123F4D9119B4969B_METHOD_2_ACE888BF6F5BC5FD_OFFSET UNITYSDK_OFFSET(0x8FA13A0)
#define CLASS_2_123F4D9119B4969B_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x8FA1570)
#define CLASS_2_123F4D9119B4969B_METHOD_2_B1C3378D982E583B_OFFSET UNITYSDK_OFFSET(0x8FA4500)
#define CLASS_2_123F4D9119B4969B_METHOD_2_BD3078E21D74E44F_OFFSET UNITYSDK_OFFSET(0x8FA56F0)
#define CLASS_2_123F4D9119B4969B_METHOD_2_BF7707C04361A205_OFFSET UNITYSDK_OFFSET(0x8FA5290)
#define CLASS_2_123F4D9119B4969B_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x8FA4560)
#define CLASS_2_123F4D9119B4969B_METHOD_2_C8CE5AC3D0B916A6_OFFSET UNITYSDK_OFFSET(0x8FA36E0)
#define CLASS_2_123F4D9119B4969B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8FA4940)
#define CLASS_2_123F4D9119B4969B_METHOD_2_D4E6B58DEE690E8D_OFFSET UNITYSDK_OFFSET(0x8FA6660)
#define CLASS_2_123F4D9119B4969B_METHOD_2_DFCBB7847A56A016_OFFSET UNITYSDK_OFFSET(0x8FA2710)
#define CLASS_2_123F4D9119B4969B_METHOD_2_E2C273CA106EBD0B_OFFSET UNITYSDK_OFFSET(0x8FA4580)
#define CLASS_2_123F4D9119B4969B_METHOD_2_E50B6444D4744F8C_OFFSET UNITYSDK_OFFSET(0x8FA2550)
#define CLASS_2_123F4D9119B4969B_METHOD_2_E621D97D3B11AD66_OFFSET UNITYSDK_OFFSET(0x8FA3860)
#define CLASS_2_123F4D9119B4969B_METHOD_2_EB7B238EAC7391A5_OFFSET UNITYSDK_OFFSET(0x8FA2080)
#define CLASS_2_123F4D9119B4969B_METHOD_2_F45B19D3B45B936F_OFFSET UNITYSDK_OFFSET(0x8FA1E50)
#define CLASS_2_123F4D9119B4969B_METHOD_2_FEA438F16C040CED_OFFSET UNITYSDK_OFFSET(0x8FA1DB0)
#define CLASS_2_123F4D9119B4969B_QUERYSTATENORAMLIZEDSTARTTIME_OFFSET UNITYSDK_OFFSET(0x8FA51F0)
#define CLASS_2_123F4D9119B4969B_SET_HITADDITIVELAYERINDEX_OFFSET UNITYSDK_OFFSET(0x8FA52B0)
#define CLASS_2_123F4D9119B4969B_TICK_OFFSET UNITYSDK_OFFSET(0x8FA5140)
#define CLASS_2_123F4D9119B4969B__CTOR_OFFSET UNITYSDK_OFFSET(0x8FA66F0)
#define CLASS_2_123F4D9119B4969B__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x8FA6000)
#define CLASS_2_123F4D9119B4969B___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x8FA6860)
#define CLASS_2_123F4D9119B4969B___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x8FA6870)

inline static constexpr unsigned int Class_2_123F4D9119B4969B_TypeDefinitionIndex = 49746;

class Class_2_123F4D9119B4969B : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_2_1()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_123F4D9119B4969B_TypeDefinitionIndex)->GetStaticField(0x608C0);
	}
	static ::System::Collections::Generic::SortedSet_1<::System::Int32>** StaticGet_Field_2_7()
	{
		return (::System::Collections::Generic::SortedSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_123F4D9119B4969B_TypeDefinitionIndex)->GetStaticField(0x608C8);
	}
	::RPG::Client::MockAnimator* Field_2_14; // 0x18
	::System::Collections::Generic::List_1<::Class_1_EEF18899F0DE5C2D*>* Field_2_20; // 0x20
	::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* Field_2_13; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_6; // 0x30
	::Class_1_33294BFFAE29ECA0* Field_2_22; // 0x38
	::System::Collections::Generic::List_1<::Struct_2_82079FEACF9406E9>* Field_2_2; // 0x40
	::Class_3_881497162334D4FF* Field_2_25; // 0x48
	::Class_1_EEF18899F0DE5C2D* Field_2_17; // 0x50
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_417*>* Field_2_21; // 0x58
	::Class_1_EEF18899F0DE5C2D* Field_2_18; // 0x60
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_416*>* Field_2_0; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::FixPoint>* Field_2_23; // 0x70
	::Class_2_49E3DBB7B28FBCCD* Field_2_24; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_D27BF54F25500E5F*>* Field_2_16; // 0x80
	::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* Field_2_3; // 0x88
	::System::UInt32 Field_2_19; // 0x90
	::System::UInt32 Field_2_5; // 0x94
	::RPG::GameCore::FixPoint Field_2_10; // 0x98
	::System::Int32 _HitAdditiveLayerIndex_k__BackingField; // 0xA0
	::RPG::GameCore::FixPoint Field_2_11; // 0xA8
	::RPG::GameCore::FixPoint Field_2_9; // 0xB0
	::System::Boolean Field_2_4; // 0xB8
	::System::Int32 Field_2_8; // 0xBC
	::RPG::GameCore::FixPoint Field_2_12; // 0xC0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_416* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_416*))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_2_1D083CAB146B83E4(::Class_0_16E4307DCC419505_416* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_416*))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_1D083CAB146B83E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_ACE888BF6F5BC5FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_ACE888BF6F5BC5FD_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_254E1784F359950C(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_254E1784F359950C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_EB7B238EAC7391A5(::System::Int32 a1, ::System::Boolean a2, ::System::Single a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_EB7B238EAC7391A5_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_4F16AEBA724E7F13(::System::Int32 a1, ::System::Boolean a2, ::System::Single a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_4F16AEBA724E7F13_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_59E0939087B0349F(::System::Int32 a1, ::System::Boolean a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5, ::System::Single a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_59E0939087B0349F_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_05227A9D3187AFF9(::System::Int32 a1, ::System::Boolean a2, ::RPG::GameCore::FixPoint a3, ::System::Single a4, ::Class_1_EEF18899F0DE5C2D* a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::RPG::GameCore::FixPoint, ::System::Single, ::Class_1_EEF18899F0DE5C2D*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_05227A9D3187AFF9_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_E50B6444D4744F8C(::System::Int32 a1, ::System::Boolean a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5, ::System::Single a6, ::Class_1_EEF18899F0DE5C2D* a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Single, ::Class_1_EEF18899F0DE5C2D*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_E50B6444D4744F8C_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_DFCBB7847A56A016(::System::Int32 a1, ::System::String* a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_DFCBB7847A56A016_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_728AAF5EC7FAE911(::System::Int32 a1, ::System::Boolean a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5, ::System::Single a6, ::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Single, ::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_728AAF5EC7FAE911_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_4F16AEBA724E7F13_1(::System::Int32 a1, ::System::Boolean a2, ::System::Single a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_4F16AEBA724E7F13_1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_683A41C5906A46A1(::System::Int32 a1, ::System::Boolean a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5, ::System::Single a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_683A41C5906A46A1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_9FD7DB10492BF598(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_9FD7DB10492BF598_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_2E7C0D86C81DC9BF(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_2E7C0D86C81DC9BF_OFFSET))(this, a1);
	}

	::System::Void Method_2_C8CE5AC3D0B916A6(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_C8CE5AC3D0B916A6_OFFSET))(this, a1);
	}

	::System::Void Method_2_0B6D58343199C42A(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_0B6D58343199C42A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_E621D97D3B11AD66(::System::Int32 a1, ::RPG::GameCore::FixPoint& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_E621D97D3B11AD66_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_FEA438F16C040CED(::System::Int32 a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_FEA438F16C040CED_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_5A62FE0CAE77DA95(::System::Int32& a1, ::RPG::GameCore::FixPoint& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32&, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_5A62FE0CAE77DA95_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F45B19D3B45B936F(::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>*))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_F45B19D3B45B936F_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1183B3B73E7A53E4(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_1183B3B73E7A53E4_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_15B3FFC1F404506F(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_15B3FFC1F404506F_OFFSET))(this, a1);
	}

	::System::Void Method_2_A02A3D1AFE1ACC60(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_A02A3D1AFE1ACC60_OFFSET))(this, a1);
	}

	::System::Void Method_2_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	static ::System::Void Method_2_6D443C2C40B77A2D(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_6D443C2C40B77A2D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_63D743D6F2ACC495(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_63D743D6F2ACC495_OFFSET))(a1);
	}

	::RPG::GameCore::FixPoint Method_2_B1C3378D982E583B()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_B1C3378D982E583B_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_8EDB7FE5AA37C50F()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_8EDB7FE5AA37C50F_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_E2C273CA106EBD0B()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_E2C273CA106EBD0B_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_8EDB7FE5AA37C50F_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_8EDB7FE5AA37C50F_1_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_2E06C7864AB69B69()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_2E06C7864AB69B69_OFFSET))(this);
	}

	::System::UInt32 Method_2_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_5082EC8D5166F17C(::System::String* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_5082EC8D5166F17C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_741837A0FB99F394(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_741837A0FB99F394_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_TICK_OFFSET))(this, a1);
	}

	::System::Int32 GetUnevaluatedNextState()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_GETUNEVALUATEDNEXTSTATE_OFFSET))(this);
	}

	::System::Single QueryStateNoramlizedStartTime(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_QUERYSTATENORAMLIZEDSTARTTIME_OFFSET))(this, a1);
	}

	::UnityEngine::Animator* GetUnityAnimator()
	{
		return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_GETUNITYANIMATOR_OFFSET))(this);
	}

	::RPG::Client::MockAnimator* Method_2_BF7707C04361A205()
	{
		return ((::RPG::Client::MockAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_BF7707C04361A205_OFFSET))(this);
	}

	::System::Int32 get_HitAdditiveLayerIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_GET_HITADDITIVELAYERINDEX_OFFSET))(this);
	}

	::System::Void set_HitAdditiveLayerIndex(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_SET_HITADDITIVELAYERINDEX_OFFSET))(this, value);
	}

	::System::Void Method_2_12478C0F85D62333(::Class_1_EEF18899F0DE5C2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EEF18899F0DE5C2D*))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_12478C0F85D62333_OFFSET))(this, a1);
	}

	::System::Void Method_2_8422ABC65E83BF12(::Class_1_EEF18899F0DE5C2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EEF18899F0DE5C2D*))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_8422ABC65E83BF12_OFFSET))(this, a1);
	}

	::System::Void Method_2_BD3078E21D74E44F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_BD3078E21D74E44F_OFFSET))(this);
	}

	::System::Void Method_2_7EA127DE55AAA205(::Class_0_16E4307DCC419505_417* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_417*))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_7EA127DE55AAA205_OFFSET))(this, a1);
	}

	::System::Void Method_2_2FED925376FD83FF(::Class_0_16E4307DCC419505_417* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_417*))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_2FED925376FD83FF_OFFSET))(this, a1);
	}

	::System::Void Method_2_3303033EC7109040()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_3303033EC7109040_OFFSET))(this);
	}

	::System::Void Method_2_AC39A69E40689FBE(::Class_1_EEF18899F0DE5C2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EEF18899F0DE5C2D*))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_AC39A69E40689FBE_OFFSET))(this, a1);
	}

	::System::Void Method_2_3CDD0248353333ED(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_3CDD0248353333ED_OFFSET))(this, a1);
	}

	::System::Void Method_2_12CD8F956BFCC78B(::Class_1_EEF18899F0DE5C2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EEF18899F0DE5C2D*))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_12CD8F956BFCC78B_OFFSET))(this, a1);
	}

	::Class_1_EEF18899F0DE5C2D* Method_2_24748FC20F375725()
	{
		return ((::Class_1_EEF18899F0DE5C2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Void _OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void Method_2_3A0FDEA79C025BE8(::Class_0_16E4307DCC419505_418* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_418*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_3A0FDEA79C025BE8_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_5022DB1DC5AA8CB4(::Class_1_E7BD46EB43F1A06F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7BD46EB43F1A06F*))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Void Method_2_021F29D215C40ECC(::RPG::GameCore::RtCharacterState a1, ::Class_1_CB933669B1B3A35B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtCharacterState, ::Class_1_CB933669B1B3A35B*))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_021F29D215C40ECC_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::RtCharacterState Method_2_D4E6B58DEE690E8D()
	{
		return ((::RPG::GameCore::RtCharacterState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_D4E6B58DEE690E8D_OFFSET))(this);
	}

	::Class_2_49E3DBB7B28FBCCD* Method_2_43A46E5F9FAC62B8()
	{
		return ((::Class_2_49E3DBB7B28FBCCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::Class_1_33294BFFAE29ECA0* Method_2_24748FC20F375725_1()
	{
		return ((::Class_1_33294BFFAE29ECA0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B_METHOD_2_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy__OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_123F4D9119B4969B___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
	}
};

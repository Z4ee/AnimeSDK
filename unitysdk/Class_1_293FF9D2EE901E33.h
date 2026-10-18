#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GameObjectPoolReleaseMode.h"
#include "unitysdk/RPG/Client/GameObjectPoolUsage.h"
#include "unitysdk/RPG/Client/PoolGameObjectInstantiateStrategy.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_735;
class Class_1_A0302E9AE0B8A2B9;
class Class_1_A067D82B1A7452F6;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_293FF9D2EE901E33_GET_EFFECTINSTANCEBUDGETBIAS_OFFSET UNITYSDK_OFFSET(0xB683CF0)
#define CLASS_1_293FF9D2EE901E33_GET_FASTLOADMODE_OFFSET UNITYSDK_OFFSET(0xB683B00)
#define CLASS_1_293FF9D2EE901E33_GET_IGNOREINSTANCEBUDGET_OFFSET UNITYSDK_OFFSET(0xB683C70)
#define CLASS_1_293FF9D2EE901E33_GET_INSTANTIATETIMEOUTBIAS_OFFSET UNITYSDK_OFFSET(0xB683CD0)
#define CLASS_1_293FF9D2EE901E33_GET_MAXSPAWNWAITTIME_OFFSET UNITYSDK_OFFSET(0xB683CB0)
#define CLASS_1_293FF9D2EE901E33_GET_POOLAUTORELEASEINTERVAL_OFFSET UNITYSDK_OFFSET(0xB683C90)
#define CLASS_1_293FF9D2EE901E33_GET_POOLAUTORELEASEMEMORYTHRESH_OFFSET UNITYSDK_OFFSET(0xB683B20)
#define CLASS_1_293FF9D2EE901E33_GET_POOLIMMEDIATELYRELEASEMEMORYTHRESH_OFFSET UNITYSDK_OFFSET(0xB683B40)
#define CLASS_1_293FF9D2EE901E33_GET_POOLRELEASEMODE_OFFSET UNITYSDK_OFFSET(0xB683B60)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_0906715724957362_OFFSET UNITYSDK_OFFSET(0xB681C00)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xB6822E0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_1F7FE07FD068BC29_OFFSET UNITYSDK_OFFSET(0xB683C60)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_21A03208CD384BE4_OFFSET UNITYSDK_OFFSET(0xB682070)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_226842F6044F973B_OFFSET UNITYSDK_OFFSET(0xB680950)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_444E41890AF6E3D9_OFFSET UNITYSDK_OFFSET(0xB680AD0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_480A176CBCFE165D_OFFSET UNITYSDK_OFFSET(0xB682680)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_4E608ED8CF3CBCB8_OFFSET UNITYSDK_OFFSET(0xB683480)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0xB6834E0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_50BD4AA0628D1418_OFFSET UNITYSDK_OFFSET(0xB681050)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_535079AAF5EDFF62_OFFSET UNITYSDK_OFFSET(0xB683860)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_55611949792351B2_OFFSET UNITYSDK_OFFSET(0xB6816E0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_567BBDE5A68B6AA9_OFFSET UNITYSDK_OFFSET(0xB682370)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xB683AC0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_6D2BFCD0536B28C9_OFFSET UNITYSDK_OFFSET(0xB681A80)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_6EECE8924BBFC43C_OFFSET UNITYSDK_OFFSET(0xB67FFE0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_72391C982DF63FDE_OFFSET UNITYSDK_OFFSET(0xB680ED0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0xB680800)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_7AAA6FC0F0F914CF_OFFSET UNITYSDK_OFFSET(0xB6819B0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_840CB3BD5C356356_OFFSET UNITYSDK_OFFSET(0xB681B50)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_85F8DDF68F63566F_OFFSET UNITYSDK_OFFSET(0xB681410)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_890F5FC885825F9E_OFFSET UNITYSDK_OFFSET(0xB6825B0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_8C66368C6B0B8DE3_OFFSET UNITYSDK_OFFSET(0xB6833B0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_8D292F4321BB987D_OFFSET UNITYSDK_OFFSET(0xB683700)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_8D81CB4AD08D8989_OFFSET UNITYSDK_OFFSET(0xB681CE0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_8E61C4592394C6B5_OFFSET UNITYSDK_OFFSET(0xB6818A0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_90DFB50E960F023C_OFFSET UNITYSDK_OFFSET(0xB680D50)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_9C2EB68FA949105C_OFFSET UNITYSDK_OFFSET(0xB683410)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_A37E16D7D05DE5ED_OFFSET UNITYSDK_OFFSET(0xB683790)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_A7C843238612A518_OFFSET UNITYSDK_OFFSET(0xB680A60)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0xB6828E0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_C6E14CE377D03CE0_OFFSET UNITYSDK_OFFSET(0xB683970)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_C90226451A6F1539_OFFSET UNITYSDK_OFFSET(0xB680C10)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB6822A0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xB6839E0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB67FDD0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0xB6832D0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_DA1BF2C227DC3D86_1_OFFSET UNITYSDK_OFFSET(0xB683A20)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_DA1BF2C227DC3D86_2_OFFSET UNITYSDK_OFFSET(0xB683A70)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xB67FE10)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_E42C0E0E6BF738D3_OFFSET UNITYSDK_OFFSET(0xB683B80)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_E9A575D18A0748D9_1_OFFSET UNITYSDK_OFFSET(0xB67FEA0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_E9A575D18A0748D9_2_OFFSET UNITYSDK_OFFSET(0xB67FEF0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_E9A575D18A0748D9_3_OFFSET UNITYSDK_OFFSET(0xB67FF40)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_E9A575D18A0748D9_4_OFFSET UNITYSDK_OFFSET(0xB67FF90)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xB67FE50)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0xB682BC0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_F0A5621E647BE115_OFFSET UNITYSDK_OFFSET(0xB681240)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_F65C64EBA9730AB3_OFFSET UNITYSDK_OFFSET(0xB6817C0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_F87D89720FABEA8C_OFFSET UNITYSDK_OFFSET(0xB683650)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_FC1C037F0879EC12_OFFSET UNITYSDK_OFFSET(0xB681EA0)
#define CLASS_1_293FF9D2EE901E33_SET_EFFECTINSTANCEBUDGETBIAS_OFFSET UNITYSDK_OFFSET(0xB683D00)
#define CLASS_1_293FF9D2EE901E33_SET_FASTLOADMODE_OFFSET UNITYSDK_OFFSET(0xB683B10)
#define CLASS_1_293FF9D2EE901E33_SET_IGNOREINSTANCEBUDGET_OFFSET UNITYSDK_OFFSET(0xB683C80)
#define CLASS_1_293FF9D2EE901E33_SET_INSTANTIATETIMEOUTBIAS_OFFSET UNITYSDK_OFFSET(0xB683CE0)
#define CLASS_1_293FF9D2EE901E33_SET_MAXSPAWNWAITTIME_OFFSET UNITYSDK_OFFSET(0xB683CC0)
#define CLASS_1_293FF9D2EE901E33_SET_POOLAUTORELEASEINTERVAL_OFFSET UNITYSDK_OFFSET(0xB683CA0)
#define CLASS_1_293FF9D2EE901E33_SET_POOLAUTORELEASEMEMORYTHRESH_OFFSET UNITYSDK_OFFSET(0xB683B30)
#define CLASS_1_293FF9D2EE901E33_SET_POOLIMMEDIATELYRELEASEMEMORYTHRESH_OFFSET UNITYSDK_OFFSET(0xB683B50)
#define CLASS_1_293FF9D2EE901E33_SET_POOLRELEASEMODE_OFFSET UNITYSDK_OFFSET(0xB683B70)
#define CLASS_1_293FF9D2EE901E33__CTOR_OFFSET UNITYSDK_OFFSET(0xB683D10)

inline static constexpr unsigned int Class_1_293FF9D2EE901E33_TypeDefinitionIndex = 59371;

class Class_1_293FF9D2EE901E33 : public ::System::Object
{
public:
	static ::System::Nullable_1<::System::Boolean>* StaticGet_OOEMLLNIBLJ()
	{
		return (::System::Nullable_1<::System::Boolean>*)Il2CppClass::FromTypeDefinitionIndex(Class_1_293FF9D2EE901E33_TypeDefinitionIndex)->GetStaticField(0x14320);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_A0302E9AE0B8A2B9*>* FFBACKGECGK; // 0x10
	::System::Collections::Generic::HashSet_1<::System::String*>* NGJDNLCCDJF; // 0x18
	::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::Class_1_A0302E9AE0B8A2B9*>* IHDIKKPHBPB; // 0x20
	::System::Collections::Generic::List_1<::System::Func_2<::System::String*, ::System::String*>*>* KDHHDLKCAAC; // 0x28
	::Il2CppArray<::Class_1_A067D82B1A7452F6*>* AOCPHNHJMCP; // 0x30
	::System::Collections::Generic::HashSet_1<::System::String*>* FDBKGKFNAFJ; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* LNGCFPONKCJ; // 0x40
	::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::Class_1_A0302E9AE0B8A2B9*>* CNDHKCIEPIE; // 0x48
	::System::Single _MaxSpawnWaitTime_k__BackingField; // 0x50
	::System::Int32 _EffectInstanceBudgetBias_k__BackingField; // 0x54
	::System::Boolean _IgnoreInstanceBudget_k__BackingField; // 0x58
	::System::Boolean _FastLoadMode_k__BackingField; // 0x59
	::System::Boolean HEPHMMCDDFM; // 0x5A
	::RPG::Client::PoolGameObjectInstantiateStrategy JJOFIKOODCJ; // 0x5C
	::System::Double ENJPCGNLACM; // 0x60
	::System::Double CDIJHHFGIGA; // 0x68
	::System::Single _PoolAutoReleaseMemoryThresh_k__BackingField; // 0x70
	::System::Single _InstantiateTimeoutBias_k__BackingField; // 0x74
	::System::Boolean PHJBOCPNHNA; // 0x78
	::System::Boolean GCKCIHCBLPP; // 0x79
	::RPG::Client::GameObjectPoolReleaseMode _PoolReleaseMode_k__BackingField; // 0x7C
	::System::Single _PoolImmediatelyReleaseMemoryThresh_k__BackingField; // 0x80
	::System::Double LJMFOHAFBKO; // 0x88
	::System::Double BLBOKNAIMCP; // 0x90
	::System::Int32 OBFBCFHAAEL; // 0x98
	::System::Single _PoolAutoReleaseInterval_k__BackingField; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_A0302E9AE0B8A2B9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0302E9AE0B8A2B9*))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9A575D18A0748D9_1(::Class_1_A0302E9AE0B8A2B9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0302E9AE0B8A2B9*))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_E9A575D18A0748D9_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9A575D18A0748D9_2(::Class_1_A0302E9AE0B8A2B9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0302E9AE0B8A2B9*))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_E9A575D18A0748D9_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9A575D18A0748D9_3(::Class_1_A0302E9AE0B8A2B9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0302E9AE0B8A2B9*))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_E9A575D18A0748D9_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9A575D18A0748D9_4(::Class_1_A0302E9AE0B8A2B9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0302E9AE0B8A2B9*))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_E9A575D18A0748D9_4_OFFSET))(this, a1);
	}

	::System::Void Method_1_6EECE8924BBFC43C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_6EECE8924BBFC43C_OFFSET))(this);
	}

	::System::Void Method_1_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_749948B663FCCCEF_OFFSET))(this);
	}

	::Class_1_A067D82B1A7452F6* Method_1_A7C843238612A518(::RPG::Client::GameObjectPoolUsage a1)
	{
		return ((::Class_1_A067D82B1A7452F6*(*)(::PVOID, ::RPG::Client::GameObjectPoolUsage))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_A7C843238612A518_OFFSET))(this, a1);
	}

	::Class_1_A067D82B1A7452F6* Method_1_444E41890AF6E3D9(::System::String* a1)
	{
		return ((::Class_1_A067D82B1A7452F6*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_444E41890AF6E3D9_OFFSET))(this, a1);
	}

	::Class_1_A067D82B1A7452F6* Method_1_C90226451A6F1539(::RPG::Client::GameObjectPoolUsage a1, ::System::String* a2)
	{
		return ((::Class_1_A067D82B1A7452F6*(*)(::PVOID, ::RPG::Client::GameObjectPoolUsage, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_C90226451A6F1539_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_90DFB50E960F023C(::System::Collections::Generic::List_1<::Class_1_A0302E9AE0B8A2B9*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_A0302E9AE0B8A2B9*>*))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_90DFB50E960F023C_OFFSET))(this, a1);
	}

	::Class_1_A0302E9AE0B8A2B9* Method_1_72391C982DF63FDE(::System::String* a1, ::System::Boolean a2, ::RPG::Client::GameObjectPoolUsage a3)
	{
		return ((::Class_1_A0302E9AE0B8A2B9*(*)(::PVOID, ::System::String*, ::System::Boolean, ::RPG::Client::GameObjectPoolUsage))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_72391C982DF63FDE_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::GameObject* Method_1_50BD4AA0628D1418(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3, ::RPG::Client::GameObjectPoolUsage a4)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::RPG::Client::GameObjectPoolUsage))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_50BD4AA0628D1418_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_F0A5621E647BE115(::System::String* a1, ::System::Action_1<::UnityEngine::GameObject*>* a2, ::UnityEngine::Transform* a3, ::System::Boolean a4, ::RPG::Client::GameObjectPoolUsage a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::GameObject*>*, ::UnityEngine::Transform*, ::System::Boolean, ::RPG::Client::GameObjectPoolUsage))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_F0A5621E647BE115_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_85F8DDF68F63566F(::System::String* a1, ::Class_0_16E4307DCC419505_735* a2, ::UnityEngine::Transform* a3, ::System::Boolean a4, ::RPG::Client::GameObjectPoolUsage a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_735*, ::UnityEngine::Transform*, ::System::Boolean, ::RPG::Client::GameObjectPoolUsage))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_85F8DDF68F63566F_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_55611949792351B2(::System::String* a1, ::System::Action_1<::UnityEngine::GameObject*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_55611949792351B2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F65C64EBA9730AB3(::System::String* a1, ::Class_0_16E4307DCC419505_735* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_735*))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_F65C64EBA9730AB3_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8E61C4592394C6B5(::UnityEngine::GameObject* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_8E61C4592394C6B5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7AAA6FC0F0F914CF(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_7AAA6FC0F0F914CF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6D2BFCD0536B28C9(::UnityEngine::GameObject* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_6D2BFCD0536B28C9_OFFSET))(this, a1);
	}

	::Class_1_A0302E9AE0B8A2B9* Method_1_840CB3BD5C356356(::UnityEngine::GameObject* a1)
	{
		return ((::Class_1_A0302E9AE0B8A2B9*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_840CB3BD5C356356_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_1_0906715724957362(::UnityEngine::GameObject* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_0906715724957362_OFFSET))(this, a1);
	}

	::System::Void Method_1_8D81CB4AD08D8989(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_8D81CB4AD08D8989_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FC1C037F0879EC12(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_FC1C037F0879EC12_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_226842F6044F973B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_226842F6044F973B_OFFSET))(this);
	}

	::System::Void Method_1_21A03208CD384BE4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_21A03208CD384BE4_OFFSET))(this, a1);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_567BBDE5A68B6AA9(::System::Boolean a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_567BBDE5A68B6AA9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_890F5FC885825F9E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_890F5FC885825F9E_OFFSET))(this, a1);
	}

	::System::Void Method_1_480A176CBCFE165D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_480A176CBCFE165D_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C66368C6B0B8DE3(::RPG::Client::GameObjectPoolReleaseMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GameObjectPoolReleaseMode))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_8C66368C6B0B8DE3_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_9C2EB68FA949105C(::System::Int64 a1, ::System::Int64 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_9C2EB68FA949105C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_AE0B725AB77F7E6F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_AE0B725AB77F7E6F_OFFSET))(this);
	}

	::System::Void Method_1_4E608ED8CF3CBCB8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_4E608ED8CF3CBCB8_OFFSET))(this, a1);
	}

	::System::Void Method_1_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_1_F87D89720FABEA8C(::System::Func_2<::System::String*, ::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_F87D89720FABEA8C_OFFSET))(this, a1);
	}

	::System::Void Method_1_8D292F4321BB987D(::System::Func_2<::System::String*, ::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_8D292F4321BB987D_OFFSET))(this, a1);
	}

	::System::String* Method_1_A37E16D7D05DE5ED(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_A37E16D7D05DE5ED_OFFSET))(this, a1);
	}

	::System::Void Method_1_535079AAF5EDFF62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_535079AAF5EDFF62_OFFSET))(this);
	}

	::System::Boolean Method_1_C6E14CE377D03CE0(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_C6E14CE377D03CE0_OFFSET))(this, a1);
	}

	::System::Void Method_1_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Void Method_1_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_D0CD9A971CA3B1CF_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_DA1BF2C227DC3D86_1_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_DA1BF2C227DC3D86_2_OFFSET))(this);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	::System::Boolean get_FastLoadMode()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_GET_FASTLOADMODE_OFFSET))(this);
	}

	::System::Void set_FastLoadMode(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_SET_FASTLOADMODE_OFFSET))(this, a1);
	}

	::System::Single get_PoolAutoReleaseMemoryThresh()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_GET_POOLAUTORELEASEMEMORYTHRESH_OFFSET))(this);
	}

	::System::Void set_PoolAutoReleaseMemoryThresh(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_SET_POOLAUTORELEASEMEMORYTHRESH_OFFSET))(this, a1);
	}

	::System::Single get_PoolImmediatelyReleaseMemoryThresh()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_GET_POOLIMMEDIATELYRELEASEMEMORYTHRESH_OFFSET))(this);
	}

	::System::Void set_PoolImmediatelyReleaseMemoryThresh(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_SET_POOLIMMEDIATELYRELEASEMEMORYTHRESH_OFFSET))(this, a1);
	}

	::RPG::Client::GameObjectPoolReleaseMode get_PoolReleaseMode()
	{
		return ((::RPG::Client::GameObjectPoolReleaseMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_GET_POOLRELEASEMODE_OFFSET))(this);
	}

	::System::Void set_PoolReleaseMode(::RPG::Client::GameObjectPoolReleaseMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GameObjectPoolReleaseMode))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_SET_POOLRELEASEMODE_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_E42C0E0E6BF738D3()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_E42C0E0E6BF738D3_OFFSET))(this);
	}

	::RPG::Client::PoolGameObjectInstantiateStrategy Method_1_1F7FE07FD068BC29()
	{
		return ((::RPG::Client::PoolGameObjectInstantiateStrategy(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_1F7FE07FD068BC29_OFFSET))(this);
	}

	::System::Boolean get_IgnoreInstanceBudget()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_GET_IGNOREINSTANCEBUDGET_OFFSET))(this);
	}

	::System::Void set_IgnoreInstanceBudget(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_SET_IGNOREINSTANCEBUDGET_OFFSET))(this, a1);
	}

	::System::Single get_PoolAutoReleaseInterval()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_GET_POOLAUTORELEASEINTERVAL_OFFSET))(this);
	}

	::System::Void set_PoolAutoReleaseInterval(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_SET_POOLAUTORELEASEINTERVAL_OFFSET))(this, a1);
	}

	::System::Single get_MaxSpawnWaitTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_GET_MAXSPAWNWAITTIME_OFFSET))(this);
	}

	::System::Void set_MaxSpawnWaitTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_SET_MAXSPAWNWAITTIME_OFFSET))(this, a1);
	}

	::System::Single get_InstantiateTimeoutBias()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_GET_INSTANTIATETIMEOUTBIAS_OFFSET))(this);
	}

	::System::Void set_InstantiateTimeoutBias(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_SET_INSTANTIATETIMEOUTBIAS_OFFSET))(this, a1);
	}

	::System::Int32 get_EffectInstanceBudgetBias()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_GET_EFFECTINSTANCEBUDGETBIAS_OFFSET))(this);
	}

	::System::Void set_EffectInstanceBudgetBias(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_SET_EFFECTINSTANCEBUDGETBIAS_OFFSET))(this, a1);
	}
};

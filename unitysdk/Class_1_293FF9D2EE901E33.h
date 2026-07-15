#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GameObjectPoolReleaseMode.h"
#include "unitysdk/RPG/Client/GameObjectPoolUsage.h"
#include "unitysdk/RPG/Client/PoolGameObjectInstantiateStrategy.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_608;
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

#define CLASS_1_293FF9D2EE901E33_GET_EFFECTINSTANCEBUDGETBIAS_OFFSET UNITYSDK_OFFSET(0x17AC9900)
#define CLASS_1_293FF9D2EE901E33_GET_FASTLOADMODE_OFFSET UNITYSDK_OFFSET(0x17AC9710)
#define CLASS_1_293FF9D2EE901E33_GET_IGNOREINSTANCEBUDGET_OFFSET UNITYSDK_OFFSET(0x17AC9880)
#define CLASS_1_293FF9D2EE901E33_GET_INSTANTIATETIMEOUTBIAS_OFFSET UNITYSDK_OFFSET(0x17AC98E0)
#define CLASS_1_293FF9D2EE901E33_GET_MAXSPAWNWAITTIME_OFFSET UNITYSDK_OFFSET(0x17AC98C0)
#define CLASS_1_293FF9D2EE901E33_GET_POOLAUTORELEASEINTERVAL_OFFSET UNITYSDK_OFFSET(0x17AC98A0)
#define CLASS_1_293FF9D2EE901E33_GET_POOLAUTORELEASEMEMORYTHRESH_OFFSET UNITYSDK_OFFSET(0x17AC9730)
#define CLASS_1_293FF9D2EE901E33_GET_POOLIMMEDIATELYRELEASEMEMORYTHRESH_OFFSET UNITYSDK_OFFSET(0x17AC9750)
#define CLASS_1_293FF9D2EE901E33_GET_POOLRELEASEMODE_OFFSET UNITYSDK_OFFSET(0x17AC9770)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_0906715724957362_OFFSET UNITYSDK_OFFSET(0x17AC7800)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x17AC7EE0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_1F7FE07FD068BC29_OFFSET UNITYSDK_OFFSET(0x17AC9870)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_21A03208CD384BE4_OFFSET UNITYSDK_OFFSET(0x17AC7C70)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_444E41890AF6E3D9_OFFSET UNITYSDK_OFFSET(0x17AC66D0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_480A176CBCFE165D_OFFSET UNITYSDK_OFFSET(0x17AC8280)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_4E608ED8CF3CBCB8_OFFSET UNITYSDK_OFFSET(0x17AC9090)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x17AC90F0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_50BD4AA0628D1418_OFFSET UNITYSDK_OFFSET(0x17AC6C50)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_535079AAF5EDFF62_OFFSET UNITYSDK_OFFSET(0x17AC9470)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_55611949792351B2_OFFSET UNITYSDK_OFFSET(0x17AC72E0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_567BBDE5A68B6AA9_OFFSET UNITYSDK_OFFSET(0x17AC7F70)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_56E8ED155DF34A44_OFFSET UNITYSDK_OFFSET(0x17AC6560)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x17AC96D0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_6D2BFCD0536B28C9_OFFSET UNITYSDK_OFFSET(0x17AC7680)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_6EECE8924BBFC43C_OFFSET UNITYSDK_OFFSET(0x17AC5C20)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_72391C982DF63FDE_OFFSET UNITYSDK_OFFSET(0x17AC6AD0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0x17AC6410)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_7AAA6FC0F0F914CF_OFFSET UNITYSDK_OFFSET(0x17AC75B0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_840CB3BD5C356356_OFFSET UNITYSDK_OFFSET(0x17AC7750)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_85F8DDF68F63566F_OFFSET UNITYSDK_OFFSET(0x17AC7010)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_890F5FC885825F9E_OFFSET UNITYSDK_OFFSET(0x17AC81B0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_8C66368C6B0B8DE3_OFFSET UNITYSDK_OFFSET(0x17AC8FC0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_8D292F4321BB987D_OFFSET UNITYSDK_OFFSET(0x17AC9310)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_8D81CB4AD08D8989_OFFSET UNITYSDK_OFFSET(0x17AC78E0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_8E61C4592394C6B5_OFFSET UNITYSDK_OFFSET(0x17AC74A0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_90DFB50E960F023C_OFFSET UNITYSDK_OFFSET(0x17AC6950)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_9C2EB68FA949105C_OFFSET UNITYSDK_OFFSET(0x17AC9020)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_A37E16D7D05DE5ED_OFFSET UNITYSDK_OFFSET(0x17AC93A0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_A7C843238612A518_OFFSET UNITYSDK_OFFSET(0x17AC6660)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0x17AC84E0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x17AC8E70)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_C6E14CE377D03CE0_OFFSET UNITYSDK_OFFSET(0x17AC9580)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_C90226451A6F1539_OFFSET UNITYSDK_OFFSET(0x17AC6810)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x17AC7EA0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x17AC95F0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17AC5A10)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_DA1BF2C227DC3D86_1_OFFSET UNITYSDK_OFFSET(0x17AC9630)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_DA1BF2C227DC3D86_2_OFFSET UNITYSDK_OFFSET(0x17AC9680)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x17AC5A50)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_E42C0E0E6BF738D3_OFFSET UNITYSDK_OFFSET(0x17AC9790)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_E9A575D18A0748D9_1_OFFSET UNITYSDK_OFFSET(0x17AC5AE0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_E9A575D18A0748D9_2_OFFSET UNITYSDK_OFFSET(0x17AC5B30)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_E9A575D18A0748D9_3_OFFSET UNITYSDK_OFFSET(0x17AC5B80)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_E9A575D18A0748D9_4_OFFSET UNITYSDK_OFFSET(0x17AC5BD0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x17AC5A90)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x17AC8790)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_F0A5621E647BE115_OFFSET UNITYSDK_OFFSET(0x17AC6E40)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_F65C64EBA9730AB3_OFFSET UNITYSDK_OFFSET(0x17AC73C0)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_F87D89720FABEA8C_OFFSET UNITYSDK_OFFSET(0x17AC9260)
#define CLASS_1_293FF9D2EE901E33_METHOD_1_FC1C037F0879EC12_OFFSET UNITYSDK_OFFSET(0x17AC7AA0)
#define CLASS_1_293FF9D2EE901E33_SET_EFFECTINSTANCEBUDGETBIAS_OFFSET UNITYSDK_OFFSET(0x17AC9910)
#define CLASS_1_293FF9D2EE901E33_SET_FASTLOADMODE_OFFSET UNITYSDK_OFFSET(0x17AC9720)
#define CLASS_1_293FF9D2EE901E33_SET_IGNOREINSTANCEBUDGET_OFFSET UNITYSDK_OFFSET(0x17AC9890)
#define CLASS_1_293FF9D2EE901E33_SET_INSTANTIATETIMEOUTBIAS_OFFSET UNITYSDK_OFFSET(0x17AC98F0)
#define CLASS_1_293FF9D2EE901E33_SET_MAXSPAWNWAITTIME_OFFSET UNITYSDK_OFFSET(0x17AC98D0)
#define CLASS_1_293FF9D2EE901E33_SET_POOLAUTORELEASEINTERVAL_OFFSET UNITYSDK_OFFSET(0x17AC98B0)
#define CLASS_1_293FF9D2EE901E33_SET_POOLAUTORELEASEMEMORYTHRESH_OFFSET UNITYSDK_OFFSET(0x17AC9740)
#define CLASS_1_293FF9D2EE901E33_SET_POOLIMMEDIATELYRELEASEMEMORYTHRESH_OFFSET UNITYSDK_OFFSET(0x17AC9760)
#define CLASS_1_293FF9D2EE901E33_SET_POOLRELEASEMODE_OFFSET UNITYSDK_OFFSET(0x17AC9780)
#define CLASS_1_293FF9D2EE901E33__CTOR_OFFSET UNITYSDK_OFFSET(0x17AC9920)

inline static constexpr unsigned int Class_1_293FF9D2EE901E33_TypeDefinitionIndex = 56729;

class Class_1_293FF9D2EE901E33 : public ::System::Object
{
public:
	static ::System::Nullable_1<::System::Boolean>* StaticGet_Field_1_0()
	{
		return (::System::Nullable_1<::System::Boolean>*)Il2CppClass::FromTypeDefinitionIndex(Class_1_293FF9D2EE901E33_TypeDefinitionIndex)->GetStaticField(0xE890);
	}
	::Il2CppArray<::Class_1_A067D82B1A7452F6*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::Class_1_A0302E9AE0B8A2B9*>* Field_1_3; // 0x20
	::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::Class_1_A0302E9AE0B8A2B9*>* Field_1_4; // 0x28
	::System::Collections::Generic::List_1<::System::Func_2<::System::String*, ::System::String*>*>* Field_1_5; // 0x30
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_6; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_A0302E9AE0B8A2B9*>* Field_1_7; // 0x40
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_8; // 0x48
	::RPG::Client::GameObjectPoolReleaseMode _PoolReleaseMode_k__BackingField; // 0x50
	::System::Single _PoolAutoReleaseMemoryThresh_k__BackingField; // 0x54
	::System::Int32 Field_1_11; // 0x58
	::System::Single _PoolImmediatelyReleaseMemoryThresh_k__BackingField; // 0x5C
	::System::Int32 _EffectInstanceBudgetBias_k__BackingField; // 0x60
	::System::Single _PoolAutoReleaseInterval_k__BackingField; // 0x64
	::System::Boolean Field_1_15; // 0x68
	::System::Boolean _IgnoreInstanceBudget_k__BackingField; // 0x69
	::System::Boolean _FastLoadMode_k__BackingField; // 0x6A
	::System::Double Field_1_18; // 0x70
	::System::Boolean Field_1_19; // 0x78
	::System::Boolean Field_1_20; // 0x79
	::System::Single _InstantiateTimeoutBias_k__BackingField; // 0x7C
	::System::Double Field_1_22; // 0x80
	::System::Single _MaxSpawnWaitTime_k__BackingField; // 0x88
	::RPG::Client::PoolGameObjectInstantiateStrategy Field_1_24; // 0x8C
	::System::Double Field_1_25; // 0x90
	::System::Double Field_1_26; // 0x98

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

	::System::Void Method_1_85F8DDF68F63566F(::System::String* a1, ::Class_0_16E4307DCC419505_608* a2, ::UnityEngine::Transform* a3, ::System::Boolean a4, ::RPG::Client::GameObjectPoolUsage a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_608*, ::UnityEngine::Transform*, ::System::Boolean, ::RPG::Client::GameObjectPoolUsage))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_85F8DDF68F63566F_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_55611949792351B2(::System::String* a1, ::System::Action_1<::UnityEngine::GameObject*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_55611949792351B2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F65C64EBA9730AB3(::System::String* a1, ::Class_0_16E4307DCC419505_608* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_608*))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_F65C64EBA9730AB3_OFFSET))(this, a1, a2);
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

	::System::Void Method_1_56E8ED155DF34A44()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_56E8ED155DF34A44_OFFSET))(this);
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

	::System::Void Method_1_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293FF9D2EE901E33_METHOD_1_C561FF611C07A44C_OFFSET))(this);
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeSpeakerPolicy.h"
#include "unitysdk/RPG/GameCore/CakeValidAreaType.h"
#include "unitysdk/System/Object.h"

class Class_1_3745C69C00F04B7D_2;
class Class_1_8FA131E93D046711;
class Class_1_902742FEC03162EB;
class Class_1_9E9BEB53C8DC281D;
class Class_1_D3D14052A5904019;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3ED5A82F1CC73B98_GET_ISPLAYERINRANGE_OFFSET UNITYSDK_OFFSET(0x95269D0)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_1AC95E6AE9F6E5EE_OFFSET UNITYSDK_OFFSET(0x9524CA0)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_24B7896E150B685B_OFFSET UNITYSDK_OFFSET(0x9525DA0)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x95257B0)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_29EE32F8893A94FF_OFFSET UNITYSDK_OFFSET(0x95252B0)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_2ADD919724E72609_OFFSET UNITYSDK_OFFSET(0x9525AF0)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_33C1DB4C8E5800FD_OFFSET UNITYSDK_OFFSET(0x9524290)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_3C21BDEDBD6FE047_OFFSET UNITYSDK_OFFSET(0x95266D0)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_3F2E29BF8C9EC4BD_OFFSET UNITYSDK_OFFSET(0x95250E0)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_42DF548F1C6EB1F3_OFFSET UNITYSDK_OFFSET(0x9524AE0)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_46DF29ACE60986D7_OFFSET UNITYSDK_OFFSET(0x95238F0)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_4A48738108A53DF2_OFFSET UNITYSDK_OFFSET(0x9524970)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x95240E0)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_5FEC3C6C90DDD082_OFFSET UNITYSDK_OFFSET(0x95254B0)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_6E6682ED9FD6F719_1_OFFSET UNITYSDK_OFFSET(0x9523390)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0x9522EA0)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_73E316C7A7D0DD75_OFFSET UNITYSDK_OFFSET(0x9525A60)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_7C3D40820FAF9F39_OFFSET UNITYSDK_OFFSET(0x9524B80)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x9522BF0)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_8131D4D8C02BAA62_OFFSET UNITYSDK_OFFSET(0x95239E0)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_834AF38C8CA52142_1_OFFSET UNITYSDK_OFFSET(0x9525050)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_834AF38C8CA52142_OFFSET UNITYSDK_OFFSET(0x9524DE0)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_8368CDDC58D4A31D_OFFSET UNITYSDK_OFFSET(0x9526810)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_8778A727EBFBAE3C_OFFSET UNITYSDK_OFFSET(0x95258D0)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x9522D40)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0x9522DF0)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x9523880)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_ABEAB8AF7FE7565E_OFFSET UNITYSDK_OFFSET(0x95261A0)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_AE80CBC984AADFD5_OFFSET UNITYSDK_OFFSET(0x9523A70)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_AFE1008F7AD03326_OFFSET UNITYSDK_OFFSET(0x9525BF0)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_BDC44F1795A88549_OFFSET UNITYSDK_OFFSET(0x9526450)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_E3843C86F15DBA30_OFFSET UNITYSDK_OFFSET(0x95262D0)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_E76E7AF3A7A42C51_1_OFFSET UNITYSDK_OFFSET(0x9525690)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_E76E7AF3A7A42C51_OFFSET UNITYSDK_OFFSET(0x9525190)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_E864B6B7C347E8E3_OFFSET UNITYSDK_OFFSET(0x95242F0)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_E9CBF507D8F6B59A_OFFSET UNITYSDK_OFFSET(0x9524620)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_EB7A7FABD82F88FB_OFFSET UNITYSDK_OFFSET(0x9526250)
#define CLASS_1_3ED5A82F1CC73B98_METHOD_1_F7F8E2A18B763402_OFFSET UNITYSDK_OFFSET(0x9524E70)
#define CLASS_1_3ED5A82F1CC73B98_SET_ISPLAYERINRANGE_OFFSET UNITYSDK_OFFSET(0x95269E0)
#define CLASS_1_3ED5A82F1CC73B98__CTOR_OFFSET UNITYSDK_OFFSET(0x95269F0)

inline static constexpr unsigned int Class_1_3ED5A82F1CC73B98_TypeDefinitionIndex = 58027;

class Class_1_3ED5A82F1CC73B98 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_902742FEC03162EB*>*>*>* Field_1_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeValidAreaType, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_902742FEC03162EB*>*>*>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::Class_1_9E9BEB53C8DC281D*>* Field_1_1; // 0x20
	::System::Int32 Field_1_0; // 0x28
	::System::Boolean _IsPlayerInRange_k__BackingField; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_46DF29ACE60986D7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_46DF29ACE60986D7_OFFSET))(this, a1);
	}

	::System::Void Method_1_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_921C3C3E09D59CD4_OFFSET))(this);
	}

	::System::Void Method_1_6E6682ED9FD6F719()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_6E6682ED9FD6F719_OFFSET))(this);
	}

	::System::Void Method_1_6E6682ED9FD6F719_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_6E6682ED9FD6F719_1_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_8131D4D8C02BAA62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_8131D4D8C02BAA62_OFFSET))(this);
	}

	::System::Void Method_1_AE80CBC984AADFD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_AE80CBC984AADFD5_OFFSET))(this);
	}

	::System::Void Method_1_E864B6B7C347E8E3(::RPG::GameCore::CakeValidAreaType a1, ::System::UInt32 a2, ::Class_1_902742FEC03162EB* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeValidAreaType, ::System::UInt32, ::Class_1_902742FEC03162EB*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_E864B6B7C347E8E3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E9CBF507D8F6B59A(::RPG::GameCore::CakeValidAreaType a1, ::System::UInt32 a2, ::Class_1_902742FEC03162EB* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeValidAreaType, ::System::UInt32, ::Class_1_902742FEC03162EB*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_E9CBF507D8F6B59A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_1_33C1DB4C8E5800FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_33C1DB4C8E5800FD_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_D3D14052A5904019*>* Method_1_4A48738108A53DF2()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_D3D14052A5904019*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_4A48738108A53DF2_OFFSET))(this);
	}

	::System::Void Method_1_1AC95E6AE9F6E5EE(::Class_1_9E9BEB53C8DC281D* a1, ::System::Collections::Generic::List_1<::Class_1_D3D14052A5904019*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9E9BEB53C8DC281D*, ::System::Collections::Generic::List_1<::Class_1_D3D14052A5904019*>*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_1AC95E6AE9F6E5EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_834AF38C8CA52142(::Class_1_9E9BEB53C8DC281D* a1, ::System::Collections::Generic::List_1<::Class_1_D3D14052A5904019*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9E9BEB53C8DC281D*, ::System::Collections::Generic::List_1<::Class_1_D3D14052A5904019*>*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_834AF38C8CA52142_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F7F8E2A18B763402(::Class_1_9E9BEB53C8DC281D* a1, ::System::Collections::Generic::List_1<::Class_1_D3D14052A5904019*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9E9BEB53C8DC281D*, ::System::Collections::Generic::List_1<::Class_1_D3D14052A5904019*>*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_F7F8E2A18B763402_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_834AF38C8CA52142_1(::Class_1_9E9BEB53C8DC281D* a1, ::System::Collections::Generic::List_1<::Class_1_D3D14052A5904019*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9E9BEB53C8DC281D*, ::System::Collections::Generic::List_1<::Class_1_D3D14052A5904019*>*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_834AF38C8CA52142_1_OFFSET))(this, a1, a2);
	}

	::Class_1_D3D14052A5904019* Method_1_42DF548F1C6EB1F3(::System::Collections::Generic::List_1<::Class_1_D3D14052A5904019*>* a1)
	{
		return ((::Class_1_D3D14052A5904019*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_D3D14052A5904019*>*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_42DF548F1C6EB1F3_OFFSET))(this, a1);
	}

	::System::Void Method_1_7C3D40820FAF9F39(::Class_1_D3D14052A5904019* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D3D14052A5904019*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_7C3D40820FAF9F39_OFFSET))(this, a1);
	}

	::System::Void Method_1_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Boolean Method_1_3F2E29BF8C9EC4BD(::Class_1_9E9BEB53C8DC281D* a1, ::RPG::GameCore::CakeValidAreaType a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9E9BEB53C8DC281D*, ::RPG::GameCore::CakeValidAreaType))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_3F2E29BF8C9EC4BD_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_E76E7AF3A7A42C51(::Class_1_9E9BEB53C8DC281D* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9E9BEB53C8DC281D*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_E76E7AF3A7A42C51_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5FEC3C6C90DDD082(::Class_1_9E9BEB53C8DC281D* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9E9BEB53C8DC281D*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_5FEC3C6C90DDD082_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_E76E7AF3A7A42C51_1(::Class_1_9E9BEB53C8DC281D* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9E9BEB53C8DC281D*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_E76E7AF3A7A42C51_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8778A727EBFBAE3C(::Il2CppArray<::Class_1_3745C69C00F04B7D_2*>* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_902742FEC03162EB*>*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::Class_1_3745C69C00F04B7D_2*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_902742FEC03162EB*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_8778A727EBFBAE3C_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_73E316C7A7D0DD75(::Il2CppArray<::Class_1_3745C69C00F04B7D_2*>* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Il2CppArray<::Class_1_3745C69C00F04B7D_2*>*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_73E316C7A7D0DD75_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2ADD919724E72609(::Il2CppArray<::Class_1_3745C69C00F04B7D_2*>* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_902742FEC03162EB*>*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::Class_1_3745C69C00F04B7D_2*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_902742FEC03162EB*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_2ADD919724E72609_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_AFE1008F7AD03326(::System::UInt32 a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_902742FEC03162EB*>*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_902742FEC03162EB*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_AFE1008F7AD03326_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_24B7896E150B685B(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_902742FEC03162EB*>*>* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_902742FEC03162EB*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_24B7896E150B685B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_ABEAB8AF7FE7565E(::Class_1_902742FEC03162EB* a1, ::Class_1_902742FEC03162EB* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_902742FEC03162EB*, ::Class_1_902742FEC03162EB*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_ABEAB8AF7FE7565E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_EB7A7FABD82F88FB(::Class_1_902742FEC03162EB* a1, ::Class_1_902742FEC03162EB* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_902742FEC03162EB*, ::Class_1_902742FEC03162EB*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_EB7A7FABD82F88FB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_29EE32F8893A94FF(::Class_1_9E9BEB53C8DC281D* a1, ::RPG::GameCore::CakeValidAreaType a2, ::System::Collections::Generic::List_1<::Class_1_D3D14052A5904019*>* a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9E9BEB53C8DC281D*, ::RPG::GameCore::CakeValidAreaType, ::System::Collections::Generic::List_1<::Class_1_D3D14052A5904019*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_29EE32F8893A94FF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_902742FEC03162EB*>*>* Method_1_E3843C86F15DBA30(::RPG::GameCore::CakeValidAreaType a1, ::System::UInt32 a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_902742FEC03162EB*>*>*(*)(::PVOID, ::RPG::GameCore::CakeValidAreaType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_E3843C86F15DBA30_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_902742FEC03162EB*>*>* Method_1_BDC44F1795A88549(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_902742FEC03162EB*>*>* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_902742FEC03162EB*>*>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_902742FEC03162EB*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_BDC44F1795A88549_OFFSET))(this, a1);
	}

	::Class_1_8FA131E93D046711* Method_1_3C21BDEDBD6FE047(::System::UInt32 a1, ::RPG::GameCore::CakeSpeakerPolicy a2, ::RPG::GameCore::CakeValidAreaType a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_902742FEC03162EB*>*>* a4, ::System::UInt32 a5)
	{
		return ((::Class_1_8FA131E93D046711*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::CakeSpeakerPolicy, ::RPG::GameCore::CakeValidAreaType, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_902742FEC03162EB*>*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_3C21BDEDBD6FE047_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_1_902742FEC03162EB* Method_1_8368CDDC58D4A31D(::System::UInt32 a1, ::RPG::GameCore::CakeSpeakerPolicy a2, ::RPG::GameCore::CakeValidAreaType a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_902742FEC03162EB*>*>* a4, ::System::UInt32 a5)
	{
		return ((::Class_1_902742FEC03162EB*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::CakeSpeakerPolicy, ::RPG::GameCore::CakeValidAreaType, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_902742FEC03162EB*>*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_METHOD_1_8368CDDC58D4A31D_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean get_IsPlayerInRange()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_GET_ISPLAYERINRANGE_OFFSET))(this);
	}

	::System::Void set_IsPlayerInRange(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3ED5A82F1CC73B98_SET_ISPLAYERINRANGE_OFFSET))(this, value);
	}
};

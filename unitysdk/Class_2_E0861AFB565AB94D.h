#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"
#include "unitysdk/Enum_3_75A5C8C4100A8E33_1.h"
#include "unitysdk/RPG/GameCore/GridFightForgeFuncType.h"

class Class_1_B1FF62FAE312BC49_7;
class Class_1_ECA6A21F0048224D;
namespace RPG::Client { class GridFightEquipDressEvent; }
namespace RPG::Client { class GridFightEquipReturnPackEvent; }
namespace RPG::Client { class GridFightForgeAddCoinEvent; }
namespace RPG::Client { class GridFightForgeAddRoleEvent; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_2_E0861AFB565AB94D_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x8C82A00)
#define CLASS_2_E0861AFB565AB94D_METHOD_2_0EA837295AE4519F_OFFSET UNITYSDK_OFFSET(0x8C857B0)
#define CLASS_2_E0861AFB565AB94D_METHOD_2_1CFEF2C87EA4995A_OFFSET UNITYSDK_OFFSET(0x8C831F0)
#define CLASS_2_E0861AFB565AB94D_METHOD_2_390623AF74E8C979_OFFSET UNITYSDK_OFFSET(0x8C82AC0)
#define CLASS_2_E0861AFB565AB94D_METHOD_2_4418D0C08F01D8CD_OFFSET UNITYSDK_OFFSET(0x8C83160)
#define CLASS_2_E0861AFB565AB94D_METHOD_2_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x8C840C0)
#define CLASS_2_E0861AFB565AB94D_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x8C85950)
#define CLASS_2_E0861AFB565AB94D_METHOD_2_C3CC026A96540DAB_OFFSET UNITYSDK_OFFSET(0x8C86040)
#define CLASS_2_E0861AFB565AB94D_METHOD_2_E2CDB6B22CCEBA97_1_OFFSET UNITYSDK_OFFSET(0x8C85EF0)
#define CLASS_2_E0861AFB565AB94D_METHOD_2_E2CDB6B22CCEBA97_OFFSET UNITYSDK_OFFSET(0x8C85E80)
#define CLASS_2_E0861AFB565AB94D_METHOD_2_F465313BAD423FCA_OFFSET UNITYSDK_OFFSET(0x8C85640)
#define CLASS_2_E0861AFB565AB94D_PREUPDATEDONE_OFFSET UNITYSDK_OFFSET(0x8C858F0)
#define CLASS_2_E0861AFB565AB94D_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0x8C830D0)
#define CLASS_2_E0861AFB565AB94D_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x8C83E60)
#define CLASS_2_E0861AFB565AB94D_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x8C84110)
#define CLASS_2_E0861AFB565AB94D_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x8C82530)
#define CLASS_2_E0861AFB565AB94D_UPDATECOIN_OFFSET UNITYSDK_OFFSET(0x8C83FB0)
#define CLASS_2_E0861AFB565AB94D_UPDATEITEM_OFFSET UNITYSDK_OFFSET(0x8C82A70)
#define CLASS_2_E0861AFB565AB94D_UPDATESTART_OFFSET UNITYSDK_OFFSET(0x8C824F0)
#define CLASS_2_E0861AFB565AB94D__CTOR_OFFSET UNITYSDK_OFFSET(0x8C85AA0)
#define CLASS_2_E0861AFB565AB94D___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x8C85D30)
#define CLASS_2_E0861AFB565AB94D___IFIXBASEPROXY_PREUPDATEDONE_OFFSET UNITYSDK_OFFSET(0x8C86120)
#define CLASS_2_E0861AFB565AB94D___IFIXBASEPROXY_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0x8C85E10)
#define CLASS_2_E0861AFB565AB94D___IFIXBASEPROXY_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x8C85F60)
#define CLASS_2_E0861AFB565AB94D___IFIXBASEPROXY_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x8C860B0)
#define CLASS_2_E0861AFB565AB94D___IFIXBASEPROXY_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x8C85CC0)
#define CLASS_2_E0861AFB565AB94D___IFIXBASEPROXY_UPDATECOIN_OFFSET UNITYSDK_OFFSET(0x8C85FD0)
#define CLASS_2_E0861AFB565AB94D___IFIXBASEPROXY_UPDATEITEM_OFFSET UNITYSDK_OFFSET(0x8C85DA0)
#define CLASS_2_E0861AFB565AB94D___IFIXBASEPROXY_UPDATESTART_OFFSET UNITYSDK_OFFSET(0x8C85C60)

inline static constexpr unsigned int Class_2_E0861AFB565AB94D_TypeDefinitionIndex = 52742;

class Class_2_E0861AFB565AB94D : public ::Class_1_41E07A9DDAB7FC78
{
public:
	::System::Collections::Generic::Queue_1<::RPG::Client::GridFightForgeAddRoleEvent*>* Field_2_6; // 0x10
	::System::Collections::Generic::Queue_1<::RPG::Client::GridFightEquipDressEvent*>* Field_2_8; // 0x18
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_9; // 0x20
	::System::Collections::Generic::Queue_1<::RPG::Client::GridFightForgeAddCoinEvent*>* Field_2_7; // 0x28
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_10; // 0x30
	::System::Collections::Generic::Queue_1<::RPG::Client::GridFightEquipReturnPackEvent*>* Field_2_5; // 0x38
	::System::UInt32 Field_2_3; // 0x40
	::System::Boolean Field_2_1; // 0x44
	::System::Boolean Field_2_13; // 0x45
	::System::Boolean Field_2_12; // 0x46
	::System::Boolean Field_2_11; // 0x47
	::System::UInt32 Field_2_2; // 0x48
	::RPG::GameCore::GridFightForgeFuncType Field_2_4; // 0x4C
	::Enum_3_75A5C8C4100A8E33_1 Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D__CTOR_OFFSET))(this);
	}

	::System::Void UpdateStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D_UPDATESTART_OFFSET))(this);
	}

	::System::Void UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Boolean IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D_ISCONCERNEDWITH_OFFSET))(this, a1);
	}

	::System::Void UpdateItem(::Class_1_ECA6A21F0048224D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ECA6A21F0048224D*))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D_UPDATEITEM_OFFSET))(this, a1);
	}

	::System::Void UpdateAddItem(::Class_1_ECA6A21F0048224D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ECA6A21F0048224D*))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D_UPDATEADDITEM_OFFSET))(this, a1);
	}

	::System::Void Method_2_4418D0C08F01D8CD(::Class_1_ECA6A21F0048224D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ECA6A21F0048224D*))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D_METHOD_2_4418D0C08F01D8CD_OFFSET))(this, a1);
	}

	::System::Void Method_2_1CFEF2C87EA4995A(::Class_1_B1FF62FAE312BC49_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_7*))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D_METHOD_2_1CFEF2C87EA4995A_OFFSET))(this, a1);
	}

	::System::Void UpdateAddRole(::Class_1_B1FF62FAE312BC49_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_7*))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D_UPDATEADDROLE_OFFSET))(this, a1);
	}

	::System::Void UpdateCoin(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D_UPDATECOIN_OFFSET))(this, a1);
	}

	::System::Void Method_2_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D_METHOD_2_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Void UpdateAfter(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D_UPDATEAFTER_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_F465313BAD423FCA(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D_METHOD_2_F465313BAD423FCA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0EA837295AE4519F(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D_METHOD_2_0EA837295AE4519F_OFFSET))(this, a1);
	}

	::System::Void PreUpdateDone()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D_PREUPDATEDONE_OFFSET))(this);
	}

	::System::Void Method_2_390623AF74E8C979(::Class_1_ECA6A21F0048224D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ECA6A21F0048224D*))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D_METHOD_2_390623AF74E8C979_OFFSET))(this, a1);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_UpdateStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D___IFIXBASEPROXY_UPDATESTART_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 P0, ::System::Collections::Generic::IList_1<::System::UInt32>* P1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D___IFIXBASEPROXY_UPDATEBEFORE_OFFSET))(this, P0, P1);
	}

	::System::Boolean __iFixBaseProxy_IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_UpdateItem(::Class_1_ECA6A21F0048224D* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ECA6A21F0048224D*))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D___IFIXBASEPROXY_UPDATEITEM_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_UpdateAddItem(::Class_1_ECA6A21F0048224D* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ECA6A21F0048224D*))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D___IFIXBASEPROXY_UPDATEADDITEM_OFFSET))(this, P0);
	}

	::System::Void Method_2_E2CDB6B22CCEBA97(::Class_1_ECA6A21F0048224D* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ECA6A21F0048224D*))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D_METHOD_2_E2CDB6B22CCEBA97_OFFSET))(this, P0);
	}

	::System::Void Method_2_E2CDB6B22CCEBA97_1(::Class_1_B1FF62FAE312BC49_7* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_7*))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D_METHOD_2_E2CDB6B22CCEBA97_1_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_UpdateAddRole(::Class_1_B1FF62FAE312BC49_7* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_7*))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D___IFIXBASEPROXY_UPDATEADDROLE_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_UpdateCoin(::System::UInt32 P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D___IFIXBASEPROXY_UPDATECOIN_OFFSET))(this, P0);
	}

	::System::Void Method_2_C3CC026A96540DAB(::System::UInt32 P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D_METHOD_2_C3CC026A96540DAB_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_UpdateAfter(::Enum_3_75A5C8C4100A8E33_1 P0)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D___IFIXBASEPROXY_UPDATEAFTER_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_PreUpdateDone()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D___IFIXBASEPROXY_PREUPDATEDONE_OFFSET))(this);
	}
};

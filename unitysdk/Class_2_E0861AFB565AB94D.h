#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D4DDF404C3CCC18.h"
#include "unitysdk/Enum_3_75A5C8C4100A8E33_1.h"
#include "unitysdk/RPG/GameCore/GridFightForgeFuncType.h"

class Class_1_8844A4E6AE686D5C_4;
class Class_1_B1FF62FAE312BC49_5;
namespace RPG::Client { class GridFightEquipDressEvent; }
namespace RPG::Client { class GridFightEquipReturnPackEvent; }
namespace RPG::Client { class GridFightForgeAddCoinEvent; }
namespace RPG::Client { class GridFightForgeAddRoleEvent; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_2_E0861AFB565AB94D_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x142D5080)
#define CLASS_2_E0861AFB565AB94D_METHOD_2_3B935EDF35B815B0_OFFSET UNITYSDK_OFFSET(0x142D5140)
#define CLASS_2_E0861AFB565AB94D_METHOD_2_4418D0C08F01D8CD_OFFSET UNITYSDK_OFFSET(0x142D5820)
#define CLASS_2_E0861AFB565AB94D_METHOD_2_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x142D6900)
#define CLASS_2_E0861AFB565AB94D_METHOD_2_853181FBF70E388E_OFFSET UNITYSDK_OFFSET(0x142D58B0)
#define CLASS_2_E0861AFB565AB94D_METHOD_2_8A3EB355C470E8A9_OFFSET UNITYSDK_OFFSET(0x142D81C0)
#define CLASS_2_E0861AFB565AB94D_METHOD_2_8CD1A6D1096A6CB7_1_OFFSET UNITYSDK_OFFSET(0x142D88E0)
#define CLASS_2_E0861AFB565AB94D_METHOD_2_8CD1A6D1096A6CB7_OFFSET UNITYSDK_OFFSET(0x142D8880)
#define CLASS_2_E0861AFB565AB94D_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x142D8390)
#define CLASS_2_E0861AFB565AB94D_METHOD_2_A1D868D08A5B8F47_OFFSET UNITYSDK_OFFSET(0x142D8A00)
#define CLASS_2_E0861AFB565AB94D_METHOD_2_A72438BA42DEF2E5_OFFSET UNITYSDK_OFFSET(0x142D8030)
#define CLASS_2_E0861AFB565AB94D_PREUPDATEDONE_OFFSET UNITYSDK_OFFSET(0x142D8330)
#define CLASS_2_E0861AFB565AB94D_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0x142D5790)
#define CLASS_2_E0861AFB565AB94D_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x142D66A0)
#define CLASS_2_E0861AFB565AB94D_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x142D6950)
#define CLASS_2_E0861AFB565AB94D_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x142D4BA0)
#define CLASS_2_E0861AFB565AB94D_UPDATECOIN_OFFSET UNITYSDK_OFFSET(0x142D67F0)
#define CLASS_2_E0861AFB565AB94D_UPDATEITEM_OFFSET UNITYSDK_OFFSET(0x142D50F0)
#define CLASS_2_E0861AFB565AB94D_UPDATESTART_OFFSET UNITYSDK_OFFSET(0x142D4B60)
#define CLASS_2_E0861AFB565AB94D__CTOR_OFFSET UNITYSDK_OFFSET(0x142D84E0)
#define CLASS_2_E0861AFB565AB94D___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x142D8760)
#define CLASS_2_E0861AFB565AB94D___IFIXBASEPROXY_PREUPDATEDONE_OFFSET UNITYSDK_OFFSET(0x142D8AC0)
#define CLASS_2_E0861AFB565AB94D___IFIXBASEPROXY_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0x142D8820)
#define CLASS_2_E0861AFB565AB94D___IFIXBASEPROXY_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x142D8940)
#define CLASS_2_E0861AFB565AB94D___IFIXBASEPROXY_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x142D8A60)
#define CLASS_2_E0861AFB565AB94D___IFIXBASEPROXY_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x142D8700)
#define CLASS_2_E0861AFB565AB94D___IFIXBASEPROXY_UPDATECOIN_OFFSET UNITYSDK_OFFSET(0x142D89A0)
#define CLASS_2_E0861AFB565AB94D___IFIXBASEPROXY_UPDATEITEM_OFFSET UNITYSDK_OFFSET(0x142D87C0)
#define CLASS_2_E0861AFB565AB94D___IFIXBASEPROXY_UPDATESTART_OFFSET UNITYSDK_OFFSET(0x142D86A0)

inline static constexpr unsigned int Class_2_E0861AFB565AB94D_TypeDefinitionIndex = 60736;

class Class_2_E0861AFB565AB94D : public ::Class_1_6D4DDF404C3CCC18
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_0; // 0x10
	::System::Collections::Generic::Queue_1<::RPG::Client::GridFightEquipDressEvent*>* Field_2_1; // 0x18
	::System::Collections::Generic::Queue_1<::RPG::Client::GridFightForgeAddRoleEvent*>* Field_2_2; // 0x20
	::System::Collections::Generic::Queue_1<::RPG::Client::GridFightForgeAddCoinEvent*>* Field_2_3; // 0x28
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_4; // 0x30
	::System::Collections::Generic::Queue_1<::RPG::Client::GridFightEquipReturnPackEvent*>* Field_2_5; // 0x38
	::System::UInt32 Field_2_6; // 0x40
	::RPG::GameCore::GridFightForgeFuncType Field_2_7; // 0x44
	::System::UInt32 Field_2_8; // 0x48
	::Enum_3_75A5C8C4100A8E33_1 Field_2_9; // 0x4C
	::System::Boolean Field_2_10; // 0x50
	::System::Boolean Field_2_11; // 0x51
	::System::Boolean Field_2_12; // 0x52
	::System::Boolean Field_2_13; // 0x53

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

	::System::Void UpdateItem(::Class_1_8844A4E6AE686D5C_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8844A4E6AE686D5C_4*))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D_UPDATEITEM_OFFSET))(this, a1);
	}

	::System::Void UpdateAddItem(::Class_1_8844A4E6AE686D5C_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8844A4E6AE686D5C_4*))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D_UPDATEADDITEM_OFFSET))(this, a1);
	}

	::System::Void Method_2_4418D0C08F01D8CD(::Class_1_8844A4E6AE686D5C_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8844A4E6AE686D5C_4*))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D_METHOD_2_4418D0C08F01D8CD_OFFSET))(this, a1);
	}

	::System::Void Method_2_853181FBF70E388E(::Class_1_B1FF62FAE312BC49_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_5*))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D_METHOD_2_853181FBF70E388E_OFFSET))(this, a1);
	}

	::System::Void UpdateAddRole(::Class_1_B1FF62FAE312BC49_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_5*))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D_UPDATEADDROLE_OFFSET))(this, a1);
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

	::System::Int32 Method_2_A72438BA42DEF2E5(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D_METHOD_2_A72438BA42DEF2E5_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_8A3EB355C470E8A9(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D_METHOD_2_8A3EB355C470E8A9_OFFSET))(this, a1);
	}

	::System::Void PreUpdateDone()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D_PREUPDATEDONE_OFFSET))(this);
	}

	::System::Void Method_2_3B935EDF35B815B0(::Class_1_8844A4E6AE686D5C_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8844A4E6AE686D5C_4*))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D_METHOD_2_3B935EDF35B815B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_UpdateStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D___IFIXBASEPROXY_UPDATESTART_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D___IFIXBASEPROXY_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Boolean __iFixBaseProxy_IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_UpdateItem(::Class_1_8844A4E6AE686D5C_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8844A4E6AE686D5C_4*))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D___IFIXBASEPROXY_UPDATEITEM_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_UpdateAddItem(::Class_1_8844A4E6AE686D5C_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8844A4E6AE686D5C_4*))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D___IFIXBASEPROXY_UPDATEADDITEM_OFFSET))(this, a1);
	}

	::System::Void Method_2_8CD1A6D1096A6CB7(::Class_1_8844A4E6AE686D5C_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8844A4E6AE686D5C_4*))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D_METHOD_2_8CD1A6D1096A6CB7_OFFSET))(this, a1);
	}

	::System::Void Method_2_8CD1A6D1096A6CB7_1(::Class_1_B1FF62FAE312BC49_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_5*))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D_METHOD_2_8CD1A6D1096A6CB7_1_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_UpdateAddRole(::Class_1_B1FF62FAE312BC49_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_5*))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D___IFIXBASEPROXY_UPDATEADDROLE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_UpdateCoin(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D___IFIXBASEPROXY_UPDATECOIN_OFFSET))(this, a1);
	}

	::System::Void Method_2_A1D868D08A5B8F47(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D_METHOD_2_A1D868D08A5B8F47_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_UpdateAfter(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D___IFIXBASEPROXY_UPDATEAFTER_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_PreUpdateDone()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D___IFIXBASEPROXY_PREUPDATEDONE_OFFSET))(this);
	}
};

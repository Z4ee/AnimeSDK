#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRole_GridFightRoleBuilder.h"

class Class_0_16E4307DCC419505_641;
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_3B958C78ED93BA76_CLEAR_OFFSET UNITYSDK_OFFSET(0x11815660)
#define CLASS_2_3B958C78ED93BA76_CREATEEQUIPITEMS_OFFSET UNITYSDK_OFFSET(0x11815B70)
#define CLASS_2_3B958C78ED93BA76_CREATEPROPERTYPROVIDER_OFFSET UNITYSDK_OFFSET(0x118157E0)
#define CLASS_2_3B958C78ED93BA76_CREATETRAITS_OFFSET UNITYSDK_OFFSET(0x11815E20)
#define CLASS_2_3B958C78ED93BA76_METHOD_2_07374B8FCDCB7B70_OFFSET UNITYSDK_OFFSET(0x11815500)
#define CLASS_2_3B958C78ED93BA76_METHOD_2_FBFAC0ABE83B99C6_OFFSET UNITYSDK_OFFSET(0x11815570)
#define CLASS_2_3B958C78ED93BA76_METHOD_2_FC92856EB75E0661_OFFSET UNITYSDK_OFFSET(0x11815770)
#define CLASS_2_3B958C78ED93BA76__CTOR_OFFSET UNITYSDK_OFFSET(0x11815710)
#define CLASS_2_3B958C78ED93BA76___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x11815EB0)

inline static constexpr unsigned int Class_2_3B958C78ED93BA76_TypeDefinitionIndex = 52865;

class Class_2_3B958C78ED93BA76 : public ::RPG::Client::GridFightRole_GridFightRoleBuilder
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B958C78ED93BA76__CTOR_OFFSET))(this);
	}

	static ::Class_2_3B958C78ED93BA76* Method_2_07374B8FCDCB7B70()
	{
		return ((::Class_2_3B958C78ED93BA76*(*)())((::PBYTE)hIl2Cpp + CLASS_2_3B958C78ED93BA76_METHOD_2_07374B8FCDCB7B70_OFFSET))();
	}

	static ::Class_2_3B958C78ED93BA76* Method_2_FBFAC0ABE83B99C6(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Class_2_3B958C78ED93BA76*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3B958C78ED93BA76_METHOD_2_FBFAC0ABE83B99C6_OFFSET))(a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B958C78ED93BA76_CLEAR_OFFSET))(this);
	}

	::Class_2_3B958C78ED93BA76* Method_2_FC92856EB75E0661(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::Class_2_3B958C78ED93BA76*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_3B958C78ED93BA76_METHOD_2_FC92856EB75E0661_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_641* CreatePropertyProvider(::RPG::Client::GridFightRole* a1)
	{
		return ((::Class_0_16E4307DCC419505_641*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_3B958C78ED93BA76_CREATEPROPERTYPROVIDER_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* CreateEquipItems(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_3B958C78ED93BA76_CREATEEQUIPITEMS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>* CreateTraits(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_3B958C78ED93BA76_CREATETRAITS_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B958C78ED93BA76___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};

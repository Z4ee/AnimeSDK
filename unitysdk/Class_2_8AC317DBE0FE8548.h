#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRole_GridFightRoleBuilder.h"

class Class_0_16E4307DCC419505_631;
class Class_0_16E4307DCC419505_641;
namespace RPG::Client { class GridFightEquipComponent; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitComponent; }
namespace RPG::Client { class GridFightValueComponent; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_8AC317DBE0FE8548_CLEAR_OFFSET UNITYSDK_OFFSET(0xBEED160)
#define CLASS_2_8AC317DBE0FE8548_CREATEEQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0xBEED690)
#define CLASS_2_8AC317DBE0FE8548_CREATEEQUIPITEMS_OFFSET UNITYSDK_OFFSET(0xBEED890)
#define CLASS_2_8AC317DBE0FE8548_CREATEPROPERTYPROVIDER_OFFSET UNITYSDK_OFFSET(0xBEED1F0)
#define CLASS_2_8AC317DBE0FE8548_CREATETRAITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xBEED600)
#define CLASS_2_8AC317DBE0FE8548_CREATETRAITS_OFFSET UNITYSDK_OFFSET(0xBEED920)
#define CLASS_2_8AC317DBE0FE8548_CREATEVALUECOMPONENT_OFFSET UNITYSDK_OFFSET(0xBEED790)
#define CLASS_2_8AC317DBE0FE8548_METHOD_2_6CC8C5780BA8DF0B_OFFSET UNITYSDK_OFFSET(0xBEED0E0)
#define CLASS_2_8AC317DBE0FE8548__CTOR_OFFSET UNITYSDK_OFFSET(0xBEED1E0)
#define CLASS_2_8AC317DBE0FE8548___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xBEED9E0)
#define CLASS_2_8AC317DBE0FE8548___IFIXBASEPROXY_CREATEEQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0xBEEDA60)
#define CLASS_2_8AC317DBE0FE8548___IFIXBASEPROXY_CREATETRAITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xBEEDA50)
#define CLASS_2_8AC317DBE0FE8548___IFIXBASEPROXY_CREATEVALUECOMPONENT_OFFSET UNITYSDK_OFFSET(0xBEEDA70)

inline static constexpr unsigned int Class_2_8AC317DBE0FE8548_TypeDefinitionIndex = 52861;

class Class_2_8AC317DBE0FE8548 : public ::RPG::Client::GridFightRole_GridFightRoleBuilder
{
public:
	::Class_0_16E4307DCC419505_631* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548__CTOR_OFFSET))(this);
	}

	static ::Class_2_8AC317DBE0FE8548* Method_2_6CC8C5780BA8DF0B(::Class_0_16E4307DCC419505_631* a1)
	{
		return ((::Class_2_8AC317DBE0FE8548*(*)(::Class_0_16E4307DCC419505_631*))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548_METHOD_2_6CC8C5780BA8DF0B_OFFSET))(a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548_CLEAR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_641* CreatePropertyProvider(::RPG::Client::GridFightRole* a1)
	{
		return ((::Class_0_16E4307DCC419505_641*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548_CREATEPROPERTYPROVIDER_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightTraitComponent* CreateTraitComponent(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::Client::GridFightTraitComponent*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548_CREATETRAITCOMPONENT_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightEquipComponent* CreateEquipComponent(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::Client::GridFightEquipComponent*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548_CREATEEQUIPCOMPONENT_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightValueComponent* CreateValueComponent(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::Client::GridFightValueComponent*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548_CREATEVALUECOMPONENT_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* CreateEquipItems(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548_CREATEEQUIPITEMS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>* CreateTraits(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548_CREATETRAITS_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}

	::RPG::Client::GridFightTraitComponent* __iFixBaseProxy_CreateTraitComponent(::RPG::Client::GridFightRole* P0)
	{
		return ((::RPG::Client::GridFightTraitComponent*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548___IFIXBASEPROXY_CREATETRAITCOMPONENT_OFFSET))(this, P0);
	}

	::RPG::Client::GridFightEquipComponent* __iFixBaseProxy_CreateEquipComponent(::RPG::Client::GridFightRole* P0)
	{
		return ((::RPG::Client::GridFightEquipComponent*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548___IFIXBASEPROXY_CREATEEQUIPCOMPONENT_OFFSET))(this, P0);
	}

	::RPG::Client::GridFightValueComponent* __iFixBaseProxy_CreateValueComponent(::RPG::Client::GridFightRole* P0)
	{
		return ((::RPG::Client::GridFightValueComponent*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548___IFIXBASEPROXY_CREATEVALUECOMPONENT_OFFSET))(this, P0);
	}
};

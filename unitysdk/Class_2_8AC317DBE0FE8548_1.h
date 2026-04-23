#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRole_GridFightRoleBuilder.h"

class Class_0_16E4307DCC419505_722;
class Class_0_16E4307DCC419505_737;
namespace RPG::Client { class GridFightEquipComponent; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitComponent; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_8AC317DBE0FE8548_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x926C150)
#define CLASS_2_8AC317DBE0FE8548_1_CREATEEQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0x926C550)
#define CLASS_2_8AC317DBE0FE8548_1_CREATEEQUIPITEMS_OFFSET UNITYSDK_OFFSET(0x926C650)
#define CLASS_2_8AC317DBE0FE8548_1_CREATEPROPERTYPROVIDER_OFFSET UNITYSDK_OFFSET(0x926C1D0)
#define CLASS_2_8AC317DBE0FE8548_1_CREATETRAITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x926C4C0)
#define CLASS_2_8AC317DBE0FE8548_1_CREATETRAITS_OFFSET UNITYSDK_OFFSET(0x926C6E0)
#define CLASS_2_8AC317DBE0FE8548_1_METHOD_2_6CC8C5780BA8DF0B_OFFSET UNITYSDK_OFFSET(0x926C0D0)
#define CLASS_2_8AC317DBE0FE8548_1__CTOR_OFFSET UNITYSDK_OFFSET(0x926C7A0)
#define CLASS_2_8AC317DBE0FE8548_1___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x926C7B0)
#define CLASS_2_8AC317DBE0FE8548_1___IFIXBASEPROXY_CREATEEQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0x926C830)
#define CLASS_2_8AC317DBE0FE8548_1___IFIXBASEPROXY_CREATETRAITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x926C820)

inline static constexpr unsigned int Class_2_8AC317DBE0FE8548_1_TypeDefinitionIndex = 59939;

class Class_2_8AC317DBE0FE8548_1 : public ::RPG::Client::GridFightRole_GridFightRoleBuilder
{
public:
	::Class_0_16E4307DCC419505_722* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548_1__CTOR_OFFSET))(this);
	}

	static ::Class_2_8AC317DBE0FE8548_1* Method_2_6CC8C5780BA8DF0B(::Class_0_16E4307DCC419505_722* a1)
	{
		return ((::Class_2_8AC317DBE0FE8548_1*(*)(::Class_0_16E4307DCC419505_722*))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548_1_METHOD_2_6CC8C5780BA8DF0B_OFFSET))(a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548_1_CLEAR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_737* CreatePropertyProvider(::RPG::Client::GridFightRole* a1)
	{
		return ((::Class_0_16E4307DCC419505_737*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548_1_CREATEPROPERTYPROVIDER_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightTraitComponent* CreateTraitComponent(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::Client::GridFightTraitComponent*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548_1_CREATETRAITCOMPONENT_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightEquipComponent* CreateEquipComponent(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::Client::GridFightEquipComponent*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548_1_CREATEEQUIPCOMPONENT_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* CreateEquipItems(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548_1_CREATEEQUIPITEMS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>* CreateTraits(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548_1_CREATETRAITS_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548_1___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}

	::RPG::Client::GridFightTraitComponent* __iFixBaseProxy_CreateTraitComponent(::RPG::Client::GridFightRole* P0)
	{
		return ((::RPG::Client::GridFightTraitComponent*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548_1___IFIXBASEPROXY_CREATETRAITCOMPONENT_OFFSET))(this, P0);
	}

	::RPG::Client::GridFightEquipComponent* __iFixBaseProxy_CreateEquipComponent(::RPG::Client::GridFightRole* P0)
	{
		return ((::RPG::Client::GridFightEquipComponent*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548_1___IFIXBASEPROXY_CREATEEQUIPCOMPONENT_OFFSET))(this, P0);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRole_GridFightRoleBuilder.h"

class Class_0_16E4307DCC419505_855;
class Class_0_16E4307DCC419505_876;
namespace RPG::Client { class GridFightEquipComponent; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitComponent; }
namespace RPG::Client { class GridFightValueComponent; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_8AC317DBE0FE8548_CLEAR_OFFSET UNITYSDK_OFFSET(0x189567D0)
#define CLASS_2_8AC317DBE0FE8548_CREATEEQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0x18956B30)
#define CLASS_2_8AC317DBE0FE8548_CREATEEQUIPITEMS_OFFSET UNITYSDK_OFFSET(0x18956D30)
#define CLASS_2_8AC317DBE0FE8548_CREATEPROPERTYPROVIDER_OFFSET UNITYSDK_OFFSET(0x18956860)
#define CLASS_2_8AC317DBE0FE8548_CREATETRAITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x18956AA0)
#define CLASS_2_8AC317DBE0FE8548_CREATETRAITS_OFFSET UNITYSDK_OFFSET(0x18956DD0)
#define CLASS_2_8AC317DBE0FE8548_CREATEVALUECOMPONENT_OFFSET UNITYSDK_OFFSET(0x18956C30)
#define CLASS_2_8AC317DBE0FE8548_METHOD_2_6CC8C5780BA8DF0B_OFFSET UNITYSDK_OFFSET(0x18956750)
#define CLASS_2_8AC317DBE0FE8548__CTOR_OFFSET UNITYSDK_OFFSET(0x18956850)

inline static constexpr unsigned int Class_2_8AC317DBE0FE8548_TypeDefinitionIndex = 65169;

class Class_2_8AC317DBE0FE8548 : public ::RPG::Client::GridFightRole_GridFightRoleBuilder
{
public:
	::Class_0_16E4307DCC419505_855* BABBJILOOAL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548__CTOR_OFFSET))(this);
	}

	static ::Class_2_8AC317DBE0FE8548* Method_2_6CC8C5780BA8DF0B(::Class_0_16E4307DCC419505_855* a1)
	{
		return ((::Class_2_8AC317DBE0FE8548*(*)(::Class_0_16E4307DCC419505_855*))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548_METHOD_2_6CC8C5780BA8DF0B_OFFSET))(a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548_CLEAR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_876* CreatePropertyProvider(::RPG::Client::GridFightRole* a1)
	{
		return ((::Class_0_16E4307DCC419505_876*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_8AC317DBE0FE8548_CREATEPROPERTYPROVIDER_OFFSET))(this, a1);
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
};

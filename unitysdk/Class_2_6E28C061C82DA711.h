#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRole_GridFightRoleBuilder.h"

class Class_0_16E4307DCC419505_788;
class Class_1_B1FF62FAE312BC49_5;
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_6E28C061C82DA711_CLEAR_OFFSET UNITYSDK_OFFSET(0x1416E830)
#define CLASS_2_6E28C061C82DA711_CREATEEQUIPITEMS_OFFSET UNITYSDK_OFFSET(0x1416E900)
#define CLASS_2_6E28C061C82DA711_CREATEPROPERTYPROVIDER_OFFSET UNITYSDK_OFFSET(0x1416E8B0)
#define CLASS_2_6E28C061C82DA711_CREATETRAITS_OFFSET UNITYSDK_OFFSET(0x1416ED70)
#define CLASS_2_6E28C061C82DA711_METHOD_2_617C5F75EC8B9441_OFFSET UNITYSDK_OFFSET(0x1416E670)
#define CLASS_2_6E28C061C82DA711__CTOR_OFFSET UNITYSDK_OFFSET(0x1416EE00)
#define CLASS_2_6E28C061C82DA711___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x1416EE10)

inline static constexpr unsigned int Class_2_6E28C061C82DA711_TypeDefinitionIndex = 60877;

class Class_2_6E28C061C82DA711 : public ::RPG::Client::GridFightRole_GridFightRoleBuilder
{
public:
	::Class_1_B1FF62FAE312BC49_5* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E28C061C82DA711__CTOR_OFFSET))(this);
	}

	static ::Class_2_6E28C061C82DA711* Method_2_617C5F75EC8B9441(::Class_1_B1FF62FAE312BC49_5* a1)
	{
		return ((::Class_2_6E28C061C82DA711*(*)(::Class_1_B1FF62FAE312BC49_5*))((::PBYTE)hIl2Cpp + CLASS_2_6E28C061C82DA711_METHOD_2_617C5F75EC8B9441_OFFSET))(a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E28C061C82DA711_CLEAR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_788* CreatePropertyProvider(::RPG::Client::GridFightRole* a1)
	{
		return ((::Class_0_16E4307DCC419505_788*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_6E28C061C82DA711_CREATEPROPERTYPROVIDER_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* CreateEquipItems(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_6E28C061C82DA711_CREATEEQUIPITEMS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>* CreateTraits(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_6E28C061C82DA711_CREATETRAITS_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E28C061C82DA711___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};

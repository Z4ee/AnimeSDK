#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AC9FD4BF1AF061DA.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/Struct_2_61D95EB9B5A93E74.h"

namespace MoleMole { class UITowerDefenseMainPageController; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_42F94E66B70BCA3C_METHOD_3_0033351697D14BFF_OFFSET UNITYSDK_OFFSET(0x119FD930)
#define CLASS_3_42F94E66B70BCA3C_METHOD_3_16B6F119BA23CC92_OFFSET UNITYSDK_OFFSET(0x119FDAD0)
#define CLASS_3_42F94E66B70BCA3C_METHOD_3_31258BE0B18AB062_OFFSET UNITYSDK_OFFSET(0x119FDDC0)
#define CLASS_3_42F94E66B70BCA3C_METHOD_3_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x119FDFA0)
#define CLASS_3_42F94E66B70BCA3C_METHOD_3_582AFEBA95488738_OFFSET UNITYSDK_OFFSET(0x119FDF00)
#define CLASS_3_42F94E66B70BCA3C_METHOD_3_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x119FE060)
#define CLASS_3_42F94E66B70BCA3C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x119FDAA0)
#define CLASS_3_42F94E66B70BCA3C__CTOR_OFFSET UNITYSDK_OFFSET(0x119FD900)

inline static constexpr unsigned int Class_3_42F94E66B70BCA3C_TypeDefinitionIndex = 76947;

class Class_3_42F94E66B70BCA3C : public ::Class_2_AC9FD4BF1AF061DA
{
public:
	::System::Void _ctor(::MoleMole::UITowerDefenseMainPageController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UITowerDefenseMainPageController*))((::PBYTE)hIl2Cpp + CLASS_3_42F94E66B70BCA3C__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::MoleMole::UITowerDefenseMainPageController* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UITowerDefenseMainPageController*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_42F94E66B70BCA3C__CTOR_1_OFFSET))(this, a1, a2);
	}

	::Struct_2_61D95EB9B5A93E74 Method_3_16B6F119BA23CC92(::MoleMole::InputActionEvent a1)
	{
		return ((::Struct_2_61D95EB9B5A93E74(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + CLASS_3_42F94E66B70BCA3C_METHOD_3_16B6F119BA23CC92_OFFSET))(this, a1);
	}

	::System::Void Method_3_31258BE0B18AB062(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_42F94E66B70BCA3C_METHOD_3_31258BE0B18AB062_OFFSET))(this, a1);
	}

	::System::Void Method_3_582AFEBA95488738(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_42F94E66B70BCA3C_METHOD_3_582AFEBA95488738_OFFSET))(this, a1);
	}

	::System::Void Method_3_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_42F94E66B70BCA3C_METHOD_3_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Void Method_3_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_42F94E66B70BCA3C_METHOD_3_A1781348F0A89177_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Method_3_0033351697D14BFF(::MoleMole::UITowerDefenseMainPageController* a1)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::MoleMole::UITowerDefenseMainPageController*))((::PBYTE)hIl2Cpp + CLASS_3_42F94E66B70BCA3C_METHOD_3_0033351697D14BFF_OFFSET))(a1);
	}
};

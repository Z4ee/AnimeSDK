#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B1FF62FAE312BC49_5;
class Class_2_E0861AFB565AB94D;
namespace RPG::Client { class GridFightEquipDressEvent; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightEquipReturnPackEvent; }

#define CLASS_2_E0861AFB565AB94D___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x142D6690)
#define CLASS_2_E0861AFB565AB94D___C__DISPLAYCLASS6_0__UPDATEROLE_B__0_OFFSET UNITYSDK_OFFSET(0x142D8B20)
#define CLASS_2_E0861AFB565AB94D___C__DISPLAYCLASS6_0__UPDATEROLE_B__1_OFFSET UNITYSDK_OFFSET(0x142D8B60)
#define CLASS_2_E0861AFB565AB94D___C__DISPLAYCLASS6_0__UPDATEROLE_B__2_OFFSET UNITYSDK_OFFSET(0x142D8B90)
#define CLASS_2_E0861AFB565AB94D___C__DISPLAYCLASS6_0__UPDATEROLE_B__3_OFFSET UNITYSDK_OFFSET(0x142D8BE0)

inline static constexpr unsigned int Class_2_E0861AFB565AB94D___c__DisplayClass6_0_TypeDefinitionIndex = 60737;

class Class_2_E0861AFB565AB94D___c__DisplayClass6_0 : public ::System::Object
{
public:
	::Class_2_E0861AFB565AB94D* __4__this; // 0x10
	::Class_1_B1FF62FAE312BC49_5* roleSever; // 0x18
	::System::Boolean craft; // 0x20
	::System::Boolean trackDress; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _UpdateRole_b__0(::RPG::Client::GridFightEquipItemData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D___C__DISPLAYCLASS6_0__UPDATEROLE_B__0_OFFSET))(this, a1);
	}

	::System::Boolean _UpdateRole_b__1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D___C__DISPLAYCLASS6_0__UPDATEROLE_B__1_OFFSET))(this, a1);
	}

	::System::Boolean _UpdateRole_b__2(::RPG::Client::GridFightEquipDressEvent* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipDressEvent*))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D___C__DISPLAYCLASS6_0__UPDATEROLE_B__2_OFFSET))(this, a1);
	}

	::System::Boolean _UpdateRole_b__3(::RPG::Client::GridFightEquipReturnPackEvent* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipReturnPackEvent*))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D___C__DISPLAYCLASS6_0__UPDATEROLE_B__3_OFFSET))(this, a1);
	}
};

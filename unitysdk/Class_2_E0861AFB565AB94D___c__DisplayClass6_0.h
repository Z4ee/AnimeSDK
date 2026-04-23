#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B1FF62FAE312BC49_4;
class Class_2_E0861AFB565AB94D;
namespace RPG::Client { class GridFightEquipDressEvent; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightEquipReturnPackEvent; }

#define CLASS_2_E0861AFB565AB94D___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x129BC2D0)
#define CLASS_2_E0861AFB565AB94D___C__DISPLAYCLASS6_0__UPDATEROLE_B__0_OFFSET UNITYSDK_OFFSET(0x129BE800)
#define CLASS_2_E0861AFB565AB94D___C__DISPLAYCLASS6_0__UPDATEROLE_B__1_OFFSET UNITYSDK_OFFSET(0x129BE840)
#define CLASS_2_E0861AFB565AB94D___C__DISPLAYCLASS6_0__UPDATEROLE_B__2_OFFSET UNITYSDK_OFFSET(0x129BE870)
#define CLASS_2_E0861AFB565AB94D___C__DISPLAYCLASS6_0__UPDATEROLE_B__3_OFFSET UNITYSDK_OFFSET(0x129BE8D0)

inline static constexpr unsigned int Class_2_E0861AFB565AB94D___c__DisplayClass6_0_TypeDefinitionIndex = 59802;

class Class_2_E0861AFB565AB94D___c__DisplayClass6_0 : public ::System::Object
{
public:
	::Class_2_E0861AFB565AB94D* __4__this; // 0x10
	::Class_1_B1FF62FAE312BC49_4* roleSever; // 0x18
	::System::Boolean craft; // 0x20
	::System::Boolean trackDress; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _UpdateRole_b__0(::RPG::Client::GridFightEquipItemData* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D___C__DISPLAYCLASS6_0__UPDATEROLE_B__0_OFFSET))(this, x);
	}

	::System::Boolean _UpdateRole_b__1(::System::UInt32 x)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D___C__DISPLAYCLASS6_0__UPDATEROLE_B__1_OFFSET))(this, x);
	}

	::System::Boolean _UpdateRole_b__2(::RPG::Client::GridFightEquipDressEvent* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipDressEvent*))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D___C__DISPLAYCLASS6_0__UPDATEROLE_B__2_OFFSET))(this, x);
	}

	::System::Boolean _UpdateRole_b__3(::RPG::Client::GridFightEquipReturnPackEvent* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipReturnPackEvent*))((::PBYTE)hIl2Cpp + CLASS_2_E0861AFB565AB94D___C__DISPLAYCLASS6_0__UPDATEROLE_B__3_OFFSET))(this, x);
	}
};

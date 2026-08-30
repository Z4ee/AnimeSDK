#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_190BB2A3D431BCD2_1;
class Class_2_599C9F65F3F85994;
namespace RPG::Client { class GridFightEquipDressEvent; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightEquipReturnPackEvent; }

#define CLASS_2_599C9F65F3F85994___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1626B4A0)
#define CLASS_2_599C9F65F3F85994___C__DISPLAYCLASS6_0__UPDATEROLE_B__0_OFFSET UNITYSDK_OFFSET(0x1626D780)
#define CLASS_2_599C9F65F3F85994___C__DISPLAYCLASS6_0__UPDATEROLE_B__1_OFFSET UNITYSDK_OFFSET(0x1626D7C0)
#define CLASS_2_599C9F65F3F85994___C__DISPLAYCLASS6_0__UPDATEROLE_B__2_OFFSET UNITYSDK_OFFSET(0x1626D7F0)
#define CLASS_2_599C9F65F3F85994___C__DISPLAYCLASS6_0__UPDATEROLE_B__3_OFFSET UNITYSDK_OFFSET(0x1626D840)

inline static constexpr unsigned int Class_2_599C9F65F3F85994___c__DisplayClass6_0_TypeDefinitionIndex = 65013;

class Class_2_599C9F65F3F85994___c__DisplayClass6_0 : public ::System::Object
{
public:
	::Class_2_599C9F65F3F85994* __4__this; // 0x10
	::Class_1_190BB2A3D431BCD2_1* roleSever; // 0x18
	::System::Boolean trackDress; // 0x20
	::System::Boolean craft; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_599C9F65F3F85994___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _UpdateRole_b__0(::RPG::Client::GridFightEquipItemData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + CLASS_2_599C9F65F3F85994___C__DISPLAYCLASS6_0__UPDATEROLE_B__0_OFFSET))(this, a1);
	}

	::System::Boolean _UpdateRole_b__1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_599C9F65F3F85994___C__DISPLAYCLASS6_0__UPDATEROLE_B__1_OFFSET))(this, a1);
	}

	::System::Boolean _UpdateRole_b__2(::RPG::Client::GridFightEquipDressEvent* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipDressEvent*))((::PBYTE)hIl2Cpp + CLASS_2_599C9F65F3F85994___C__DISPLAYCLASS6_0__UPDATEROLE_B__2_OFFSET))(this, a1);
	}

	::System::Boolean _UpdateRole_b__3(::RPG::Client::GridFightEquipReturnPackEvent* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipReturnPackEvent*))((::PBYTE)hIl2Cpp + CLASS_2_599C9F65F3F85994___C__DISPLAYCLASS6_0__UPDATEROLE_B__3_OFFSET))(this, a1);
	}
};

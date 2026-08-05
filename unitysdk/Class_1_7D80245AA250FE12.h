#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/InspireZoneOperationType.h"
#include "unitysdk/System/Object.h"

class Class_3_11169EF287A415D4;
class Class_3_74DA69CCEDE0F2BC;
namespace MoleMole { class UIInLevelExQteFeverV3ChildWindowController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_1_7D80245AA250FE12_METHOD_1_15218209419C07DA_OFFSET UNITYSDK_OFFSET(0xE924CD0)
#define CLASS_1_7D80245AA250FE12_METHOD_1_35DA46F52D0193EC_OFFSET UNITYSDK_OFFSET(0xE924E40)
#define CLASS_1_7D80245AA250FE12_METHOD_1_38CB5172B7D398E7_OFFSET UNITYSDK_OFFSET(0xE9249E0)
#define CLASS_1_7D80245AA250FE12_METHOD_1_5D65393EE7EC03BB_OFFSET UNITYSDK_OFFSET(0xE9250F0)
#define CLASS_1_7D80245AA250FE12_METHOD_1_76A1664A40625620_OFFSET UNITYSDK_OFFSET(0xE923C40)
#define CLASS_1_7D80245AA250FE12_METHOD_1_861970C5F2C21AB2_OFFSET UNITYSDK_OFFSET(0xE924220)
#define CLASS_1_7D80245AA250FE12_METHOD_1_C3DB5CCB81D3E05E_OFFSET UNITYSDK_OFFSET(0xE9239E0)
#define CLASS_1_7D80245AA250FE12_METHOD_1_C436A2848092EB88_OFFSET UNITYSDK_OFFSET(0xE925360)
#define CLASS_1_7D80245AA250FE12_METHOD_1_CEBFF096B4C9D46B_OFFSET UNITYSDK_OFFSET(0xE924360)
#define CLASS_1_7D80245AA250FE12_METHOD_1_D6663AFD0FE93909_OFFSET UNITYSDK_OFFSET(0xE9242C0)
#define CLASS_1_7D80245AA250FE12__CTOR_OFFSET UNITYSDK_OFFSET(0xE9239D0)

inline static constexpr unsigned int Class_1_7D80245AA250FE12_TypeDefinitionIndex = 86682;

class Class_1_7D80245AA250FE12 : public ::System::Object
{
public:
	::MoleMole::UIInLevelExQteFeverV3ChildWindowController* Field_1_1; // 0x10
	::Class_3_74DA69CCEDE0F2BC* Field_1_6; // 0x18
	::Class_3_11169EF287A415D4* Field_1_7; // 0x20
	::System::Boolean Field_1_5; // 0x28
	::System::Single Field_1_11; // 0x2C
	::System::UInt32 Field_1_0; // 0x30
	::MoleMole::Battle::InspireZoneOperationType Field_1_8; // 0x34
	::System::Int32 Field_1_10; // 0x38
	::System::Single Field_1_4; // 0x3C
	::System::Int32 Field_1_9; // 0x40

	::System::Void _ctor(::MoleMole::UIInLevelExQteFeverV3ChildWindowController* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelExQteFeverV3ChildWindowController*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7D80245AA250FE12__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C3DB5CCB81D3E05E(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7D80245AA250FE12_METHOD_1_C3DB5CCB81D3E05E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_76A1664A40625620(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7D80245AA250FE12_METHOD_1_76A1664A40625620_OFFSET))(this, a1);
	}

	::System::Void Method_1_CEBFF096B4C9D46B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D80245AA250FE12_METHOD_1_CEBFF096B4C9D46B_OFFSET))(this);
	}

	static ::System::Single Method_1_861970C5F2C21AB2()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_7D80245AA250FE12_METHOD_1_861970C5F2C21AB2_OFFSET))();
	}

	::System::Void Method_1_15218209419C07DA(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7D80245AA250FE12_METHOD_1_15218209419C07DA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_35DA46F52D0193EC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7D80245AA250FE12_METHOD_1_35DA46F52D0193EC_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5D65393EE7EC03BB(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7D80245AA250FE12_METHOD_1_5D65393EE7EC03BB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_38CB5172B7D398E7(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_7D80245AA250FE12_METHOD_1_38CB5172B7D398E7_OFFSET))(this, a1);
	}

	static ::System::String* Method_1_D6663AFD0FE93909(::System::Single a1)
	{
		return ((::System::String*(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7D80245AA250FE12_METHOD_1_D6663AFD0FE93909_OFFSET))(a1);
	}

	::System::Void Method_1_C436A2848092EB88()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D80245AA250FE12_METHOD_1_C436A2848092EB88_OFFSET))(this);
	}
};

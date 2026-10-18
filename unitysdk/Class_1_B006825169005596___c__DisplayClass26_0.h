#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B006825169005596;
class Class_1_B006825169005596_Class_1_44E017255FAE66DF;
namespace System { class String; }

#define CLASS_1_B006825169005596___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC2946D0)
#define CLASS_1_B006825169005596___C__DISPLAYCLASS26_0___SHOWSELFSLOT_B__0_OFFSET UNITYSDK_OFFSET(0xC295DF0)

inline static constexpr unsigned int Class_1_B006825169005596___c__DisplayClass26_0_TypeDefinitionIndex = 75639;

class Class_1_B006825169005596___c__DisplayClass26_0 : public ::System::Object
{
public:
	::Class_1_B006825169005596* __4__this; // 0x10
	::System::String* baseName; // 0x18
	::Class_1_B006825169005596_Class_1_44E017255FAE66DF* profile; // 0x20
	::System::UInt32 summonUnitId; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B006825169005596___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
	}

	::System::Void __ShowSelfSlot_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B006825169005596___C__DISPLAYCLASS26_0___SHOWSELFSLOT_B__0_OFFSET))(this);
	}
};

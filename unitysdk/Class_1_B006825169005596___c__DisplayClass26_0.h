#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B006825169005596;
class Class_1_B006825169005596_Class_1_44E017255FAE66DF;
namespace System { class String; }

#define CLASS_1_B006825169005596___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC28CCE0)
#define CLASS_1_B006825169005596___C__DISPLAYCLASS26_0___SHOWSELFSLOT_B__0_OFFSET UNITYSDK_OFFSET(0xC28E410)

inline static constexpr unsigned int Class_1_B006825169005596___c__DisplayClass26_0_TypeDefinitionIndex = 75638;

class Class_1_B006825169005596___c__DisplayClass26_0 : public ::System::Object
{
public:
	::System::String* baseName; // 0x10
	::Class_1_B006825169005596_Class_1_44E017255FAE66DF* profile; // 0x18
	::Class_1_B006825169005596* __4__this; // 0x20
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

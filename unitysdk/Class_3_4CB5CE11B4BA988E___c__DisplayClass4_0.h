#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_4CB5CE11B4BA988E;
namespace System { class String; }

#define CLASS_3_4CB5CE11B4BA988E___C__DISPLAYCLASS4_0__CREATESINGLENPC_B__0_OFFSET UNITYSDK_OFFSET(0x17DC67D0)
#define CLASS_3_4CB5CE11B4BA988E___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17DC6390)

inline static constexpr unsigned int Class_3_4CB5CE11B4BA988E___c__DisplayClass4_0_TypeDefinitionIndex = 58204;

class Class_3_4CB5CE11B4BA988E___c__DisplayClass4_0 : public ::System::Object
{
public:
	::System::String* defaultState; // 0x10
	::Class_3_4CB5CE11B4BA988E* __4__this; // 0x18
	::System::UInt32 npcID; // 0x20
	::System::UInt32 groupID; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4CB5CE11B4BA988E___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Void _CreateSingleNpc_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4CB5CE11B4BA988E___C__DISPLAYCLASS4_0__CREATESINGLENPC_B__0_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FD740778034CC2E9;
namespace RPG::Client { class EquipmentItemData; }
namespace System { class String; }

#define CLASS_1_FD740778034CC2E9___C__DISPLAYCLASS1_0__CREATEITEM_B__0_OFFSET UNITYSDK_OFFSET(0x18519960)
#define CLASS_1_FD740778034CC2E9___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18519940)

inline static constexpr unsigned int Class_1_FD740778034CC2E9___c__DisplayClass1_0_TypeDefinitionIndex = 65631;

class Class_1_FD740778034CC2E9___c__DisplayClass1_0 : public ::System::Object
{
public:
	::Class_1_FD740778034CC2E9* __4__this; // 0x10
	::RPG::Client::EquipmentItemData* equip; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD740778034CC2E9___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::String* _CreateItem_b__0()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD740778034CC2E9___C__DISPLAYCLASS1_0__CREATEITEM_B__0_OFFSET))(this);
	}
};

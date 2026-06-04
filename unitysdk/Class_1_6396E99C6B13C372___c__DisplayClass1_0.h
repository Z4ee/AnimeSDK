#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class ItemCost; }

#define CLASS_1_6396E99C6B13C372___C__DISPLAYCLASS1_0__ADDCOSTITEM_B__0_OFFSET UNITYSDK_OFFSET(0xAFD3680)
#define CLASS_1_6396E99C6B13C372___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAFD3320)

inline static constexpr unsigned int Class_1_6396E99C6B13C372___c__DisplayClass1_0_TypeDefinitionIndex = 61433;

class Class_1_6396E99C6B13C372___c__DisplayClass1_0 : public ::System::Object
{
public:
	::System::UInt32 itemID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6396E99C6B13C372___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _AddCostItem_b__0(::Proto::ItemCost* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Proto::ItemCost*))((::PBYTE)hIl2Cpp + CLASS_1_6396E99C6B13C372___C__DISPLAYCLASS1_0__ADDCOSTITEM_B__0_OFFSET))(this, a1);
	}
};

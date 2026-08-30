#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class ItemCost; }

#define CLASS_1_6396E99C6B13C372___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x170811D0)
#define CLASS_1_6396E99C6B13C372___C__DISPLAYCLASS2_0__GETALREADYCOSTITEMNUM_B__0_OFFSET UNITYSDK_OFFSET(0x17081440)

inline static constexpr unsigned int Class_1_6396E99C6B13C372___c__DisplayClass2_0_TypeDefinitionIndex = 65766;

class Class_1_6396E99C6B13C372___c__DisplayClass2_0 : public ::System::Object
{
public:
	::System::UInt32 itemID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6396E99C6B13C372___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetAlreadyCostItemNum_b__0(::Proto::ItemCost* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Proto::ItemCost*))((::PBYTE)hIl2Cpp + CLASS_1_6396E99C6B13C372___C__DISPLAYCLASS2_0__GETALREADYCOSTITEMNUM_B__0_OFFSET))(this, a1);
	}
};

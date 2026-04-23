#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }

#define CLASS_1_0812913C2F0E10CD___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9772320)
#define CLASS_1_0812913C2F0E10CD___C__DISPLAYCLASS7_0__GETEQUIPITEMDATABYID_B__0_OFFSET UNITYSDK_OFFSET(0x97725D0)

inline static constexpr unsigned int Class_1_0812913C2F0E10CD___c__DisplayClass7_0_TypeDefinitionIndex = 60141;

class Class_1_0812913C2F0E10CD___c__DisplayClass7_0 : public ::System::Object
{
public:
	::System::UInt32 itemID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0812913C2F0E10CD___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetEquipItemDataByID_b__0(::RPG::Client::GridFightEquipItemData* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + CLASS_1_0812913C2F0E10CD___C__DISPLAYCLASS7_0__GETEQUIPITEMDATABYID_B__0_OFFSET))(this, x);
	}
};

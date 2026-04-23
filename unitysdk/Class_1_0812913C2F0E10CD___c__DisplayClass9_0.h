#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }

#define CLASS_1_0812913C2F0E10CD___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9772460)
#define CLASS_1_0812913C2F0E10CD___C__DISPLAYCLASS9_0__GETNONETEMPORARYEQUIPITEMCOUNT_B__0_OFFSET UNITYSDK_OFFSET(0x9772610)

inline static constexpr unsigned int Class_1_0812913C2F0E10CD___c__DisplayClass9_0_TypeDefinitionIndex = 60142;

class Class_1_0812913C2F0E10CD___c__DisplayClass9_0 : public ::System::Object
{
public:
	::System::UInt32 itemID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0812913C2F0E10CD___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetNoneTemporaryEquipItemCount_b__0(::RPG::Client::GridFightEquipItemData* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + CLASS_1_0812913C2F0E10CD___C__DISPLAYCLASS9_0__GETNONETEMPORARYEQUIPITEMCOUNT_B__0_OFFSET))(this, x);
	}
};

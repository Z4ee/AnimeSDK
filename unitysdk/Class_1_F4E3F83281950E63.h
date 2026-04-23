#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_722;
namespace RPG::Client { class GridFightConsumableInfo_GridFightConsumableItemUseParam; }
namespace RPG::Client { class GridFightConsumableItemData; }
namespace System { class String; }

#define CLASS_1_F4E3F83281950E63_METHOD_1_98E3962181896F40_OFFSET UNITYSDK_OFFSET(0x9A487F0)
#define CLASS_1_F4E3F83281950E63__CTOR_OFFSET UNITYSDK_OFFSET(0x9A48DC0)

inline static constexpr unsigned int Class_1_F4E3F83281950E63_TypeDefinitionIndex = 59757;

class Class_1_F4E3F83281950E63 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4E3F83281950E63__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_98E3962181896F40(::RPG::Client::GridFightConsumableItemData* a1, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam* a2, ::Class_0_16E4307DCC419505_722* a3, ::System::String*& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam*, ::Class_0_16E4307DCC419505_722*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_F4E3F83281950E63_METHOD_1_98E3962181896F40_OFFSET))(this, a1, a2, a3, a4);
	}
};

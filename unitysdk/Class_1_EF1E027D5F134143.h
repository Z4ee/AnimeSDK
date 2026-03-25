#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_631;
namespace RPG::Client { class GridFightConsumableInfo_GridFightConsumableItemUseParam; }
namespace RPG::Client { class GridFightConsumableItemData; }
namespace System { class String; }

#define CLASS_1_EF1E027D5F134143_METHOD_1_FFD84167DA9F4041_OFFSET UNITYSDK_OFFSET(0x110FE260)
#define CLASS_1_EF1E027D5F134143__CTOR_OFFSET UNITYSDK_OFFSET(0x110FE5F0)

inline static constexpr unsigned int Class_1_EF1E027D5F134143_TypeDefinitionIndex = 52702;

class Class_1_EF1E027D5F134143 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF1E027D5F134143__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_FFD84167DA9F4041(::RPG::Client::GridFightConsumableItemData* a1, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam* a2, ::Class_0_16E4307DCC419505_631* a3, ::System::String*& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam*, ::Class_0_16E4307DCC419505_631*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_EF1E027D5F134143_METHOD_1_FFD84167DA9F4041_OFFSET))(this, a1, a2, a3, a4);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_804;
namespace RPG::Client { class GridFightConsumableInfo_GridFightConsumableItemUseParam; }
namespace RPG::Client { class GridFightConsumableItemData; }
namespace System { class String; }

#define CLASS_1_AADFB9E5E000770C_METHOD_1_8BB41D7D8B8BEB1B_OFFSET UNITYSDK_OFFSET(0x16F86AB0)
#define CLASS_1_AADFB9E5E000770C__CTOR_OFFSET UNITYSDK_OFFSET(0x16F86E60)

inline static constexpr unsigned int Class_1_AADFB9E5E000770C_TypeDefinitionIndex = 61982;

class Class_1_AADFB9E5E000770C : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AADFB9E5E000770C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_8BB41D7D8B8BEB1B(::RPG::Client::GridFightConsumableItemData* a1, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam* a2, ::Class_0_16E4307DCC419505_804* a3, ::System::String*& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam*, ::Class_0_16E4307DCC419505_804*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_AADFB9E5E000770C_METHOD_1_8BB41D7D8B8BEB1B_OFFSET))(this, a1, a2, a3, a4);
	}
};

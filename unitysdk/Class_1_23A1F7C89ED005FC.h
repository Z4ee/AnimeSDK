#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_855;
namespace RPG::Client { class GridFightConsumableInfo_GridFightConsumableItemUseParam; }
namespace RPG::Client { class GridFightConsumableItemData; }
namespace System { class String; }

#define CLASS_1_23A1F7C89ED005FC_METHOD_1_226CC0D0ED3B146C_OFFSET UNITYSDK_OFFSET(0x165B0FA0)
#define CLASS_1_23A1F7C89ED005FC__CTOR_OFFSET UNITYSDK_OFFSET(0x165B1380)

inline static constexpr unsigned int Class_1_23A1F7C89ED005FC_TypeDefinitionIndex = 64967;

class Class_1_23A1F7C89ED005FC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23A1F7C89ED005FC__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_226CC0D0ED3B146C(::RPG::Client::GridFightConsumableItemData* a1, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam* a2, ::Class_0_16E4307DCC419505_855* a3, ::System::String*& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam*, ::Class_0_16E4307DCC419505_855*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_23A1F7C89ED005FC_METHOD_1_226CC0D0ED3B146C_OFFSET))(this, a1, a2, a3, a4);
	}
};

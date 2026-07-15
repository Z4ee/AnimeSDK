#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_804;
namespace RPG::Client { class GridFightConsumableInfo_GridFightConsumableItemUseParam; }
namespace RPG::Client { class GridFightConsumableItemData; }
namespace System { class String; }

#define CLASS_1_9F1CCF0374E58E56_METHOD_1_C10E5054E250E109_OFFSET UNITYSDK_OFFSET(0x14A1C3B0)
#define CLASS_1_9F1CCF0374E58E56__CTOR_OFFSET UNITYSDK_OFFSET(0x14A1CBA0)

inline static constexpr unsigned int Class_1_9F1CCF0374E58E56_TypeDefinitionIndex = 61984;

class Class_1_9F1CCF0374E58E56 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F1CCF0374E58E56__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_C10E5054E250E109(::RPG::Client::GridFightConsumableItemData* a1, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam* a2, ::Class_0_16E4307DCC419505_804* a3, ::System::String*& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam*, ::Class_0_16E4307DCC419505_804*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_9F1CCF0374E58E56_METHOD_1_C10E5054E250E109_OFFSET))(this, a1, a2, a3, a4);
	}
};

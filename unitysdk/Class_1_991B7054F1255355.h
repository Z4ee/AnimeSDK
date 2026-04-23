#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_722;
namespace RPG::Client { class GridFightConsumableInfo_GridFightConsumableItemUseParam; }
namespace RPG::Client { class GridFightConsumableItemData; }
namespace System { class String; }

#define CLASS_1_991B7054F1255355_METHOD_1_4F1DE9BEAC0E5F3F_OFFSET UNITYSDK_OFFSET(0xB7D4720)
#define CLASS_1_991B7054F1255355__CTOR_OFFSET UNITYSDK_OFFSET(0xB7D4970)

inline static constexpr unsigned int Class_1_991B7054F1255355_TypeDefinitionIndex = 59754;

class Class_1_991B7054F1255355 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_991B7054F1255355__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_4F1DE9BEAC0E5F3F(::RPG::Client::GridFightConsumableItemData* a1, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam* a2, ::Class_0_16E4307DCC419505_722* a3, ::System::String*& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam*, ::Class_0_16E4307DCC419505_722*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_991B7054F1255355_METHOD_1_4F1DE9BEAC0E5F3F_OFFSET))(this, a1, a2, a3, a4);
	}
};

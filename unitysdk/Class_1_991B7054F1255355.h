#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_631;
namespace RPG::Client { class GridFightConsumableInfo_GridFightConsumableItemUseParam; }
namespace RPG::Client { class GridFightConsumableItemData; }
namespace System { class String; }

#define CLASS_1_991B7054F1255355_METHOD_1_4F1DE9BEAC0E5F3F_OFFSET UNITYSDK_OFFSET(0x8711C60)
#define CLASS_1_991B7054F1255355__CTOR_OFFSET UNITYSDK_OFFSET(0x8711EB0)

inline static constexpr unsigned int Class_1_991B7054F1255355_TypeDefinitionIndex = 52697;

class Class_1_991B7054F1255355 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_991B7054F1255355__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_4F1DE9BEAC0E5F3F(::RPG::Client::GridFightConsumableItemData* a1, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam* a2, ::Class_0_16E4307DCC419505_631* a3, ::System::String*& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam*, ::Class_0_16E4307DCC419505_631*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_991B7054F1255355_METHOD_1_4F1DE9BEAC0E5F3F_OFFSET))(this, a1, a2, a3, a4);
	}
};

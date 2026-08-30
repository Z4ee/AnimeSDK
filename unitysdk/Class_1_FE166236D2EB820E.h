#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_855;
namespace RPG::Client { class GridFightConsumableInfo_GridFightConsumableItemUseParam; }
namespace RPG::Client { class GridFightConsumableItemData; }
namespace System { class String; }

#define CLASS_1_FE166236D2EB820E_METHOD_1_A25AFA711D167656_OFFSET UNITYSDK_OFFSET(0x187D1F30)
#define CLASS_1_FE166236D2EB820E__CTOR_OFFSET UNITYSDK_OFFSET(0x187D2260)

inline static constexpr unsigned int Class_1_FE166236D2EB820E_TypeDefinitionIndex = 64976;

class Class_1_FE166236D2EB820E : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE166236D2EB820E__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_A25AFA711D167656(::RPG::Client::GridFightConsumableItemData* a1, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam* a2, ::Class_0_16E4307DCC419505_855* a3, ::System::String*& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam*, ::Class_0_16E4307DCC419505_855*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_FE166236D2EB820E_METHOD_1_A25AFA711D167656_OFFSET))(this, a1, a2, a3, a4);
	}
};

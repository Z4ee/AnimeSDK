#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_722;
namespace RPG::Client { class GridFightConsumableInfo_GridFightConsumableItemUseParam; }
namespace RPG::Client { class GridFightConsumableItemData; }
namespace System { class String; }

#define CLASS_1_0FF3396EBF00475E_METHOD_1_B5F08E858455D9AA_OFFSET UNITYSDK_OFFSET(0x962CC90)
#define CLASS_1_0FF3396EBF00475E__CTOR_OFFSET UNITYSDK_OFFSET(0x962CE80)

inline static constexpr unsigned int Class_1_0FF3396EBF00475E_TypeDefinitionIndex = 59763;

class Class_1_0FF3396EBF00475E : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FF3396EBF00475E__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_B5F08E858455D9AA(::RPG::Client::GridFightConsumableItemData* a1, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam* a2, ::Class_0_16E4307DCC419505_722* a3, ::System::String*& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam*, ::Class_0_16E4307DCC419505_722*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_0FF3396EBF00475E_METHOD_1_B5F08E858455D9AA_OFFSET))(this, a1, a2, a3, a4);
	}
};

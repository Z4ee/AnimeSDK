#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RelicItemData; }

#define CLASS_1_E24892C513A3DEE7___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA042210)
#define CLASS_1_E24892C513A3DEE7___C__DISPLAYCLASS3_0__GETRELICRESULTINFOS_B__0_OFFSET UNITYSDK_OFFSET(0xA042840)

inline static constexpr unsigned int Class_1_E24892C513A3DEE7___c__DisplayClass3_0_TypeDefinitionIndex = 68702;

class Class_1_E24892C513A3DEE7___c__DisplayClass3_0 : public ::System::Object
{
public:
	::RPG::GameCore::RelicType relicType; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E24892C513A3DEE7___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetRelicResultInfos_b__0(::RPG::Client::RelicItemData* relic)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_E24892C513A3DEE7___C__DISPLAYCLASS3_0__GETRELICRESULTINFOS_B__0_OFFSET))(this, relic);
	}
};

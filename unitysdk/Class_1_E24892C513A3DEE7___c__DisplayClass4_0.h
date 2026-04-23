#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitResultRelicInfo; }

#define CLASS_1_E24892C513A3DEE7___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA042830)
#define CLASS_1_E24892C513A3DEE7___C__DISPLAYCLASS4_0___GETRELICSMARTSUITINVENTORYRELICINFOS_B__0_OFFSET UNITYSDK_OFFSET(0xA042870)

inline static constexpr unsigned int Class_1_E24892C513A3DEE7___c__DisplayClass4_0_TypeDefinitionIndex = 68703;

class Class_1_E24892C513A3DEE7___c__DisplayClass4_0 : public ::System::Object
{
public:
	::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* planResult; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E24892C513A3DEE7___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Int32 __GetRelicSmartSuitInventoryRelicInfos_b__0(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* a, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* b)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*))((::PBYTE)hIl2Cpp + CLASS_1_E24892C513A3DEE7___C__DISPLAYCLASS4_0___GETRELICSMARTSUITINVENTORYRELICINFOS_B__0_OFFSET))(this, a, b);
	}
};

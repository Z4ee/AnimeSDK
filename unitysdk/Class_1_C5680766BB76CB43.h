#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueFormulaBuffCountItem; }
namespace RPG::GameCore { class RogueTournFormulaRow; }

#define CLASS_1_C5680766BB76CB43_GET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0x171D42B0)
#define CLASS_1_C5680766BB76CB43_GET_MAINITEM_OFFSET UNITYSDK_OFFSET(0x171D4290)
#define CLASS_1_C5680766BB76CB43_GET_SUBITEM_OFFSET UNITYSDK_OFFSET(0x171D42A0)
#define CLASS_1_C5680766BB76CB43__CTOR_OFFSET UNITYSDK_OFFSET(0x171D4220)

inline static constexpr unsigned int Class_1_C5680766BB76CB43_TypeDefinitionIndex = 64216;

class Class_1_C5680766BB76CB43 : public ::System::Object
{
public:
	::RPG::Client::IRogueFormulaBuffCountItem* _MainItem_k__BackingField; // 0x10
	::RPG::Client::IRogueFormulaBuffCountItem* _SubItem_k__BackingField; // 0x18

	::System::Void _ctor(::RPG::GameCore::RogueTournFormulaRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournFormulaRow*))((::PBYTE)hIl2Cpp + CLASS_1_C5680766BB76CB43__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::IRogueFormulaBuffCountItem* get_MainItem()
	{
		return ((::RPG::Client::IRogueFormulaBuffCountItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5680766BB76CB43_GET_MAINITEM_OFFSET))(this);
	}

	::RPG::Client::IRogueFormulaBuffCountItem* get_SubItem()
	{
		return ((::RPG::Client::IRogueFormulaBuffCountItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5680766BB76CB43_GET_SUBITEM_OFFSET))(this);
	}

	::System::Boolean get_IsActivated()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5680766BB76CB43_GET_ISACTIVATED_OFFSET))(this);
	}
};

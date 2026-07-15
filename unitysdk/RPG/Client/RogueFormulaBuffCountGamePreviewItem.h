#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueFormulaBuffCountItemBase.h"

#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTGAMEPREVIEWITEM_GET_ACHIEVEDBUFFCOUNT_OFFSET UNITYSDK_OFFSET(0x1A44FA10)
#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTGAMEPREVIEWITEM_GET_ISBUFFCOUNTSATISFIED_OFFSET UNITYSDK_OFFSET(0x1A44FA30)
#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTGAMEPREVIEWITEM_GET_REQUIREDBUFFCOUNT_OFFSET UNITYSDK_OFFSET(0x1A44FA20)
#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTGAMEPREVIEWITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A44F9F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueFormulaBuffCountGamePreviewItem_TypeDefinitionIndex = 64209;

	class RogueFormulaBuffCountGamePreviewItem : public ::RPG::Client::RogueFormulaBuffCountItemBase
	{
	public:
		::System::Int32 _RequiredBuffCount_k__BackingField; // 0x18
		::System::Int32 _AchievedBuffCount_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULABUFFCOUNTGAMEPREVIEWITEM__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 get_AchievedBuffCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULABUFFCOUNTGAMEPREVIEWITEM_GET_ACHIEVEDBUFFCOUNT_OFFSET))(this);
		}

		::System::Int32 get_RequiredBuffCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULABUFFCOUNTGAMEPREVIEWITEM_GET_REQUIREDBUFFCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsBuffCountSatisfied()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULABUFFCOUNTGAMEPREVIEWITEM_GET_ISBUFFCOUNTSATISFIED_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueFormulaBuffCountItemBase.h"

#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTGAMEPREVIEWITEM_GET_ACHIEVEDBUFFCOUNT_OFFSET UNITYSDK_OFFSET(0xA2FB750)
#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTGAMEPREVIEWITEM_GET_ISBUFFCOUNTSATISFIED_OFFSET UNITYSDK_OFFSET(0xA2FB770)
#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTGAMEPREVIEWITEM_GET_REQUIREDBUFFCOUNT_OFFSET UNITYSDK_OFFSET(0xA2FB760)
#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTGAMEPREVIEWITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA2FB730)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueFormulaBuffCountGamePreviewItem_TypeDefinitionIndex = 54721;

	class RogueFormulaBuffCountGamePreviewItem : public ::RPG::Client::RogueFormulaBuffCountItemBase
	{
	public:
		::System::Int32 _AchievedBuffCount_k__BackingField; // 0x18
		::System::Int32 _RequiredBuffCount_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 buffTypeID, ::System::Int32 achievedBuffCount, ::System::Int32 requiredBuffCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULABUFFCOUNTGAMEPREVIEWITEM__CTOR_OFFSET))(this, buffTypeID, achievedBuffCount, requiredBuffCount);
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

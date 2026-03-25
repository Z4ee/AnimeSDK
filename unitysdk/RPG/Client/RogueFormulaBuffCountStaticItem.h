#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueFormulaBuffCountItemBase.h"

#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTSTATICITEM_GET_ACHIEVEDBUFFCOUNT_OFFSET UNITYSDK_OFFSET(0xA2FBBF0)
#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTSTATICITEM_GET_ISBUFFCOUNTSATISFIED_OFFSET UNITYSDK_OFFSET(0xA2FBC10)
#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTSTATICITEM_GET_REQUIREDBUFFCOUNT_OFFSET UNITYSDK_OFFSET(0xA2FBC00)
#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTSTATICITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA2FBBE0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueFormulaBuffCountStaticItem_TypeDefinitionIndex = 54727;

	class RogueFormulaBuffCountStaticItem : public ::RPG::Client::RogueFormulaBuffCountItemBase
	{
	public:
		::System::Int32 _RequiredBuffCount_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 buffTypeID, ::System::Int32 requiredBuffCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULABUFFCOUNTSTATICITEM__CTOR_OFFSET))(this, buffTypeID, requiredBuffCount);
		}

		::System::Int32 get_AchievedBuffCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULABUFFCOUNTSTATICITEM_GET_ACHIEVEDBUFFCOUNT_OFFSET))(this);
		}

		::System::Int32 get_RequiredBuffCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULABUFFCOUNTSTATICITEM_GET_REQUIREDBUFFCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsBuffCountSatisfied()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULABUFFCOUNTSTATICITEM_GET_ISBUFFCOUNTSATISFIED_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueFormulaBuffCountItemBase.h"

class Class_1_FA4F4A67B1C04320_752;
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTSERVERITEM_GET_ACHIEVEDBUFFCOUNT_OFFSET UNITYSDK_OFFSET(0xA2FBBB0)
#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTSERVERITEM_GET_ISBUFFCOUNTSATISFIED_OFFSET UNITYSDK_OFFSET(0xA2FBBD0)
#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTSERVERITEM_GET_REQUIREDBUFFCOUNT_OFFSET UNITYSDK_OFFSET(0xA2FBBC0)
#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTSERVERITEM_SYNCBUFFCOUNT_OFFSET UNITYSDK_OFFSET(0xA2FBAA0)
#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTSERVERITEM_SYNCCONDITION_OFFSET UNITYSDK_OFFSET(0xA2FBA30)
#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTSERVERITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA2FBA20)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueFormulaBuffCountServerItem_TypeDefinitionIndex = 54725;

	class RogueFormulaBuffCountServerItem : public ::RPG::Client::RogueFormulaBuffCountItemBase
	{
	public:
		::System::Int32 _AchievedBuffCount; // 0x18
		::System::Int32 _RequiredBuffCount; // 0x1C

		::System::Void _ctor(::System::UInt32 buffTypeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULABUFFCOUNTSERVERITEM__CTOR_OFFSET))(this, buffTypeID);
		}

		::System::Void SyncCondition(::Class_1_FA4F4A67B1C04320_752* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_752*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULABUFFCOUNTSERVERITEM_SYNCCONDITION_OFFSET))(this, proto);
		}

		::System::Void SyncBuffCount(::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>* buffCountMap)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULABUFFCOUNTSERVERITEM_SYNCBUFFCOUNT_OFFSET))(this, buffCountMap);
		}

		::System::Int32 get_AchievedBuffCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULABUFFCOUNTSERVERITEM_GET_ACHIEVEDBUFFCOUNT_OFFSET))(this);
		}

		::System::Int32 get_RequiredBuffCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULABUFFCOUNTSERVERITEM_GET_REQUIREDBUFFCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsBuffCountSatisfied()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULABUFFCOUNTSERVERITEM_GET_ISBUFFCOUNTSATISFIED_OFFSET))(this);
		}
	};
}

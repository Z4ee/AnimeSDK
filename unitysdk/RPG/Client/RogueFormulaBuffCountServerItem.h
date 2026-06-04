#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueFormulaBuffCountItemBase.h"

class Class_1_D17272E82AE804C2_827;
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTSERVERITEM_GET_ACHIEVEDBUFFCOUNT_OFFSET UNITYSDK_OFFSET(0xC77E700)
#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTSERVERITEM_GET_ISBUFFCOUNTSATISFIED_OFFSET UNITYSDK_OFFSET(0xC77E720)
#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTSERVERITEM_GET_REQUIREDBUFFCOUNT_OFFSET UNITYSDK_OFFSET(0xC77E710)
#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTSERVERITEM_SYNCBUFFCOUNT_OFFSET UNITYSDK_OFFSET(0xC77E5F0)
#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTSERVERITEM_SYNCCONDITION_OFFSET UNITYSDK_OFFSET(0xC77E580)
#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTSERVERITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC77E570)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueFormulaBuffCountServerItem_TypeDefinitionIndex = 62846;

	class RogueFormulaBuffCountServerItem : public ::RPG::Client::RogueFormulaBuffCountItemBase
	{
	public:
		::System::Int32 _RequiredBuffCount; // 0x18
		::System::Int32 _AchievedBuffCount; // 0x1C

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULABUFFCOUNTSERVERITEM__CTOR_OFFSET))(this, a1);
		}

		::System::Void SyncCondition(::Class_1_D17272E82AE804C2_827* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_827*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULABUFFCOUNTSERVERITEM_SYNCCONDITION_OFFSET))(this, a1);
		}

		::System::Void SyncBuffCount(::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULABUFFCOUNTSERVERITEM_SYNCBUFFCOUNT_OFFSET))(this, a1);
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

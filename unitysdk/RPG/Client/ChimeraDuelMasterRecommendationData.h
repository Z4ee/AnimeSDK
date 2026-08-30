#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelChimeraData; }
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace RPG::GameCore { class ChimeraDuelRecommendationRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELMASTERRECOMMENDATIONDATA_CONTAINS_OFFSET UNITYSDK_OFFSET(0xCBE9EE0)
#define RPG_CLIENT_CHIMERADUELMASTERRECOMMENDATIONDATA_EXPORTDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xCBE9FF0)
#define RPG_CLIENT_CHIMERADUELMASTERRECOMMENDATIONDATA_GET_SLOTCOUNT_OFFSET UNITYSDK_OFFSET(0xCBE9DF0)
#define RPG_CLIENT_CHIMERADUELMASTERRECOMMENDATIONDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xCBE9D90)
#define RPG_CLIENT_CHIMERADUELMASTERRECOMMENDATIONDATA_SYSTEM_ICOMPARABLE_RPG_CLIENT_CHIMERADUELMASTERRECOMMENDATIONDATA__COMPARETO_OFFSET UNITYSDK_OFFSET(0xCBE9EB0)
#define RPG_CLIENT_CHIMERADUELMASTERRECOMMENDATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCBE9EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelMasterRecommendationData_TypeDefinitionIndex = 63437;

	class ChimeraDuelMasterRecommendationData : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERRECOMMENDATIONDATA__CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChimeraDuelRecommendationRow* get__Row()
		{
			return ((::RPG::GameCore::ChimeraDuelRecommendationRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERRECOMMENDATIONDATA_GET__ROW_OFFSET))(this);
		}

		::System::Int32 get_SlotCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERRECOMMENDATIONDATA_GET_SLOTCOUNT_OFFSET))(this);
		}

		::System::Int32 System_IComparable_RPG_Client_ChimeraDuelMasterRecommendationData__CompareTo(::RPG::Client::ChimeraDuelMasterRecommendationData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChimeraDuelMasterRecommendationData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERRECOMMENDATIONDATA_SYSTEM_ICOMPARABLE_RPG_CLIENT_CHIMERADUELMASTERRECOMMENDATIONDATA__COMPARETO_OFFSET))(this, a1);
		}

		::System::Boolean Contains(::RPG::Client::ChimeraDuelChimeraData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraDuelChimeraData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERRECOMMENDATIONDATA_CONTAINS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* ExportDisplayData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERRECOMMENDATIONDATA_EXPORTDISPLAYDATA_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelChimeraData; }
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace RPG::GameCore { class ChimeraDuelRecommendationRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELMASTERRECOMMENDATIONDATA_CONTAINS_OFFSET UNITYSDK_OFFSET(0x93AC5D0)
#define RPG_CLIENT_CHIMERADUELMASTERRECOMMENDATIONDATA_EXPORTDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x93AC6A0)
#define RPG_CLIENT_CHIMERADUELMASTERRECOMMENDATIONDATA_GET_SLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x93AC4E0)
#define RPG_CLIENT_CHIMERADUELMASTERRECOMMENDATIONDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x93AC480)
#define RPG_CLIENT_CHIMERADUELMASTERRECOMMENDATIONDATA_SYSTEM_ICOMPARABLE_RPG_CLIENT_CHIMERADUELMASTERRECOMMENDATIONDATA__COMPARETO_OFFSET UNITYSDK_OFFSET(0x93AC5A0)
#define RPG_CLIENT_CHIMERADUELMASTERRECOMMENDATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x93AC590)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelMasterRecommendationData_TypeDefinitionIndex = 51445;

	class ChimeraDuelMasterRecommendationData : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERRECOMMENDATIONDATA__CTOR_OFFSET))(this, id);
		}

		::RPG::GameCore::ChimeraDuelRecommendationRow* get__Row()
		{
			return ((::RPG::GameCore::ChimeraDuelRecommendationRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERRECOMMENDATIONDATA_GET__ROW_OFFSET))(this);
		}

		::System::Int32 get_SlotCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERRECOMMENDATIONDATA_GET_SLOTCOUNT_OFFSET))(this);
		}

		::System::Int32 System_IComparable_RPG_Client_ChimeraDuelMasterRecommendationData__CompareTo(::RPG::Client::ChimeraDuelMasterRecommendationData* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChimeraDuelMasterRecommendationData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERRECOMMENDATIONDATA_SYSTEM_ICOMPARABLE_RPG_CLIENT_CHIMERADUELMASTERRECOMMENDATIONDATA__COMPARETO_OFFSET))(this, other);
		}

		::System::Boolean Contains(::RPG::Client::ChimeraDuelChimeraData* chimera)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraDuelChimeraData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERRECOMMENDATIONDATA_CONTAINS_OFFSET))(this, chimera);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* ExportDisplayData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERRECOMMENDATIONDATA_EXPORTDISPLAYDATA_OFFSET))(this);
		}
	};
}

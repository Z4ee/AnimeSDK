#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelChimeraData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELCHIMERAINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9394300)
#define RPG_CLIENT_CHIMERADUELCHIMERAINFO_GETCOREFLAMEVESSELCAPACITY_OFFSET UNITYSDK_OFFSET(0x9394570)
#define RPG_CLIENT_CHIMERADUELCHIMERAINFO_GETDATAWITHINRARITY_OFFSET UNITYSDK_OFFSET(0x93943A0)
#define RPG_CLIENT_CHIMERADUELCHIMERAINFO_GETDATA_OFFSET UNITYSDK_OFFSET(0x938E720)
#define RPG_CLIENT_CHIMERADUELCHIMERAINFO_ISCOREFLAMEVESSEL_OFFSET UNITYSDK_OFFSET(0x9393510)
#define RPG_CLIENT_CHIMERADUELCHIMERAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9393BB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelChimeraInfo_TypeDefinitionIndex = 51411;

	class ChimeraDuelChimeraInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _CoreflameChimeras; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChimeraDuelChimeraData*>* _DataDict; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERAINFO__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERAINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelChimeraData* GetData(::System::UInt32 id)
		{
			return ((::RPG::Client::ChimeraDuelChimeraData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERAINFO_GETDATA_OFFSET))(this, id);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChimeraDuelChimeraData*>* GetDataWithinRarity(::System::UInt32 minRarity, ::System::UInt32 maxRarity)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraDuelChimeraData*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERAINFO_GETDATAWITHINRARITY_OFFSET))(this, minRarity, maxRarity);
		}

		::System::Boolean IsCoreflameVessel(::System::UInt32 chimeraID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERAINFO_ISCOREFLAMEVESSEL_OFFSET))(this, chimeraID);
		}

		::System::Int32 GetCoreflameVesselCapacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERAINFO_GETCOREFLAMEVESSELCAPACITY_OFFSET))(this);
		}
	};
}

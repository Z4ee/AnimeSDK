#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelChimeraData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELCHIMERAINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCBCE330)
#define RPG_CLIENT_CHIMERADUELCHIMERAINFO_GETCOREFLAMEVESSELCAPACITY_OFFSET UNITYSDK_OFFSET(0xCBCE670)
#define RPG_CLIENT_CHIMERADUELCHIMERAINFO_GETDATAWITHINRARITY_OFFSET UNITYSDK_OFFSET(0xCBCE3C0)
#define RPG_CLIENT_CHIMERADUELCHIMERAINFO_GETDATA_OFFSET UNITYSDK_OFFSET(0xCBC7930)
#define RPG_CLIENT_CHIMERADUELCHIMERAINFO_ISCOREFLAMEVESSEL_OFFSET UNITYSDK_OFFSET(0xCBCD350)
#define RPG_CLIENT_CHIMERADUELCHIMERAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xCBCDC10)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelChimeraInfo_TypeDefinitionIndex = 63403;

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

		::RPG::Client::ChimeraDuelChimeraData* GetData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraDuelChimeraData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERAINFO_GETDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChimeraDuelChimeraData*>* GetDataWithinRarity(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraDuelChimeraData*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERAINFO_GETDATAWITHINRARITY_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsCoreflameVessel(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERAINFO_ISCOREFLAMEVESSEL_OFFSET))(this, a1);
		}

		::System::Int32 GetCoreflameVesselCapacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERAINFO_GETCOREFLAMEVESSELCAPACITY_OFFSET))(this);
		}
	};
}

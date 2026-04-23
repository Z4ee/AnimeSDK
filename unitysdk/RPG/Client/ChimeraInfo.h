#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DB57B006CFFCF00A_1;
namespace RPG::Client { class ChimeraData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_CHIMERAINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA02FC50)
#define RPG_CLIENT_CHIMERAINFO_GETCHIMERADATADICT_OFFSET UNITYSDK_OFFSET(0xA02FDC0)
#define RPG_CLIENT_CHIMERAINFO_GETCHIMERADATA_OFFSET UNITYSDK_OFFSET(0xA02FD00)
#define RPG_CLIENT_CHIMERAINFO_INIT_OFFSET UNITYSDK_OFFSET(0xA02FA30)
#define RPG_CLIENT_CHIMERAINFO_ISALLCHIMERADEAD_OFFSET UNITYSDK_OFFSET(0xA0303E0)
#define RPG_CLIENT_CHIMERAINFO_SYNCCHIMERAINFO_OFFSET UNITYSDK_OFFSET(0xA02FFB0)
#define RPG_CLIENT_CHIMERAINFO_SYNCCHIMERASTARTENDLESS_OFFSET UNITYSDK_OFFSET(0xA02FE00)
#define RPG_CLIENT_CHIMERAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA0305F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraInfo_TypeDefinitionIndex = 58420;

	class ChimeraInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChimeraData*>* _ChimeraDataDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ChimeraData* GetChimeraData(::System::UInt32 chimeraID)
		{
			return ((::RPG::Client::ChimeraData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAINFO_GETCHIMERADATA_OFFSET))(this, chimeraID);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChimeraData*>* GetChimeraDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChimeraData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAINFO_GETCHIMERADATADICT_OFFSET))(this);
		}

		::System::Void SyncChimeraStartEndless()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAINFO_SYNCCHIMERASTARTENDLESS_OFFSET))(this);
		}

		::System::Void SyncChimeraInfo(::System::Collections::Generic::IEnumerable_1<::Class_1_DB57B006CFFCF00A_1*>* chimeras)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_DB57B006CFFCF00A_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAINFO_SYNCCHIMERAINFO_OFFSET))(this, chimeras);
		}

		::System::Boolean IsAllChimeraDead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAINFO_ISALLCHIMERADEAD_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeRaceFieldData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_CAKERACEFIELDINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C63E7C0)
#define RPG_CLIENT_CAKERACEFIELDINFO_GETFIELD_OFFSET UNITYSDK_OFFSET(0x1C6263E0)
#define RPG_CLIENT_CAKERACEFIELDINFO_GET_FIELDMAP_OFFSET UNITYSDK_OFFSET(0x1C63EA30)
#define RPG_CLIENT_CAKERACEFIELDINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1C63E550)
#define RPG_CLIENT_CAKERACEFIELDINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x1C63E860)
#define RPG_CLIENT_CAKERACEFIELDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C63EA70)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceFieldInfo_TypeDefinitionIndex = 63088;

	class CakeRaceFieldInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CakeRaceFieldData*>* _FieldMap; // 0x10
		::System::Boolean _IsInited; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFIELDINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFIELDINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFIELDINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFIELDINFO_SYNC_OFFSET))(this, a1, a2);
		}

		::RPG::Client::CakeRaceFieldData* GetField(::System::UInt32 a1)
		{
			return ((::RPG::Client::CakeRaceFieldData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFIELDINFO_GETFIELD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::CakeRaceFieldData*>* get_FieldMap()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::CakeRaceFieldData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFIELDINFO_GET_FIELDMAP_OFFSET))(this);
		}
	};
}

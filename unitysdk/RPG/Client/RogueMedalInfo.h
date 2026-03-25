#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6E708EAB438EC183_83;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMEDALINFO_GET_UNLOCKEDMEDALITEMIDS_OFFSET UNITYSDK_OFFSET(0xA337480)
#define RPG_CLIENT_ROGUEMEDALINFO_ISMETALUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA337420)
#define RPG_CLIENT_ROGUEMEDALINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xA337380)
#define RPG_CLIENT_ROGUEMEDALINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA337320)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMedalInfo_TypeDefinitionIndex = 54874;

	class RogueMedalInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockedMedalItemIDs_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMEDALINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_6E708EAB438EC183_83* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_83*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMEDALINFO_SYNC_OFFSET))(this, proto);
		}

		::System::Boolean IsMetalUnlocked(::System::UInt32 itemID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMEDALINFO_ISMETALUNLOCKED_OFFSET))(this, itemID);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_UnlockedMedalItemIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMEDALINFO_GET_UNLOCKEDMEDALITEMIDS_OFFSET))(this);
		}
	};
}

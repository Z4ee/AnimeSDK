#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_96;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMEDALINFO_GET_UNLOCKEDMEDALITEMIDS_OFFSET UNITYSDK_OFFSET(0xC7BEC80)
#define RPG_CLIENT_ROGUEMEDALINFO_ISMETALUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC7BEBC0)
#define RPG_CLIENT_ROGUEMEDALINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xC7BEB40)
#define RPG_CLIENT_ROGUEMEDALINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC7BEAE0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMedalInfo_TypeDefinitionIndex = 62995;

	class RogueMedalInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockedMedalItemIDs_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMEDALINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_075C34D03AFA1215_96* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_96*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMEDALINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Boolean IsMetalUnlocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMEDALINFO_ISMETALUNLOCKED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_UnlockedMedalItemIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMEDALINFO_GET_UNLOCKEDMEDALITEMIDS_OFFSET))(this);
		}
	};
}

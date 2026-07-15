#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPGTools::Timeline { class AmbientTextItemConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPGTOOLS_TIMELINE_AMBIENTTEXTDATA_SYNCTEXTIDSFROMCONFIGS_OFFSET UNITYSDK_OFFSET(0x1B33E300)
#define RPGTOOLS_TIMELINE_AMBIENTTEXTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B33E5E0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int AmbientTextData_TypeDefinitionIndex = 46075;

	class AmbientTextData : public ::System::Object
	{
	public:
		::System::Boolean Open; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::TextID>* TextIDs; // 0x18
		::Il2CppArray<::RPGTools::Timeline::AmbientTextItemConfig*>* TextConfigs; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AMBIENTTEXTDATA__CTOR_OFFSET))(this);
		}

		::System::Void SyncTextIDsFromConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AMBIENTTEXTDATA_SYNCTEXTIDSFROMCONFIGS_OFFSET))(this);
		}
	};
}

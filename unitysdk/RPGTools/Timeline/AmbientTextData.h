#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPGTools/Timeline/AmbientTextCloseMode.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FontAssetConfig; }
namespace RPGTools::Timeline { class AmbientTextItemConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPGTOOLS_TIMELINE_AMBIENTTEXTDATA_GETENABLEDTEXTIDS_OFFSET UNITYSDK_OFFSET(0x1B52BE60)
#define RPGTOOLS_TIMELINE_AMBIENTTEXTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B52BFA0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int AmbientTextData_TypeDefinitionIndex = 48304;

	class AmbientTextData : public ::System::Object
	{
	public:
		::System::Boolean Open; // 0x10
		::RPGTools::Timeline::AmbientTextCloseMode CloseMode; // 0x14
		::RPG::Client::FontAssetConfig* FontConfig; // 0x18
		::Il2CppArray<::RPGTools::Timeline::AmbientTextItemConfig*>* TextConfigs; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AMBIENTTEXTDATA__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TextID>* GetEnabledTextIDs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AMBIENTTEXTDATA_GETENABLEDTEXTIDS_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class VersionFileInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_POSTTOSERVERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEDE330)

namespace Foundation
{
	inline static constexpr unsigned int PostToServerData_TypeDefinitionIndex = 8263;

	class PostToServerData : public ::System::Object
	{
	public:
		::System::String* res_revision; // 0x10
		::System::String* P4ChangeList; // 0x18
		::System::String* data_revision; // 0x20
		::System::String* silence_revision; // 0x28
		::System::Collections::Generic::List_1<::Foundation::VersionFileInfo*>* versions_list; // 0x30
		::System::String* GameResUrl; // 0x38
		::System::String* audio_revision; // 0x40
		::Foundation::VersionFileInfo* versions; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_POSTTOSERVERDATA__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class VersionFileInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CDNCONFIGEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x172732A0)

namespace MoleMole
{
	inline static constexpr unsigned int CDNConfigExtension_TypeDefinitionIndex = 91109;

	class CDNConfigExtension : public ::System::Object
	{
	public:
		::System::String* GameResUrl; // 0x10
		::System::String* res_revision; // 0x18
		::System::String* data_revision; // 0x20
		::System::String* audio_revision; // 0x28
		::System::String* silence_revision; // 0x30
		::System::Collections::Generic::List_1<::Foundation::VersionFileInfo*>* versions_list; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CDNCONFIGEXTENSION__CTOR_OFFSET))(this);
		}
	};
}

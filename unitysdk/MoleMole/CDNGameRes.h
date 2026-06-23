#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class VersionFileInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CDNGAMERES_GET_VERSIONS_LIST_OFFSET UNITYSDK_OFFSET(0x135972F0)
#define MOLEMOLE_CDNGAMERES_SET_VERSIONS_LIST_OFFSET UNITYSDK_OFFSET(0x13597300)
#define MOLEMOLE_CDNGAMERES__CTOR_OFFSET UNITYSDK_OFFSET(0x13597310)

namespace MoleMole
{
	inline static constexpr unsigned int CDNGameRes_TypeDefinitionIndex = 58621;

	class CDNGameRes : public ::System::Object
	{
	public:
		::System::String* base_url; // 0x10
		::System::String* res_revision; // 0x18
		::System::String* audio_revision; // 0x20
		::System::Object* md5_files; // 0x28
		::System::String* branch; // 0x30
		::System::Collections::Generic::List_1<::Foundation::VersionFileInfo*>* _versions_list_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CDNGAMERES__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Foundation::VersionFileInfo*>* get_versions_list()
		{
			return ((::System::Collections::Generic::List_1<::Foundation::VersionFileInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CDNGAMERES_GET_VERSIONS_LIST_OFFSET))(this);
		}

		::System::Void set_versions_list(::System::Collections::Generic::List_1<::Foundation::VersionFileInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::VersionFileInfo*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CDNGAMERES_SET_VERSIONS_LIST_OFFSET))(this, a1);
		}
	};
}

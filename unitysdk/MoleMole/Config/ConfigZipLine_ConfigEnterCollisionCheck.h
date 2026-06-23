#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGZIPLINE_CONFIGENTERCOLLISIONCHECK_GET_TAGIDS_OFFSET UNITYSDK_OFFSET(0x1AA657F0)
#define MOLEMOLE_CONFIG_CONFIGZIPLINE_CONFIGENTERCOLLISIONCHECK_ONVALUECHANGED_TAG_OFFSET UNITYSDK_OFFSET(0x1AA65930)
#define MOLEMOLE_CONFIG_CONFIGZIPLINE_CONFIGENTERCOLLISIONCHECK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA659A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_ConfigEnterCollisionCheck_TypeDefinitionIndex = 51251;

	class ConfigZipLine_ConfigEnterCollisionCheck : public ::System::Object
	{
	public:
		::UnityEngine::LayerMask layer; // 0x10
		::Il2CppArray<::System::String*>* tags; // 0x18
		::System::Single radius; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* _tagIDs; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_CONFIGENTERCOLLISIONCHECK__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* get_tagIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_CONFIGENTERCOLLISIONCHECK_GET_TAGIDS_OFFSET))(this);
		}

		::System::Void OnValueChanged_tag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_CONFIGENTERCOLLISIONCHECK_ONVALUECHANGED_TAG_OFFSET))(this);
		}
	};
}

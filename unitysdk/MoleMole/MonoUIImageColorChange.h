#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_73A07ADA64B8C00F.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_MONOUIIMAGECOLORCHANGE_APPLY_OFFSET UNITYSDK_OFFSET(0x136E0710)
#define MOLEMOLE_MONOUIIMAGECOLORCHANGE_GET_CHANGETAG_OFFSET UNITYSDK_OFFSET(0x136E0700)
#define MOLEMOLE_MONOUIIMAGECOLORCHANGE_GET_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x136E08D0)
#define MOLEMOLE_MONOUIIMAGECOLORCHANGE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x136E0960)
#define MOLEMOLE_MONOUIIMAGECOLORCHANGE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x136E08E0)
#define MOLEMOLE_MONOUIIMAGECOLORCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x136E09E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIImageColorChange_TypeDefinitionIndex = 46170;

	class MonoUIImageColorChange : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* colorTag; // 0x18
		::Il2CppArray<::UnityEngine::UI::Image*>* uImages; // 0x20
		::UnityEngine::Color greyColor; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGECOLORCHANGE__CTOR_OFFSET))(this);
		}

		::System::String* get_ChangeTag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGECOLORCHANGE_GET_CHANGETAG_OFFSET))(this);
		}

		::System::Void Apply()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGECOLORCHANGE_APPLY_OFFSET))(this);
		}

		::Enum_3_73A07ADA64B8C00F get_ChangeType()
		{
			return ((::Enum_3_73A07ADA64B8C00F(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGECOLORCHANGE_GET_CHANGETYPE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGECOLORCHANGE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGECOLORCHANGE_ONDISABLE_OFFSET))(this);
		}
	};
}

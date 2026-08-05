#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_MONOUIIMAGELANGPLACER_AWAKE_OFFSET UNITYSDK_OFFSET(0x108189C0)
#define MOLEMOLE_MONOUIIMAGELANGPLACER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10818D50)
#define MOLEMOLE_MONOUIIMAGELANGPLACER_SETIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x10818F10)
#define MOLEMOLE_MONOUIIMAGELANGPLACER_SETLANGUAGEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x10818B30)
#define MOLEMOLE_MONOUIIMAGELANGPLACER__CTOR_OFFSET UNITYSDK_OFFSET(0x10819390)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIImageLangPlacer_TypeDefinitionIndex = 71834;

	class MonoUIImageLangPlacer : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::UnityEngine::UI::Image* uiImage; // 0x58
		::System::String* defaultPath; // 0x60
		::System::Collections::Generic::Dictionary_2<::MoleMole::LanguageType, ::System::String*>* langBgPathDict; // 0x68
		::Foundation::AssetRequestHandle imageHandle; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGELANGPLACER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGELANGPLACER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGELANGPLACER_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetLanguageImagePath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGELANGPLACER_SETLANGUAGEIMAGEPATH_OFFSET))(this);
		}

		::System::Void SetImagePath(::System::String* bgPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGELANGPLACER_SETIMAGEPATH_OFFSET))(this, bgPath);
		}
	};
}

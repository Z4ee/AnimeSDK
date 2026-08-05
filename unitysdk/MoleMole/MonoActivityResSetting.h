#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ActivityResSettingTag.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole { class ActivityColorImageSetting; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_MONOACTIVITYRESSETTING_TRYGETSETTINGCOLOR_OFFSET UNITYSDK_OFFSET(0x136D6960)
#define MOLEMOLE_MONOACTIVITYRESSETTING_TRYGETSETTINGMATERIAL_OFFSET UNITYSDK_OFFSET(0x136D6A80)
#define MOLEMOLE_MONOACTIVITYRESSETTING_TRYSETCOLORGROUP_OFFSET UNITYSDK_OFFSET(0x136D6C00)
#define MOLEMOLE_MONOACTIVITYRESSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x136D6EB0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoActivityResSetting_TypeDefinitionIndex = 88670;

	class MonoActivityResSetting : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::ActivityResSettingTag, ::UnityEngine::Color>* colorSettingDict; // 0x58
		::System::Collections::Generic::Dictionary_2<::MoleMole::ActivityResSettingTag, ::UnityEngine::Material*>* materialSettingDict; // 0x60
		::System::Collections::Generic::Dictionary_2<::MoleMole::ActivityResSettingTag, ::System::Collections::Generic::List_1<::MoleMole::ActivityColorImageSetting*>*>* colorGroupSettingDict; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYRESSETTING__CTOR_OFFSET))(this);
		}

		::System::Boolean TryGetSettingColor(::MoleMole::ActivityResSettingTag settingTag, ::UnityEngine::Color& color)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ActivityResSettingTag, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYRESSETTING_TRYGETSETTINGCOLOR_OFFSET))(this, settingTag, color);
		}

		::System::Boolean TryGetSettingMaterial(::MoleMole::ActivityResSettingTag settingTag, ::UnityEngine::Material*& material)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ActivityResSettingTag, ::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYRESSETTING_TRYGETSETTINGMATERIAL_OFFSET))(this, settingTag, material);
		}

		::System::Boolean TrySetColorGroup(::MoleMole::ActivityResSettingTag settingTag)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ActivityResSettingTag))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYRESSETTING_TRYSETCOLORGROUP_OFFSET))(this, settingTag);
		}
	};
}

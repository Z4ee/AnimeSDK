#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/HideFlags.h"

#define COFFEE_UIEXTENSIONS_UIPARTICLEPROJECTSETTINGS_GET_GLOBALHIDEFLAGS_OFFSET UNITYSDK_OFFSET(0x14674FB0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEPROJECTSETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x14676E80)
#define COFFEE_UIEXTENSIONS_UIPARTICLEPROJECTSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x14676E70)

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticleProjectSettings_TypeDefinitionIndex = 41541;

	class UIParticleProjectSettings : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_m_HideGeneratedObjects()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIParticleProjectSettings_TypeDefinitionIndex)->GetStaticField(0x9A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEPROJECTSETTINGS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEPROJECTSETTINGS__CCTOR_OFFSET))();
		}

		static ::UnityEngine::HideFlags get_globalHideFlags()
		{
			return ((::UnityEngine::HideFlags(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEPROJECTSETTINGS_GET_GLOBALHIDEFLAGS_OFFSET))();
		}
	};
}

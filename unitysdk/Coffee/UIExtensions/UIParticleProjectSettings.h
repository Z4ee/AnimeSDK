#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/HideFlags.h"

#define COFFEE_UIEXTENSIONS_UIPARTICLEPROJECTSETTINGS_GET_GLOBALHIDEFLAGS_OFFSET UNITYSDK_OFFSET(0x119E9180)
#define COFFEE_UIEXTENSIONS_UIPARTICLEPROJECTSETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x119EACD0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEPROJECTSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x119EACC0)

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticleProjectSettings_TypeDefinitionIndex = 34895;

	class UIParticleProjectSettings : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_m_HideGeneratedObjects()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIParticleProjectSettings_TypeDefinitionIndex)->GetStaticField(0xCF0);
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

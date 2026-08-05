#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF12F350)
#define MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF12F390)
#define MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR___C__ONZONEENTER_B__1_0_OFFSET UNITYSDK_OFFSET(0xF12F3A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneFaceMainCityAvatar___c_TypeDefinitionIndex = 84790;

	class AnimatorZoneFaceMainCityAvatar___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__1_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneFaceMainCityAvatar___c_TypeDefinitionIndex)->GetStaticField(0x36320);
		}
		static ::MoleMole::Config::AnimatorZoneFaceMainCityAvatar___c** StaticGet___9()
		{
			return (::MoleMole::Config::AnimatorZoneFaceMainCityAvatar___c**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneFaceMainCityAvatar___c_TypeDefinitionIndex)->GetStaticField(0x36328);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnZoneEnter_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR___C__ONZONEENTER_B__1_0_OFFSET))(this);
		}
	};
}

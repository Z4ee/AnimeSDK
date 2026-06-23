#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE95C1A0)
#define MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE95C1E0)
#define MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR___C__ONZONEENTER_B__1_0_OFFSET UNITYSDK_OFFSET(0xE95C1F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneFaceMainCityAvatar___c_TypeDefinitionIndex = 82744;

	class AnimatorZoneFaceMainCityAvatar___c : public ::System::Object
	{
	public:
		static ::MoleMole::Config::AnimatorZoneFaceMainCityAvatar___c** StaticGet___9()
		{
			return (::MoleMole::Config::AnimatorZoneFaceMainCityAvatar___c**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneFaceMainCityAvatar___c_TypeDefinitionIndex)->GetStaticField(0x33C70);
		}
		static ::System::Action** StaticGet___9__1_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneFaceMainCityAvatar___c_TypeDefinitionIndex)->GetStaticField(0x33C78);
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

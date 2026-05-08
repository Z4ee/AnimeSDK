#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_FDFE69FE7B72463B;
namespace System { class String; }

#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0x13026260)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINDATA_GET_FADEOUTLEN_OFFSET UNITYSDK_OFFSET(0x13026330)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINDATA_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0x13026420)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINDATA_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0x130263B0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINDATA_SAMPLEFADEOUT_OFFSET UNITYSDK_OFFSET(0x13026490)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x13026320)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoPageController_AnimationFadeOutFadeInData_TypeDefinitionIndex = 67733;

	class UIRoleInfoPageController_AnimationFadeOutFadeInData : public ::System::Object
	{
	public:
		::System::String* m_fadeOut; // 0x10
		::Class_2_FDFE69FE7B72463B* m_anim; // 0x18
		::System::String* m_fadeIn; // 0x20

		::System::Void _ctor(::Class_2_FDFE69FE7B72463B* anim, ::System::String* fadeout, ::System::String* fadein)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_FDFE69FE7B72463B*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINDATA__CTOR_OFFSET))(this, anim, fadeout, fadein);
		}

		::System::Boolean Equals(::MoleMole::UIRoleInfoPageController_AnimationFadeOutFadeInData* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIRoleInfoPageController_AnimationFadeOutFadeInData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINDATA_EQUALS_OFFSET))(this, other);
		}

		::System::Single get_FadeOutLen()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINDATA_GET_FADEOUTLEN_OFFSET))(this);
		}

		::System::Void PlayFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINDATA_PLAYFADEOUT_OFFSET))(this);
		}

		::System::Void PlayFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINDATA_PLAYFADEIN_OFFSET))(this);
		}

		::System::Void SampleFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINDATA_SAMPLEFADEOUT_OFFSET))(this);
		}
	};
}

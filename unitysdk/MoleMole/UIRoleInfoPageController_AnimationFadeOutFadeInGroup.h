#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRoleInfoPageController_AnimationFadeOutFadeInData; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINGROUP_MERGE_OFFSET UNITYSDK_OFFSET(0x15F747A0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINGROUP_PLAYGROUPFADEIN_OFFSET UNITYSDK_OFFSET(0x15F74E70)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINGROUP_PLAYGROUPFADEOUTFADEIN_OFFSET UNITYSDK_OFFSET(0x15F74B20)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINGROUP_PLAYGROUPFADEOUT_OFFSET UNITYSDK_OFFSET(0x15F74A00)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINGROUP_SAMPLEGROUPFADEOUT_OFFSET UNITYSDK_OFFSET(0x15F74FE0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x15F6ED40)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoPageController_AnimationFadeOutFadeInGroup_TypeDefinitionIndex = 72190;

	class UIRoleInfoPageController_AnimationFadeOutFadeInGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::UIRoleInfoPageController_AnimationFadeOutFadeInData*>* m_group; // 0x10

		::System::Void _ctor(::System::Collections::Generic::List_1<::MoleMole::UIRoleInfoPageController_AnimationFadeOutFadeInData*>* group)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIRoleInfoPageController_AnimationFadeOutFadeInData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINGROUP__CTOR_OFFSET))(this, group);
		}

		::MoleMole::UIRoleInfoPageController_AnimationFadeOutFadeInGroup* Merge(::MoleMole::UIRoleInfoPageController_AnimationFadeOutFadeInGroup* other)
		{
			return ((::MoleMole::UIRoleInfoPageController_AnimationFadeOutFadeInGroup*(*)(::PVOID, ::MoleMole::UIRoleInfoPageController_AnimationFadeOutFadeInGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINGROUP_MERGE_OFFSET))(this, other);
		}

		::System::Void PlayGroupFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINGROUP_PLAYGROUPFADEOUT_OFFSET))(this);
		}

		::System::Void PlayGroupFadeOutFadeIn(::System::Action* afterFadeoutAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINGROUP_PLAYGROUPFADEOUTFADEIN_OFFSET))(this, afterFadeoutAction);
		}

		::System::Void PlayGroupFadeIn(::System::Action* fadeinAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINGROUP_PLAYGROUPFADEIN_OFFSET))(this, fadeinAction);
		}

		::System::Void SampleGroupFadeOut(::System::Action* fadeOutAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINGROUP_SAMPLEGROUPFADEOUT_OFFSET))(this, fadeOutAction);
		}
	};
}

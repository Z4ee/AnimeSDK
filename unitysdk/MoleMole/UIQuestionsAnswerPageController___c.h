#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x152007B0)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x152007F0)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__PLAYTIMELINE_B__28_0_OFFSET UNITYSDK_OFFSET(0x15200800)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__PLAYTIMELINE_B__28_1_OFFSET UNITYSDK_OFFSET(0x15200810)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__PLAYTIMELINE_B__28_2_OFFSET UNITYSDK_OFFSET(0x15200820)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerPageController___c_TypeDefinitionIndex = 81711;

	class UIQuestionsAnswerPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__28_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIQuestionsAnswerPageController___c_TypeDefinitionIndex)->GetStaticField(0x353D0);
		}
		static ::System::Action_1<::UnityEngine::Transform*>** StaticGet___9__28_0()
		{
			return (::System::Action_1<::UnityEngine::Transform*>**)Il2CppClass::FromTypeDefinitionIndex(UIQuestionsAnswerPageController___c_TypeDefinitionIndex)->GetStaticField(0x353D8);
		}
		static ::MoleMole::UIQuestionsAnswerPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIQuestionsAnswerPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIQuestionsAnswerPageController___c_TypeDefinitionIndex)->GetStaticField(0x353E0);
		}
		static ::System::Action** StaticGet___9__28_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIQuestionsAnswerPageController___c_TypeDefinitionIndex)->GetStaticField(0x353E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _PlayTimeline_b__28_0(::UnityEngine::Transform* tr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__PLAYTIMELINE_B__28_0_OFFSET))(this, tr);
		}

		::System::Void _PlayTimeline_b__28_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__PLAYTIMELINE_B__28_1_OFFSET))(this);
		}

		::System::Void _PlayTimeline_b__28_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__PLAYTIMELINE_B__28_2_OFFSET))(this);
		}
	};
}

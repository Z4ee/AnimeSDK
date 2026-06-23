#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_546;
namespace MoleMole { class UICampIdlePageController; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS182_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15B611F0)
#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS182_0__REFRESHCURRENTQA_B__2_OFFSET UNITYSDK_OFFSET(0x15B61200)
#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS182_0__REFRESHCURRENTQA_B__4_OFFSET UNITYSDK_OFFSET(0x15B612C0)

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdlePageController___c__DisplayClass182_0_TypeDefinitionIndex = 86936;

	class UICampIdlePageController___c__DisplayClass182_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_2_208CC9941471731A_546*>* questions; // 0x10
		::UnityEngine::Events::UnityAction* __9__4; // 0x18
		::MoleMole::UICampIdlePageController* __4__this; // 0x20
		::System::Action* __9__2; // 0x28
		::Il2CppArray<::System::String*>* choiceResArr; // 0x30
		::Class_2_208CC9941471731A_546* curQuestion; // 0x38
		::System::Boolean isAnsweringLastQuestion; // 0x40
		::System::Int32 questionsCnt; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS182_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshCurrentQA_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS182_0__REFRESHCURRENTQA_B__2_OFFSET))(this);
		}

		::System::Void _RefreshCurrentQA_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS182_0__REFRESHCURRENTQA_B__4_OFFSET))(this);
		}
	};
}

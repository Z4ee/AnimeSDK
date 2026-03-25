#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERTUTORIAL_METHOD_3_533361552E679453_OFFSET UNITYSDK_OFFSET(0x178CF750)
#define RPG_GAMECORE_TRIGGERTUTORIAL_METHOD_3_E2B4F3DC28433C69_OFFSET UNITYSDK_OFFSET(0x178CF7E0)
#define RPG_GAMECORE_TRIGGERTUTORIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x178CF7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerTutorial_TypeDefinitionIndex = 22417;

	class TriggerTutorial : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* TutorialKey; // 0x18
		::System::Boolean TriggerOnMainPage; // 0x20
		::System::Boolean LockOperation; // 0x21
		::System::Boolean PauseGame; // 0x22
		::System::Boolean PauseSound; // 0x23
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTutorialSucc; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTutorialFail; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERTUTORIAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_533361552E679453(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerTutorial*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerTutorial*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERTUTORIAL_METHOD_3_533361552E679453_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E2B4F3DC28433C69(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerTutorial* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerTutorial*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERTUTORIAL_METHOD_3_E2B4F3DC28433C69_OFFSET))(a1, a2);
		}
	};
}

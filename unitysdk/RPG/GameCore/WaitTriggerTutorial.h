#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_WAITTRIGGERTUTORIAL_METHOD_3_508835BA9D876EA6_OFFSET UNITYSDK_OFFSET(0x17907110)
#define RPG_GAMECORE_WAITTRIGGERTUTORIAL_METHOD_3_E12B26EEF297DD8F_OFFSET UNITYSDK_OFFSET(0x17907090)
#define RPG_GAMECORE_WAITTRIGGERTUTORIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x179070E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitTriggerTutorial_TypeDefinitionIndex = 22418;

	class WaitTriggerTutorial : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* TutorialKey; // 0x18
		::System::Boolean IsLoop; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTrigger; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTRIGGERTUTORIAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E12B26EEF297DD8F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitTriggerTutorial*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitTriggerTutorial*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTRIGGERTUTORIAL_METHOD_3_E12B26EEF297DD8F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_508835BA9D876EA6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitTriggerTutorial* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitTriggerTutorial*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTRIGGERTUTORIAL_METHOD_3_508835BA9D876EA6_OFFSET))(a1, a2);
		}
	};
}

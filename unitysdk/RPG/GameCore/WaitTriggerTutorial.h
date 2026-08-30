#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_WAITTRIGGERTUTORIAL_METHOD_3_508835BA9D876EA6_OFFSET UNITYSDK_OFFSET(0x1DEC3B50)
#define RPG_GAMECORE_WAITTRIGGERTUTORIAL_METHOD_3_5A18D5C3A60BD9A7_OFFSET UNITYSDK_OFFSET(0x1DEC3B10)
#define RPG_GAMECORE_WAITTRIGGERTUTORIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC3B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitTriggerTutorial_TypeDefinitionIndex = 24095;

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

		static ::System::Void Method_3_5A18D5C3A60BD9A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitTriggerTutorial*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitTriggerTutorial*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTRIGGERTUTORIAL_METHOD_3_5A18D5C3A60BD9A7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_508835BA9D876EA6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitTriggerTutorial* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitTriggerTutorial*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTRIGGERTUTORIAL_METHOD_3_508835BA9D876EA6_OFFSET))(a1, a2);
		}
	};
}

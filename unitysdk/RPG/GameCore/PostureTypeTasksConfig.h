#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattlePostureType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_POSTURETYPETASKSCONFIG_METHOD_2_D196DDAD021EA795_OFFSET UNITYSDK_OFFSET(0x1D358C20)
#define RPG_GAMECORE_POSTURETYPETASKSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D358D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PostureTypeTasksConfig_TypeDefinitionIndex = 17407;

	class PostureTypeTasksConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::BattlePostureType PostureType; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TasksConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POSTURETYPETASKSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D196DDAD021EA795(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PostureTypeTasksConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PostureTypeTasksConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POSTURETYPETASKSCONFIG_METHOD_2_D196DDAD021EA795_OFFSET))(a1, a2);
		}
	};
}

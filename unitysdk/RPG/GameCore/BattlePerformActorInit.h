#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEPERFORMACTORINIT_METHOD_2_283862E83CB8B530_OFFSET UNITYSDK_OFFSET(0x1A3F4A30)
#define RPG_GAMECORE_BATTLEPERFORMACTORINIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3F4B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePerformActorInit_TypeDefinitionIndex = 17416;

	class BattlePerformActorInit : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* InitKey; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnLoadTaskList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPERFORMACTORINIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_283862E83CB8B530(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattlePerformActorInit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattlePerformActorInit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPERFORMACTORINIT_METHOD_2_283862E83CB8B530_OFFSET))(a1, a2);
		}
	};
}

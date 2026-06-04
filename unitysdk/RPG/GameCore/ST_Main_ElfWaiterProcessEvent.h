#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_ELFWAITERPROCESSEVENT_METHOD_4_787EEBCBF6994D59_OFFSET UNITYSDK_OFFSET(0x19C016B0)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERPROCESSEVENT_METHOD_4_94E525E315F90753_OFFSET UNITYSDK_OFFSET(0x19C18720)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERPROCESSEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19C01660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfWaiterProcessEvent_TypeDefinitionIndex = 20327;

	class ST_Main_ElfWaiterProcessEvent : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single LookAtDuration; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERPROCESSEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_94E525E315F90753(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfWaiterProcessEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfWaiterProcessEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERPROCESSEVENT_METHOD_4_94E525E315F90753_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_787EEBCBF6994D59(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfWaiterProcessEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfWaiterProcessEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERPROCESSEVENT_METHOD_4_787EEBCBF6994D59_OFFSET))(a1, a2);
		}
	};
}

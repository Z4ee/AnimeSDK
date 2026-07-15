#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_ELFWAITERSUPEREVENTREADY_METHOD_4_9948245CCBC5E5A1_OFFSET UNITYSDK_OFFSET(0x1B783500)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERSUPEREVENTREADY_METHOD_4_F87FAC18D3E9FC24_OFFSET UNITYSDK_OFFSET(0x1B783430)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERSUPEREVENTREADY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7834F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfWaiterSuperEventReady_TypeDefinitionIndex = 20722;

	class ST_Main_ElfWaiterSuperEventReady : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERSUPEREVENTREADY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F87FAC18D3E9FC24(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfWaiterSuperEventReady*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfWaiterSuperEventReady*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERSUPEREVENTREADY_METHOD_4_F87FAC18D3E9FC24_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9948245CCBC5E5A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfWaiterSuperEventReady* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfWaiterSuperEventReady*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERSUPEREVENTREADY_METHOD_4_9948245CCBC5E5A1_OFFSET))(a1, a2);
		}
	};
}

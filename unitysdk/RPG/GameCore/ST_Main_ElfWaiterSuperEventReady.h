#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_ELFWAITERSUPEREVENTREADY_METHOD_4_34F1B2ABD5B29E7E_OFFSET UNITYSDK_OFFSET(0x176976F0)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERSUPEREVENTREADY_METHOD_4_9948245CCBC5E5A1_OFFSET UNITYSDK_OFFSET(0x17684CF0)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERSUPEREVENTREADY__CTOR_OFFSET UNITYSDK_OFFSET(0x17684CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfWaiterSuperEventReady_TypeDefinitionIndex = 19702;

	class ST_Main_ElfWaiterSuperEventReady : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERSUPEREVENTREADY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_34F1B2ABD5B29E7E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfWaiterSuperEventReady*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfWaiterSuperEventReady*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERSUPEREVENTREADY_METHOD_4_34F1B2ABD5B29E7E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9948245CCBC5E5A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfWaiterSuperEventReady* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfWaiterSuperEventReady*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERSUPEREVENTREADY_METHOD_4_9948245CCBC5E5A1_OFFSET))(a1, a2);
		}
	};
}

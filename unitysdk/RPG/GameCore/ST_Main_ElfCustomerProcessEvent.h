#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERPROCESSEVENT_METHOD_4_4518ACDA1F4D8056_OFFSET UNITYSDK_OFFSET(0x1DB3AF30)
#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERPROCESSEVENT_METHOD_4_45E57C6B0FAC5D93_OFFSET UNITYSDK_OFFSET(0x1DB3AE60)
#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERPROCESSEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB3AF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfCustomerProcessEvent_TypeDefinitionIndex = 21286;

	class ST_Main_ElfCustomerProcessEvent : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERPROCESSEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_45E57C6B0FAC5D93(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfCustomerProcessEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfCustomerProcessEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERPROCESSEVENT_METHOD_4_45E57C6B0FAC5D93_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4518ACDA1F4D8056(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfCustomerProcessEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfCustomerProcessEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERPROCESSEVENT_METHOD_4_4518ACDA1F4D8056_OFFSET))(a1, a2);
		}
	};
}

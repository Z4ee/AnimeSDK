#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_ELFWAITERCARRAYFOOD_METHOD_4_254E89D5FD12353E_OFFSET UNITYSDK_OFFSET(0x18DF01D0)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERCARRAYFOOD_METHOD_4_AE4795D0AC6DF161_OFFSET UNITYSDK_OFFSET(0x18DE78C0)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERCARRAYFOOD__CTOR_OFFSET UNITYSDK_OFFSET(0x18DE7870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfWaiterCarrayFood_TypeDefinitionIndex = 20378;

	class ST_Main_ElfWaiterCarrayFood : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERCARRAYFOOD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_254E89D5FD12353E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfWaiterCarrayFood*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfWaiterCarrayFood*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERCARRAYFOOD_METHOD_4_254E89D5FD12353E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AE4795D0AC6DF161(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfWaiterCarrayFood* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfWaiterCarrayFood*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERCARRAYFOOD_METHOD_4_AE4795D0AC6DF161_OFFSET))(a1, a2);
		}
	};
}

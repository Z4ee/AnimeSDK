#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_SIDE_ELFINTERACTCURRENTSLOT_METHOD_4_6B711B79EE3DF280_OFFSET UNITYSDK_OFFSET(0x1B7886F0)
#define RPG_GAMECORE_ST_SIDE_ELFINTERACTCURRENTSLOT_METHOD_4_77E6900AC58C81A1_OFFSET UNITYSDK_OFFSET(0x1B7886A0)
#define RPG_GAMECORE_ST_SIDE_ELFINTERACTCURRENTSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7886E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_ElfInteractCurrentSlot_TypeDefinitionIndex = 20738;

	class ST_Side_ElfInteractCurrentSlot : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single Duration; // 0x18
		::System::Boolean ChangeAnim; // 0x1C
		::System::UInt32 State; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ELFINTERACTCURRENTSLOT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_77E6900AC58C81A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_ElfInteractCurrentSlot*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_ElfInteractCurrentSlot*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ELFINTERACTCURRENTSLOT_METHOD_4_77E6900AC58C81A1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6B711B79EE3DF280(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_ElfInteractCurrentSlot* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_ElfInteractCurrentSlot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ELFINTERACTCURRENTSLOT_METHOD_4_6B711B79EE3DF280_OFFSET))(a1, a2);
		}
	};
}

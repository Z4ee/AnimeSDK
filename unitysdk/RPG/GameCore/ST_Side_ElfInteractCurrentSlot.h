#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_SIDE_ELFINTERACTCURRENTSLOT_METHOD_4_40C0748E509073EC_OFFSET UNITYSDK_OFFSET(0x17698990)
#define RPG_GAMECORE_ST_SIDE_ELFINTERACTCURRENTSLOT_METHOD_4_6B711B79EE3DF280_OFFSET UNITYSDK_OFFSET(0x1768A850)
#define RPG_GAMECORE_ST_SIDE_ELFINTERACTCURRENTSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1768A7F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_ElfInteractCurrentSlot_TypeDefinitionIndex = 19718;

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

		static ::System::Void Method_4_40C0748E509073EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_ElfInteractCurrentSlot*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_ElfInteractCurrentSlot*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ELFINTERACTCURRENTSLOT_METHOD_4_40C0748E509073EC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6B711B79EE3DF280(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_ElfInteractCurrentSlot* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_ElfInteractCurrentSlot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ELFINTERACTCURRENTSLOT_METHOD_4_6B711B79EE3DF280_OFFSET))(a1, a2);
		}
	};
}

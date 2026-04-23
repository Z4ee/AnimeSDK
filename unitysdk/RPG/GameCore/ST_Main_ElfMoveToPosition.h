#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameNavigationType.h"
#include "unitysdk/RPG/GameCore/LittleGamePositionType.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_ELFMOVETOPOSITION_METHOD_4_911E60FF569840B2_OFFSET UNITYSDK_OFFSET(0x18DE6E20)
#define RPG_GAMECORE_ST_MAIN_ELFMOVETOPOSITION_METHOD_4_9AF4B527EB319B8A_OFFSET UNITYSDK_OFFSET(0x18DEFDF0)
#define RPG_GAMECORE_ST_MAIN_ELFMOVETOPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x18DE6DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfMoveToPosition_TypeDefinitionIndex = 20402;

	class ST_Main_ElfMoveToPosition : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::LittleGameNavigationType NavigationType; // 0x18
		::RPG::GameCore::LittleGamePositionType PositionType; // 0x1C
		::System::Single TargetStopDistance; // 0x20
		::System::Single StartMoveDuration; // 0x24
		::System::Single Delay; // 0x28
		::System::Single RandomDelay; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFMOVETOPOSITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9AF4B527EB319B8A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfMoveToPosition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfMoveToPosition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFMOVETOPOSITION_METHOD_4_9AF4B527EB319B8A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_911E60FF569840B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfMoveToPosition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfMoveToPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFMOVETOPOSITION_METHOD_4_911E60FF569840B2_OFFSET))(a1, a2);
		}
	};
}

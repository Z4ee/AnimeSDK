#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_ELFWAITERCLEANOBSTACLE_METHOD_4_7F086B4821A6BFA9_OFFSET UNITYSDK_OFFSET(0x1B782C60)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERCLEANOBSTACLE_METHOD_4_B0DD92ADAFB705EC_OFFSET UNITYSDK_OFFSET(0x1B782B90)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERCLEANOBSTACLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B782C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfWaiterCleanObstacle_TypeDefinitionIndex = 20720;

	class ST_Main_ElfWaiterCleanObstacle : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERCLEANOBSTACLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B0DD92ADAFB705EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfWaiterCleanObstacle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfWaiterCleanObstacle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERCLEANOBSTACLE_METHOD_4_B0DD92ADAFB705EC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7F086B4821A6BFA9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_ElfWaiterCleanObstacle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_ElfWaiterCleanObstacle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERCLEANOBSTACLE_METHOD_4_7F086B4821A6BFA9_OFFSET))(a1, a2);
		}
	};
}

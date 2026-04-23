#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_BATTLECOLLEGEAIMSHOW_METHOD_3_49453E63681160D7_OFFSET UNITYSDK_OFFSET(0x186F0EA0)
#define RPG_GAMECORE_BATTLECOLLEGEAIMSHOW_METHOD_3_93ED30DC028A6786_OFFSET UNITYSDK_OFFSET(0x186F0F20)
#define RPG_GAMECORE_BATTLECOLLEGEAIMSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x186F0EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleCollegeAimShow_TypeDefinitionIndex = 22695;

	class BattleCollegeAimShow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 AimID; // 0x18
		::RPG::GameCore::DynamicFloat* CurValue; // 0x20
		::RPG::GameCore::DynamicFloat* TotalValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECOLLEGEAIMSHOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_49453E63681160D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleCollegeAimShow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleCollegeAimShow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECOLLEGEAIMSHOW_METHOD_3_49453E63681160D7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_93ED30DC028A6786(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleCollegeAimShow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleCollegeAimShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECOLLEGEAIMSHOW_METHOD_3_93ED30DC028A6786_OFFSET))(a1, a2);
		}
	};
}

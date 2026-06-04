#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattlePostureType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattlePostureConfig; }

#define RPG_GAMECORE_TRIGGERBATTLEPOSTURETYPE_METHOD_3_0FBA642362AF0307_OFFSET UNITYSDK_OFFSET(0x19E08C30)
#define RPG_GAMECORE_TRIGGERBATTLEPOSTURETYPE_METHOD_3_DE5D45D45A22FEBA_OFFSET UNITYSDK_OFFSET(0x19E08BB0)
#define RPG_GAMECORE_TRIGGERBATTLEPOSTURETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E08C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerBattlePostureType_TypeDefinitionIndex = 19310;

	class TriggerBattlePostureType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::BattlePostureType PostureType; // 0x18
		::System::Boolean IsTriggerPerform; // 0x1C
		::RPG::GameCore::BattlePostureConfig* PostureConfig; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBATTLEPOSTURETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DE5D45D45A22FEBA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerBattlePostureType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerBattlePostureType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBATTLEPOSTURETYPE_METHOD_3_DE5D45D45A22FEBA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0FBA642362AF0307(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerBattlePostureType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerBattlePostureType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBATTLEPOSTURETYPE_METHOD_3_0FBA642362AF0307_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTriggerSettleType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_TRIGGERGRIDFIGHTWAVESETTLE_METHOD_3_6E3C815BD0F1BA2D_OFFSET UNITYSDK_OFFSET(0x178C7E70)
#define RPG_GAMECORE_TRIGGERGRIDFIGHTWAVESETTLE_METHOD_3_837E9B3AC0AF6EC1_OFFSET UNITYSDK_OFFSET(0x178C7D50)
#define RPG_GAMECORE_TRIGGERGRIDFIGHTWAVESETTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x178C7DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerGridFightWaveSettle_TypeDefinitionIndex = 20722;

	class TriggerGridFightWaveSettle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::GridFightTriggerSettleType TriggerType; // 0x18
		::RPG::GameCore::DynamicFloat* ParamValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERGRIDFIGHTWAVESETTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_837E9B3AC0AF6EC1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerGridFightWaveSettle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerGridFightWaveSettle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERGRIDFIGHTWAVESETTLE_METHOD_3_837E9B3AC0AF6EC1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6E3C815BD0F1BA2D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerGridFightWaveSettle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerGridFightWaveSettle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERGRIDFIGHTWAVESETTLE_METHOD_3_6E3C815BD0F1BA2D_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DeviceSettingConfigItemBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FRAMETIMEBUDGETINFO_METHOD_3_1B2F5A22944F090D_OFFSET UNITYSDK_OFFSET(0x1D118BD0)
#define RPG_GAMECORE_FRAMETIMEBUDGETINFO_METHOD_3_BA967BAEBEBB1CB1_OFFSET UNITYSDK_OFFSET(0x1D118C60)
#define RPG_GAMECORE_FRAMETIMEBUDGETINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D118C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FrameTimeBudgetInfo_TypeDefinitionIndex = 16291;

	class FrameTimeBudgetInfo : public ::RPG::GameCore::DeviceSettingConfigItemBase
	{
	public:
		::System::Boolean Enabled; // 0x18
		::System::Single AssetMgrTimeMs; // 0x1C
		::System::Single GameObjectPoolTimeMs; // 0x20
		::System::Single GameObjectPoolPreResetTimeMs; // 0x24
		::System::Single StreamingUpdateTimeMs; // 0x28
		::System::Single StreamingLoadTimeMs; // 0x2C
		::System::Single StreamingFadingTimeMs; // 0x30
		::System::Single AdvAsyncProcessorTimeMs; // 0x34
		::System::Single GroupUnloadTimeMs; // 0x38
		::System::Single BattlePreloadPoolRearrangeTimeMs; // 0x3C
		::System::Single SharedTimeMs; // 0x40
		::System::Single MaxExtendTimeMs; // 0x44
		::System::Single FrameExtendTimeMs; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FRAMETIMEBUDGETINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1B2F5A22944F090D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FrameTimeBudgetInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FrameTimeBudgetInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FRAMETIMEBUDGETINFO_METHOD_3_1B2F5A22944F090D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BA967BAEBEBB1CB1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FrameTimeBudgetInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FrameTimeBudgetInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FRAMETIMEBUDGETINFO_METHOD_3_BA967BAEBEBB1CB1_OFFSET))(a1, a2);
		}
	};
}

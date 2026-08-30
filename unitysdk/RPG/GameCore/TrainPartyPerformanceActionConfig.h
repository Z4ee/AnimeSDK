#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TrainPartyPerformanceFreeStyleAction; }

#define RPG_GAMECORE_TRAINPARTYPERFORMANCEACTIONCONFIG_METHOD_2_707BE3C04380FD64_OFFSET UNITYSDK_OFFSET(0x1D5DFFC0)
#define RPG_GAMECORE_TRAINPARTYPERFORMANCEACTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E00B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyPerformanceActionConfig_TypeDefinitionIndex = 16090;

	class TrainPartyPerformanceActionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TrainPartyPerformanceFreeStyleAction*>* FreeStyleActions; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCEACTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_707BE3C04380FD64(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyPerformanceActionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyPerformanceActionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCEACTIONCONFIG_METHOD_2_707BE3C04380FD64_OFFSET))(a1, a2);
		}
	};
}

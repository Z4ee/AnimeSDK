#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MainMissionSortedItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAINMISSIONPERFORMANCECONFIG_METHOD_2_D0879C0DCA636346_OFFSET UNITYSDK_OFFSET(0x1D21A950)
#define RPG_GAMECORE_MAINMISSIONPERFORMANCECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D21AA50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MainMissionPerformanceConfig_TypeDefinitionIndex = 18805;

	class MainMissionPerformanceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MainMissionSortedItem*>* MainMissionMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONPERFORMANCECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D0879C0DCA636346(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MainMissionPerformanceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MainMissionPerformanceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONPERFORMANCECONFIG_METHOD_2_D0879C0DCA636346_OFFSET))(a1, a2);
		}
	};
}

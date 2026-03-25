#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MapRotationPerformanceID; }

#define RPG_GAMECORE_MAPROTATIONPERFORMANCECONFIG_METHOD_2_EFC831A80D6B8B44_OFFSET UNITYSDK_OFFSET(0x17380940)
#define RPG_GAMECORE_MAPROTATIONPERFORMANCECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17380C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationPerformanceConfig_TypeDefinitionIndex = 15604;

	class MapRotationPerformanceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MapRotationPerformanceID*>* DelayPerformanceInAirlock; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONPERFORMANCECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EFC831A80D6B8B44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MapRotationPerformanceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapRotationPerformanceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONPERFORMANCECONFIG_METHOD_2_EFC831A80D6B8B44_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TrainPartyPerformance; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYPERFORMANCECONFIG_METHOD_2_EECFEEE9D5AEFB4C_OFFSET UNITYSDK_OFFSET(0x190AD700)
#define RPG_GAMECORE_TRAINPARTYPERFORMANCECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x190AD960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyPerformanceConfig_TypeDefinitionIndex = 15385;

	class TrainPartyPerformanceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Environment; // 0x10
		::Il2CppArray<::System::UInt32>* Groups; // 0x18
		::Il2CppArray<::System::String*>* Characters; // 0x20
		::Il2CppArray<::RPG::GameCore::TrainPartyPerformance*>* Performances; // 0x28
		::Il2CppArray<::RPG::GameCore::TrainPartyPerformance*>* ConstPerformances; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EECFEEE9D5AEFB4C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyPerformanceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyPerformanceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCECONFIG_METHOD_2_EECFEEE9D5AEFB4C_OFFSET))(a1, a2);
		}
	};
}

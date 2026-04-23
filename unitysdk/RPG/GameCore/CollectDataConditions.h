#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_COLLECTDATACONDITIONS_METHOD_3_215A9C5B539377B3_OFFSET UNITYSDK_OFFSET(0x188255D0)
#define RPG_GAMECORE_COLLECTDATACONDITIONS_METHOD_3_909991EEB7C7239B_OFFSET UNITYSDK_OFFSET(0x18825550)
#define RPG_GAMECORE_COLLECTDATACONDITIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x188255A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CollectDataConditions_TypeDefinitionIndex = 19838;

	class CollectDataConditions : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* TaskIDList; // 0x18
		::Il2CppArray<::System::UInt32>* MainMissionIDList; // 0x20
		::Il2CppArray<::System::UInt32>* PerformanceIDList; // 0x28
		::Il2CppArray<::RPG::GameCore::DynamicString*>* PerformanceIDDsList; // 0x30
		::Il2CppArray<::System::UInt32>* CustomValueMainMissionIDList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLECTDATACONDITIONS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_909991EEB7C7239B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CollectDataConditions*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CollectDataConditions*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLECTDATACONDITIONS_METHOD_3_909991EEB7C7239B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_215A9C5B539377B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CollectDataConditions* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CollectDataConditions*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLECTDATACONDITIONS_METHOD_3_215A9C5B539377B3_OFFSET))(a1, a2);
		}
	};
}

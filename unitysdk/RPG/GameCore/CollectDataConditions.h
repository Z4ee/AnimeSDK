#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_COLLECTDATACONDITIONS_METHOD_3_0E356D6BAA009B09_OFFSET UNITYSDK_OFFSET(0x1D9A4E30)
#define RPG_GAMECORE_COLLECTDATACONDITIONS_METHOD_3_C3EF6A813E1F26EB_OFFSET UNITYSDK_OFFSET(0x1D9A4DF0)
#define RPG_GAMECORE_COLLECTDATACONDITIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A4E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CollectDataConditions_TypeDefinitionIndex = 20614;

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

		static ::System::Void Method_3_C3EF6A813E1F26EB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CollectDataConditions*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CollectDataConditions*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLECTDATACONDITIONS_METHOD_3_C3EF6A813E1F26EB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0E356D6BAA009B09(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CollectDataConditions* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CollectDataConditions*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLECTDATACONDITIONS_METHOD_3_0E356D6BAA009B09_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWORDTRAININGSHOWENDINGPERFORMANCE_METHOD_3_6899A35E9E92651E_OFFSET UNITYSDK_OFFSET(0x1B440ED0)
#define RPG_GAMECORE_SWORDTRAININGSHOWENDINGPERFORMANCE_METHOD_3_F51B4AAF073D5E69_OFFSET UNITYSDK_OFFSET(0x1B440E90)
#define RPG_GAMECORE_SWORDTRAININGSHOWENDINGPERFORMANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B440EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingShowEndingPerformance_TypeDefinitionIndex = 19543;

	class SwordTrainingShowEndingPerformance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggered; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNotTriggered; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSHOWENDINGPERFORMANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F51B4AAF073D5E69(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingShowEndingPerformance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingShowEndingPerformance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSHOWENDINGPERFORMANCE_METHOD_3_F51B4AAF073D5E69_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6899A35E9E92651E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingShowEndingPerformance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingShowEndingPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSHOWENDINGPERFORMANCE_METHOD_3_6899A35E9E92651E_OFFSET))(a1, a2);
		}
	};
}

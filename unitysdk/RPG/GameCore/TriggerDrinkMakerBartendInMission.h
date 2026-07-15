#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERDRINKMAKERBARTENDINMISSION_METHOD_3_0C60D08E06CA30F4_OFFSET UNITYSDK_OFFSET(0x1B048A20)
#define RPG_GAMECORE_TRIGGERDRINKMAKERBARTENDINMISSION_METHOD_3_3B4F3A68C40D9D09_OFFSET UNITYSDK_OFFSET(0x1B0489E0)
#define RPG_GAMECORE_TRIGGERDRINKMAKERBARTENDINMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B048A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerDrinkMakerBartendInMission_TypeDefinitionIndex = 20912;

	class TriggerDrinkMakerBartendInMission : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 RequestID; // 0x18
		::System::Boolean IsSaveOnServer; // 0x1C
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBartendSuccess; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBartendFail; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERDRINKMAKERBARTENDINMISSION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3B4F3A68C40D9D09(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerDrinkMakerBartendInMission*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerDrinkMakerBartendInMission*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERDRINKMAKERBARTENDINMISSION_METHOD_3_3B4F3A68C40D9D09_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0C60D08E06CA30F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerDrinkMakerBartendInMission* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerDrinkMakerBartendInMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERDRINKMAKERBARTENDINMISSION_METHOD_3_0C60D08E06CA30F4_OFFSET))(a1, a2);
		}
	};
}

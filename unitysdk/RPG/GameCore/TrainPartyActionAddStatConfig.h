#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyActionConfigBase.h"
#include "unitysdk/RPG/GameCore/TrainPartyPassengerType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TrainPartyStat; }

#define RPG_GAMECORE_TRAINPARTYACTIONADDSTATCONFIG_METHOD_5_6493B7423262B4AF_OFFSET UNITYSDK_OFFSET(0x19DF0530)
#define RPG_GAMECORE_TRAINPARTYACTIONADDSTATCONFIG_METHOD_5_D8E2AB4F8ED3DB46_OFFSET UNITYSDK_OFFSET(0x19DF0450)
#define RPG_GAMECORE_TRAINPARTYACTIONADDSTATCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19DF04E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyActionAddStatConfig_TypeDefinitionIndex = 17182;

	class TrainPartyActionAddStatConfig : public ::RPG::GameCore::TrainPartyActionConfigBase
	{
	public:
		::RPG::GameCore::TrainPartyPassengerType PassengerType; // 0x18
		::System::UInt32 PassengerParam; // 0x1C
		::Il2CppArray<::RPG::GameCore::TrainPartyStat*>* AddList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDSTATCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_D8E2AB4F8ED3DB46(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionAddStatConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionAddStatConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDSTATCONFIG_METHOD_5_D8E2AB4F8ED3DB46_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_6493B7423262B4AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionAddStatConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionAddStatConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDSTATCONFIG_METHOD_5_6493B7423262B4AF_OFFSET))(a1, a2);
		}
	};
}

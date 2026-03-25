#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SimpleTalkInfo; }

#define RPG_GAMECORE_CONSUMEMISSIONITEMPERFORMANCE_METHOD_3_10E2BE5BBA1C301F_OFFSET UNITYSDK_OFFSET(0x17133B00)
#define RPG_GAMECORE_CONSUMEMISSIONITEMPERFORMANCE_METHOD_3_9F74E7D99C106BDD_OFFSET UNITYSDK_OFFSET(0x17133A80)
#define RPG_GAMECORE_CONSUMEMISSIONITEMPERFORMANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x17133AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConsumeMissionItemPerformance_TypeDefinitionIndex = 18746;

	class ConsumeMissionItemPerformance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SubMissionID; // 0x18
		::RPG::Client::TextID Desc; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSubmitConfirm; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSubmitCancel; // 0x38
		::RPG::GameCore::SimpleTalkInfo* SimpleTalk; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSUMEMISSIONITEMPERFORMANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9F74E7D99C106BDD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConsumeMissionItemPerformance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConsumeMissionItemPerformance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSUMEMISSIONITEMPERFORMANCE_METHOD_3_9F74E7D99C106BDD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_10E2BE5BBA1C301F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConsumeMissionItemPerformance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConsumeMissionItemPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSUMEMISSIONITEMPERFORMANCE_METHOD_3_10E2BE5BBA1C301F_OFFSET))(a1, a2);
		}
	};
}

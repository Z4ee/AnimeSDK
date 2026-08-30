#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SimpleTalkInfo; }

#define RPG_GAMECORE_CONSUMEMISSIONITEMPERFORMANCE_METHOD_3_4F67A540B9F3FA99_OFFSET UNITYSDK_OFFSET(0x1CFFFC60)
#define RPG_GAMECORE_CONSUMEMISSIONITEMPERFORMANCE_METHOD_3_D105D67B4FC0CD1F_OFFSET UNITYSDK_OFFSET(0x1CFFFC20)
#define RPG_GAMECORE_CONSUMEMISSIONITEMPERFORMANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFFFC50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConsumeMissionItemPerformance_TypeDefinitionIndex = 20210;

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

		static ::System::Void Method_3_D105D67B4FC0CD1F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConsumeMissionItemPerformance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConsumeMissionItemPerformance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSUMEMISSIONITEMPERFORMANCE_METHOD_3_D105D67B4FC0CD1F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4F67A540B9F3FA99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConsumeMissionItemPerformance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConsumeMissionItemPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSUMEMISSIONITEMPERFORMANCE_METHOD_3_4F67A540B9F3FA99_OFFSET))(a1, a2);
		}
	};
}

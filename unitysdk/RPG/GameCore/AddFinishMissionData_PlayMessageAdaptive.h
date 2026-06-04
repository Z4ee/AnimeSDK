#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhoneMessagePlayMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADDFINISHMISSIONDATA_PLAYMESSAGEADAPTIVE_METHOD_3_366F5963C959A536_OFFSET UNITYSDK_OFFSET(0x1940D730)
#define RPG_GAMECORE_ADDFINISHMISSIONDATA_PLAYMESSAGEADAPTIVE_METHOD_3_501A7CF27571A67D_OFFSET UNITYSDK_OFFSET(0x1940D6B0)
#define RPG_GAMECORE_ADDFINISHMISSIONDATA_PLAYMESSAGEADAPTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1940D700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddFinishMissionData_PlayMessageAdaptive_TypeDefinitionIndex = 20717;

	class AddFinishMissionData_PlayMessageAdaptive : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SubmissionID; // 0x18
		::System::UInt32 MessageSectionID; // 0x1C
		::System::Boolean ShowNotice; // 0x20
		::RPG::GameCore::PhoneMessagePlayMode PlayMode; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDFINISHMISSIONDATA_PLAYMESSAGEADAPTIVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_501A7CF27571A67D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddFinishMissionData_PlayMessageAdaptive*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddFinishMissionData_PlayMessageAdaptive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDFINISHMISSIONDATA_PLAYMESSAGEADAPTIVE_METHOD_3_501A7CF27571A67D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_366F5963C959A536(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddFinishMissionData_PlayMessageAdaptive* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddFinishMissionData_PlayMessageAdaptive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDFINISHMISSIONDATA_PLAYMESSAGEADAPTIVE_METHOD_3_366F5963C959A536_OFFSET))(a1, a2);
		}
	};
}

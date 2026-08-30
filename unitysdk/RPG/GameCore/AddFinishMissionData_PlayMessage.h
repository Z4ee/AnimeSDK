#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADDFINISHMISSIONDATA_PLAYMESSAGE_METHOD_3_5A4C4E50C2530300_OFFSET UNITYSDK_OFFSET(0x1D6A03D0)
#define RPG_GAMECORE_ADDFINISHMISSIONDATA_PLAYMESSAGE_METHOD_3_E97C66D182D31FA1_OFFSET UNITYSDK_OFFSET(0x1D6A0420)
#define RPG_GAMECORE_ADDFINISHMISSIONDATA_PLAYMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A0410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddFinishMissionData_PlayMessage_TypeDefinitionIndex = 21689;

	class AddFinishMissionData_PlayMessage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SubmissionID; // 0x18
		::System::UInt32 MessageSectionID; // 0x1C
		::System::Boolean ShowNotice; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDFINISHMISSIONDATA_PLAYMESSAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5A4C4E50C2530300(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddFinishMissionData_PlayMessage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddFinishMissionData_PlayMessage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDFINISHMISSIONDATA_PLAYMESSAGE_METHOD_3_5A4C4E50C2530300_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E97C66D182D31FA1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddFinishMissionData_PlayMessage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddFinishMissionData_PlayMessage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDFINISHMISSIONDATA_PLAYMESSAGE_METHOD_3_E97C66D182D31FA1_OFFSET))(a1, a2);
		}
	};
}

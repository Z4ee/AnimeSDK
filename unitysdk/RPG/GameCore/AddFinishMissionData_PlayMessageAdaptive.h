#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhoneMessagePlayMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADDFINISHMISSIONDATA_PLAYMESSAGEADAPTIVE_METHOD_3_36FC678A59ED3E9D_OFFSET UNITYSDK_OFFSET(0x1D6A0620)
#define RPG_GAMECORE_ADDFINISHMISSIONDATA_PLAYMESSAGEADAPTIVE_METHOD_3_7D69D416ABD38A74_OFFSET UNITYSDK_OFFSET(0x1D6A05D0)
#define RPG_GAMECORE_ADDFINISHMISSIONDATA_PLAYMESSAGEADAPTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A0610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddFinishMissionData_PlayMessageAdaptive_TypeDefinitionIndex = 21690;

	class AddFinishMissionData_PlayMessageAdaptive : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SubmissionID; // 0x18
		::System::UInt32 MessageSectionID; // 0x1C
		::System::Boolean ShowNotice; // 0x20
		::RPG::GameCore::PhoneMessagePlayMode PlayMode; // 0x24
		::System::Boolean EnableUIDOF; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDFINISHMISSIONDATA_PLAYMESSAGEADAPTIVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7D69D416ABD38A74(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddFinishMissionData_PlayMessageAdaptive*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddFinishMissionData_PlayMessageAdaptive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDFINISHMISSIONDATA_PLAYMESSAGEADAPTIVE_METHOD_3_7D69D416ABD38A74_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_36FC678A59ED3E9D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddFinishMissionData_PlayMessageAdaptive* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddFinishMissionData_PlayMessageAdaptive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDFINISHMISSIONDATA_PLAYMESSAGEADAPTIVE_METHOD_3_36FC678A59ED3E9D_OFFSET))(a1, a2);
		}
	};
}

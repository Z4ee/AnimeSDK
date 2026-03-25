#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PhantomPlayerFrameData_1.h"

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_PHANTOMPLAYERRECORDFRAMES_SYSTEM_BOOLEAN_AUTOGEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1684EF30)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int PhantomPlayerRecordFrames_System_Boolean_AutoGen_TypeDefinitionIndex = 33646;

	class PhantomPlayerRecordFrames_System_Boolean_AutoGen : public ::RPG::Client::LittleGame::FiveDim::PhantomPlayerFrameData_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_PHANTOMPLAYERRECORDFRAMES_SYSTEM_BOOLEAN_AUTOGEN__CTOR_OFFSET))(this);
		}
	};
}

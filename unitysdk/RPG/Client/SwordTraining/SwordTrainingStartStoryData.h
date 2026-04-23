#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGSTARTSTORYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB24C860)

namespace RPG::Client::SwordTraining
{
	inline static constexpr unsigned int SwordTrainingStartStoryData_TypeDefinitionIndex = 69109;

	class SwordTrainingStartStoryData : public ::System::Object
	{
	public:
		::System::UInt32 StoryID; // 0x10
		::System::Boolean IsRepeat; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGSTARTSTORYDATA__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_CHALLENGEEVENTFINISHTOASTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCD404C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeEventFinishToastData_TypeDefinitionIndex = 49838;

	class ChallengeEventFinishToastData : public ::System::Object
	{
	public:
		::System::Boolean IsPuzzle; // 0x10
		::System::Boolean IsSuccess; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEEVENTFINISHTOASTDATA__CTOR_OFFSET))(this);
		}
	};
}

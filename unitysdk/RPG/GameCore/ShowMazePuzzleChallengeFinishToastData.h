#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_SHOWMAZEPUZZLECHALLENGEFINISHTOASTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x11997CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowMazePuzzleChallengeFinishToastData_TypeDefinitionIndex = 53534;

	class ShowMazePuzzleChallengeFinishToastData : public ::System::Object
	{
	public:
		::System::Boolean IsSuccess; // 0x10
		::System::Boolean IsPuzzle; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMAZEPUZZLECHALLENGEFINISHTOASTDATA__CTOR_OFFSET))(this);
		}
	};
}

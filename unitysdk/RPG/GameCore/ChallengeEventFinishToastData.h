#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_CHALLENGEEVENTFINISHTOASTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1217B1F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeEventFinishToastData_TypeDefinitionIndex = 50893;

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

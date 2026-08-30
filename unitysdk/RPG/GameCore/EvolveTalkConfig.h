#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_GAMECORE_EVOLVETALKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11584820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveTalkConfig_TypeDefinitionIndex = 58802;

	class EvolveTalkConfig : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TalkIDs; // 0x10
		::System::Action* OnFinish; // 0x18
		::System::UInt32 Season; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVETALKCONFIG__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PuzzleTutorialType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PROP_PUZZLETUTORIALEVENTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xA130580)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PuzzleTutorialEventParam_TypeDefinitionIndex = 64234;

	class PuzzleTutorialEventParam : public ::System::Object
	{
	public:
		::RPG::GameCore::PuzzleTutorialType PTT; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLETUTORIALEVENTPARAM__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_OPENWORLD_STREAMINGLODSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x9EAF070)

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int StreamingLodSetting_TypeDefinitionIndex = 60472;

	class StreamingLodSetting : public ::System::Object
	{
	public:
		::System::Single LodCheckGap; // 0x10
		::System::Single LodCheckCameraDis; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGLODSETTING__CTOR_OFFSET))(this);
		}
	};
}

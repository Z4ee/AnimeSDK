#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LevelDirector; }

#define RPG_CLIENT_LEVELDIRECTOR_LEVELFRAMEBLENDINGENDOP_ONBLENDINGEND_OFFSET UNITYSDK_OFFSET(0xBD6DD10)
#define RPG_CLIENT_LEVELDIRECTOR_LEVELFRAMEBLENDINGENDOP__CTOR_OFFSET UNITYSDK_OFFSET(0xBD6D4F0)

namespace RPG::Client
{
	inline static constexpr unsigned int LevelDirector_LevelFrameBlendingEndOP_TypeDefinitionIndex = 55427;

	class LevelDirector_LevelFrameBlendingEndOP : public ::System::Object
	{
	public:
		::RPG::Client::LevelDirector* _LevelDirector; // 0x10

		::System::Void _ctor(::RPG::Client::LevelDirector* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LevelDirector*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELDIRECTOR_LEVELFRAMEBLENDINGENDOP__CTOR_OFFSET))(this, a1);
		}

		::System::Void OnBlendingEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELDIRECTOR_LEVELFRAMEBLENDINGENDOP_ONBLENDINGEND_OFFSET))(this);
		}
	};
}

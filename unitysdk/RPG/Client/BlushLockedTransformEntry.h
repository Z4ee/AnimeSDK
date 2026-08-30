#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BlushLockedTransformChannel.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_BLUSHLOCKEDTRANSFORMENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD903D0)

namespace RPG::Client
{
	inline static constexpr unsigned int BlushLockedTransformEntry_TypeDefinitionIndex = 70226;

	class BlushLockedTransformEntry : public ::System::Object
	{
	public:
		::UnityEngine::Transform* Target; // 0x10
		::RPG::Client::BlushLockedTransformChannel LockChannels; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLUSHLOCKEDTRANSFORMENTRY__CTOR_OFFSET))(this);
		}
	};
}

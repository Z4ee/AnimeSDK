#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraTalkPopDirection.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraTalkContent; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERAMAINENVTALKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xDC31D90)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraMainEnvTalkInfo_TypeDefinitionIndex = 78012;

	class ChimeraMainEnvTalkInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::ChimeraTalkContent* TalkContent; // 0x10
		::RPG::GameCore::ChimeraTalkPopDirection TalkDirection; // 0x18
		::UnityEngine::Transform* TalkAttachPoint; // 0x20
		::System::Single ShowTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAMAINENVTALKINFO__CTOR_OFFSET))(this);
		}
	};
}

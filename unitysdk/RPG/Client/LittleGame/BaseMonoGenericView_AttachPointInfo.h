#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class LittleGameAttachPointInfo; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int BaseMonoGenericView_AttachPointInfo_TypeDefinitionIndex = 71083;

	struct alignas(8) BaseMonoGenericView_AttachPointInfo
	{
		::System::String* Name; // 0x10
		::RPG::GameCore::LittleGameAttachPointInfo* Config; // 0x18
		::UnityEngine::Transform* Transform; // 0x20
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_DEVUIDEBUGREPORTDATAPARTICLE__CTOR_OFFSET UNITYSDK_OFFSET(0xB73ACF0)

namespace RPG::Client
{
	inline static constexpr unsigned int DevUIDebugReportDataParticle_TypeDefinitionIndex = 63930;

	class DevUIDebugReportDataParticle : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* target; // 0x10
		::System::String* layerGroup; // 0x18
		::System::Int32 quantity; // 0x20

		::System::Void _ctor(::UnityEngine::GameObject* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEVUIDEBUGREPORTDATAPARTICLE__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}

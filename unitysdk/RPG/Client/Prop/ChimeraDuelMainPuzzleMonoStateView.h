#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::Prop { class ChimeraDuelPuzzleVirtualCameraConfig; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEVIEW_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC50DA70)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xC510340)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelMainPuzzleMonoStateView_TypeDefinitionIndex = 72902;

	class ChimeraDuelMainPuzzleMonoStateView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::Prop::ChimeraDuelPuzzleVirtualCameraConfig* VirtualCameraConfig; // 0x18
		::UnityEngine::Transform* AudioListenerAnchor; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMONOSTATEVIEW_DISPOSE_OFFSET))(this);
		}
	};
}

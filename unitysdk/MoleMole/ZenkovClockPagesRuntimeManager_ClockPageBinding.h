#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ZenkovClockPagesRuntimeManager_ClockPageMaterialMapping; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_ZENKOVCLOCKPAGESRUNTIMEMANAGER_CLOCKPAGEBINDING__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB03250)

namespace MoleMole
{
	inline static constexpr unsigned int ZenkovClockPagesRuntimeManager_ClockPageBinding_TypeDefinitionIndex = 27361;

	class ZenkovClockPagesRuntimeManager_ClockPageBinding : public ::System::Object
	{
	public:
		::System::String* debugName; // 0x10
		::UnityEngine::Renderer* targetRenderer; // 0x18
		::UnityEngine::Animator* playbackAnimator; // 0x20
		::System::Int32 materialIndex; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::ZenkovClockPagesRuntimeManager_ClockPageMaterialMapping*>* materialPageMappings; // 0x30
		::System::Boolean materialPageMappingsInitialized; // 0x38
		::System::Int32 horizontalOffset; // 0x3C
		::System::Int32 verticalOffset; // 0x40
		::System::Boolean enableAutoPlayback; // 0x44
		::System::Int32 playRowCount; // 0x48
		::System::Single playTimeMultiplier; // 0x4C
		::System::Single idleSeconds; // 0x50
		::System::Single runtimeTime; // 0x54
		::System::Int32 runtimeStep; // 0x58
		::System::Int32 runtimeBackPageStep; // 0x5C
		::System::Int32 runtimeFrontPageStep; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVCLOCKPAGESRUNTIMEMANAGER_CLOCKPAGEBINDING__CTOR_OFFSET))(this);
		}
	};
}

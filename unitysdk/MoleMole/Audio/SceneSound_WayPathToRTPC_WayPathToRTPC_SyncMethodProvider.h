#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/Segment3.h"
#include "unitysdk/System/Object.h"

class Class_1_1747DAB17F36B4DF;
namespace MoleMole::Audio { class SceneSound_WayPathToRTPC; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_WAYPATHTORTPC_SYNCMETHODPROVIDER_CREATE_OFFSET UNITYSDK_OFFSET(0xECE2A30)
#define MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_WAYPATHTORTPC_SYNCMETHODPROVIDER_INIT_OFFSET UNITYSDK_OFFSET(0xECE1F70)
#define MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_WAYPATHTORTPC_SYNCMETHODPROVIDER_ONSYNC_OFFSET UNITYSDK_OFFSET(0xECE23B0)
#define MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_WAYPATHTORTPC_SYNCMETHODPROVIDER_POLISH_OFFSET UNITYSDK_OFFSET(0xECE28E0)
#define MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_WAYPATHTORTPC_SYNCMETHODPROVIDER_RECYCLE_OFFSET UNITYSDK_OFFSET(0xECE2960)
#define MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_WAYPATHTORTPC_SYNCMETHODPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0xECE2AD0)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int SceneSound_WayPathToRTPC_WayPathToRTPC_SyncMethodProvider_TypeDefinitionIndex = 39050;

	class SceneSound_WayPathToRTPC_WayPathToRTPC_SyncMethodProvider : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Dest::Math::Segment3>* _segments; // 0x10
		::MoleMole::Audio::SceneSound_WayPathToRTPC* _context; // 0x18
		::System::Single totalLength; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_WAYPATHTORTPC_SYNCMETHODPROVIDER__CTOR_OFFSET))(this);
		}

		::System::Void Init(::Class_1_1747DAB17F36B4DF* emitter)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1747DAB17F36B4DF*))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_WAYPATHTORTPC_SYNCMETHODPROVIDER_INIT_OFFSET))(this, emitter);
		}

		::System::Void OnSync(::Class_1_1747DAB17F36B4DF* emitter, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1747DAB17F36B4DF*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_WAYPATHTORTPC_SYNCMETHODPROVIDER_ONSYNC_OFFSET))(this, emitter, deltaTime);
		}

		::System::Void Polish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_WAYPATHTORTPC_SYNCMETHODPROVIDER_POLISH_OFFSET))(this);
		}

		::System::Void Recycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_WAYPATHTORTPC_SYNCMETHODPROVIDER_RECYCLE_OFFSET))(this);
		}

		static ::MoleMole::Audio::SceneSound_WayPathToRTPC_WayPathToRTPC_SyncMethodProvider* Create(::MoleMole::Audio::SceneSound_WayPathToRTPC* context)
		{
			return ((::MoleMole::Audio::SceneSound_WayPathToRTPC_WayPathToRTPC_SyncMethodProvider*(*)(::MoleMole::Audio::SceneSound_WayPathToRTPC*))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_WAYPATHTORTPC_SYNCMETHODPROVIDER_CREATE_OFFSET))(context);
		}
	};
}

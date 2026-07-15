#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_CEF50BC26E0B42E9_VirtualCameraConfig;
namespace RPG::Client::Prop { class ChimeraBubbleTalkParam; }
namespace RPG::Client::Prop { class ChimeraEntranceAnchorConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERAENTRANCEROUNDCONFIG_INITANCHORCONFIGS_OFFSET UNITYSDK_OFFSET(0x18FF1590)
#define RPG_CLIENT_PROP_CHIMERAENTRANCEROUNDCONFIG_TRYGETCHIMERATALKINFOLIST_OFFSET UNITYSDK_OFFSET(0x18FF1860)
#define RPG_CLIENT_PROP_CHIMERAENTRANCEROUNDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18FF1A50)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraEntranceRoundConfig_TypeDefinitionIndex = 74530;

	class ChimeraEntranceRoundConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraEntranceAnchorConfig*>* AnchorConfigs; // 0x18
		::System::UInt32 RoundID; // 0x20
		::UnityEngine::Transform* ChimeraAnchorRoot; // 0x28
		::Class_1_CEF50BC26E0B42E9_VirtualCameraConfig* VirtualCameraConfig; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCEROUNDCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void InitAnchorConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCEROUNDCONFIG_INITANCHORCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraBubbleTalkParam*>* TryGetChimeraTalkInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraBubbleTalkParam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCEROUNDCONFIG_TRYGETCHIMERATALKINFOLIST_OFFSET))(this);
		}
	};
}

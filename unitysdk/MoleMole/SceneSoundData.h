#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace MoleMole { class SceneSoundData_SubAreaConfig; }
namespace MoleMole { class SceneSoundObjDataItem; }
namespace MoleMole { class SceneSoundPolygonData; }
namespace MoleMole { class SceneSoundPortalData; }
namespace MoleMole::Audio { class MonoSceneSoundItem; }
namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SCENESOUNDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x129D9810)

namespace MoleMole
{
	inline static constexpr unsigned int SceneSoundData_TypeDefinitionIndex = 49902;

	class SceneSoundData : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::MoleMole::Config::ConfigSoundActionGeneral* enterSceneAction; // 0x58
		::MoleMole::Config::ConfigSoundActionGeneral* leaveSceneAction; // 0x60
		::System::String* heightToRTPCName; // 0x68
		::System::Single heightToRTPCBase; // 0x70
		::System::Collections::Generic::List_1<::MoleMole::SceneSoundObjDataItem*>* objDataItems; // 0x78
		::System::Collections::Generic::List_1<::MoleMole::SceneSoundPolygonData*>* polygonDataItems; // 0x80
		::System::Collections::Generic::List_1<::MoleMole::Audio::MonoSceneSoundItem*>* monoSoundItems; // 0x88
		::System::Collections::Generic::List_1<::MoleMole::SceneSoundPortalData*>* portalDataItems; // 0x90
		::System::Int32 listenerSidePortalCount; // 0x98
		::System::Int32 maxRoutingHops; // 0x9C
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::SceneSoundData_SubAreaConfig*>* subAreaConfig; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDDATA__CTOR_OFFSET))(this);
		}
	};
}

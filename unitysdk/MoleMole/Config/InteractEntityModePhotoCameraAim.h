#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/InteractEntryMode.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_35D50070BC469EAB;
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_INTERACTENTITYMODEPHOTOCAMERAAIM_CHECKACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0x17D6BBD0)
#define MOLEMOLE_CONFIG_INTERACTENTITYMODEPHOTOCAMERAAIM_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x17D6BB40)
#define MOLEMOLE_CONFIG_INTERACTENTITYMODEPHOTOCAMERAAIM__CTOR_OFFSET UNITYSDK_OFFSET(0x17D6BCA0)
#define MOLEMOLE_CONFIG_INTERACTENTITYMODEPHOTOCAMERAAIM___BASE_CHECKACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0x17D6BCC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int InteractEntityModePhotoCameraAim_TypeDefinitionIndex = 83665;

	class InteractEntityModePhotoCameraAim : public ::MoleMole::Config::InteractEntryMode
	{
	public:
		::System::String* ConfigCameraPath; // 0x20
		::System::Boolean InitCameraZLock; // 0x28
		::UnityEngine::Vector3 InitCameraPos; // 0x2C
		::UnityEngine::Vector3 TargetRange; // 0x38
		::System::Single LockSpeed; // 0x44
		::UnityEngine::Vector3 Target; // 0x48
		::System::Single NoInputTimer; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTITYMODEPHOTOCAMERAAIM__CTOR_OFFSET))(this);
		}

		::Class_1_35D50070BC469EAB* CreateInstance(::MoleMole::Config::InteractEntry* entry)
		{
			return ((::Class_1_35D50070BC469EAB*(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTITYMODEPHOTOCAMERAAIM_CREATEINSTANCE_OFFSET))(this, entry);
		}

		::System::Void CheckActionContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTITYMODEPHOTOCAMERAAIM_CHECKACTIONCONTENT_OFFSET))(this);
		}

		::System::Void __base_CheckActionContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTITYMODEPHOTOCAMERAAIM___BASE_CHECKACTIONCONTENT_OFFSET))(this);
		}
	};
}

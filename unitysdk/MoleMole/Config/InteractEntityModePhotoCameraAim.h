#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/InteractEntryMode.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_35D50070BC469EAB;
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_INTERACTENTITYMODEPHOTOCAMERAAIM_CHECKACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0x1231A810)
#define MOLEMOLE_CONFIG_INTERACTENTITYMODEPHOTOCAMERAAIM_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1231A780)
#define MOLEMOLE_CONFIG_INTERACTENTITYMODEPHOTOCAMERAAIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1231A8E0)
#define MOLEMOLE_CONFIG_INTERACTENTITYMODEPHOTOCAMERAAIM___BASE_CHECKACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0x1231A900)

namespace MoleMole::Config
{
	inline static constexpr unsigned int InteractEntityModePhotoCameraAim_TypeDefinitionIndex = 49398;

	class InteractEntityModePhotoCameraAim : public ::MoleMole::Config::InteractEntryMode
	{
	public:
		::System::String* ConfigCameraPath; // 0x20
		::System::Single NoInputTimer; // 0x28
		::System::Single LockSpeed; // 0x2C
		::System::Boolean InitCameraZLock; // 0x30
		::UnityEngine::Vector3 Target; // 0x34
		::UnityEngine::Vector3 InitCameraPos; // 0x40
		::UnityEngine::Vector3 TargetRange; // 0x4C

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

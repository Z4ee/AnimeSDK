#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/InteractEntryMode.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_816D4E2238E8C24A;
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_INTERACTENTITYMODEPHOTOCAMERAAIM_CHECKACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0x172BCEB0)
#define MOLEMOLE_CONFIG_INTERACTENTITYMODEPHOTOCAMERAAIM_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x172BCE20)
#define MOLEMOLE_CONFIG_INTERACTENTITYMODEPHOTOCAMERAAIM__CTOR_OFFSET UNITYSDK_OFFSET(0x172BCF80)
#define MOLEMOLE_CONFIG_INTERACTENTITYMODEPHOTOCAMERAAIM___BASE_CHECKACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0x172BCFA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int InteractEntityModePhotoCameraAim_TypeDefinitionIndex = 91041;

	class InteractEntityModePhotoCameraAim : public ::MoleMole::Config::InteractEntryMode
	{
	public:
		::System::String* ConfigCameraPath; // 0x20
		::UnityEngine::Vector3 Target; // 0x28
		::System::Boolean InitCameraZLock; // 0x34
		::UnityEngine::Vector3 InitCameraPos; // 0x38
		::UnityEngine::Vector3 TargetRange; // 0x44
		::System::Single LockSpeed; // 0x50
		::System::Single NoInputTimer; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTITYMODEPHOTOCAMERAAIM__CTOR_OFFSET))(this);
		}

		::Class_1_816D4E2238E8C24A* CreateInstance(::MoleMole::Config::InteractEntry* entry)
		{
			return ((::Class_1_816D4E2238E8C24A*(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTITYMODEPHOTOCAMERAAIM_CREATEINSTANCE_OFFSET))(this, entry);
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

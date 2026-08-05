#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/InteractEntryMode.h"

class Class_1_816D4E2238E8C24A;
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_INTERACTENTITYMODEROTATORCONTROL_CHECKACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0x19ACE570)
#define MOLEMOLE_CONFIG_INTERACTENTITYMODEROTATORCONTROL_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x19ACE4E0)
#define MOLEMOLE_CONFIG_INTERACTENTITYMODEROTATORCONTROL_GET_ISSUPPORTREPEAT_OFFSET UNITYSDK_OFFSET(0x19ACE690)
#define MOLEMOLE_CONFIG_INTERACTENTITYMODEROTATORCONTROL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19ACE620)
#define MOLEMOLE_CONFIG_INTERACTENTITYMODEROTATORCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x19ACE6A0)
#define MOLEMOLE_CONFIG_INTERACTENTITYMODEROTATORCONTROL___BASE_CHECKACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0x19ACE6B0)
#define MOLEMOLE_CONFIG_INTERACTENTITYMODEROTATORCONTROL___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19ACE740)

namespace MoleMole::Config
{
	inline static constexpr unsigned int InteractEntityModeRotatorControl_TypeDefinitionIndex = 51105;

	class InteractEntityModeRotatorControl : public ::MoleMole::Config::InteractEntryMode
	{
	public:
		::System::String* RotatorAttachPointName; // 0x20
		::System::Single MaxAngleX; // 0x28
		::System::Single MinAngleX; // 0x2C
		::System::Single AngularSpeedRatio; // 0x30
		::System::Single MaxAngleY; // 0x34
		::System::Single MinAngleY; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTITYMODEROTATORCONTROL__CTOR_OFFSET))(this);
		}

		::Class_1_816D4E2238E8C24A* CreateInstance(::MoleMole::Config::InteractEntry* entry)
		{
			return ((::Class_1_816D4E2238E8C24A*(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTITYMODEROTATORCONTROL_CREATEINSTANCE_OFFSET))(this, entry);
		}

		::System::Void CheckActionContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTITYMODEROTATORCONTROL_CHECKACTIONCONTENT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTITYMODEROTATORCONTROL_TOSTRING_OFFSET))(this);
		}

		::System::Boolean get_IsSupportRepeat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTITYMODEROTATORCONTROL_GET_ISSUPPORTREPEAT_OFFSET))(this);
		}

		::System::Void __base_CheckActionContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTITYMODEROTATORCONTROL___BASE_CHECKACTIONCONTENT_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTITYMODEROTATORCONTROL___BASE_TOSTRING_OFFSET))(this);
		}
	};
}

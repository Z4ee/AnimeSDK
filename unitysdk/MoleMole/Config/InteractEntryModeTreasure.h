#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/InteractEntryMode.h"

class Class_1_35D50070BC469EAB;
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_INTERACTENTRYMODETREASURE_CHECKACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0x183D23E0)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODETREASURE_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x183D22D0)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODETREASURE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x183D2460)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODETREASURE__CTOR_OFFSET UNITYSDK_OFFSET(0x183D2500)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODETREASURE___BASE_CHECKACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0x183D2510)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODETREASURE___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x183D25A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int InteractEntryModeTreasure_TypeDefinitionIndex = 81478;

	class InteractEntryModeTreasure : public ::MoleMole::Config::InteractEntryMode
	{
	public:
		::System::String* dropStr; // 0x20
		::System::Int32 interactCount; // 0x28
		::System::Int32 overridePickType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODETREASURE__CTOR_OFFSET))(this);
		}

		::Class_1_35D50070BC469EAB* CreateInstance(::MoleMole::Config::InteractEntry* entry)
		{
			return ((::Class_1_35D50070BC469EAB*(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODETREASURE_CREATEINSTANCE_OFFSET))(this, entry);
		}

		::System::Void CheckActionContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODETREASURE_CHECKACTIONCONTENT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODETREASURE_TOSTRING_OFFSET))(this);
		}

		::System::Void __base_CheckActionContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODETREASURE___BASE_CHECKACTIONCONTENT_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODETREASURE___BASE_TOSTRING_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/InteractEntryMode.h"

class Class_1_35D50070BC469EAB;
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_INTERACTENTRYMODEVCAMERA_CHECKACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0x12437F40)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODEVCAMERA_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x12437E30)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODEVCAMERA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12437FC0)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODEVCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x12438070)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODEVCAMERA___BASE_CHECKACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0x12438080)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODEVCAMERA___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12438110)

namespace MoleMole::Config
{
	inline static constexpr unsigned int InteractEntryModeVCamera_TypeDefinitionIndex = 60366;

	class InteractEntryModeVCamera : public ::MoleMole::Config::InteractEntryMode
	{
	public:
		::System::Int32 interactCount; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODEVCAMERA__CTOR_OFFSET))(this);
		}

		::Class_1_35D50070BC469EAB* CreateInstance(::MoleMole::Config::InteractEntry* entry)
		{
			return ((::Class_1_35D50070BC469EAB*(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODEVCAMERA_CREATEINSTANCE_OFFSET))(this, entry);
		}

		::System::Void CheckActionContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODEVCAMERA_CHECKACTIONCONTENT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODEVCAMERA_TOSTRING_OFFSET))(this);
		}

		::System::Void __base_CheckActionContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODEVCAMERA___BASE_CHECKACTIONCONTENT_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODEVCAMERA___BASE_TOSTRING_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/InteractEntryMode.h"

class Class_1_35D50070BC469EAB;
namespace MoleMole { class AniamtorParamsSetting; }
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }

#define MOLEMOLE_INTERACTENTRYMODEBUDDY_CHECKACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0x178170E0)
#define MOLEMOLE_INTERACTENTRYMODEBUDDY_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x17817050)
#define MOLEMOLE_INTERACTENTRYMODEBUDDY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17817180)
#define MOLEMOLE_INTERACTENTRYMODEBUDDY__CTOR_OFFSET UNITYSDK_OFFSET(0x17817200)
#define MOLEMOLE_INTERACTENTRYMODEBUDDY___BASE_CHECKACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0x17817210)
#define MOLEMOLE_INTERACTENTRYMODEBUDDY___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x178172A0)

namespace MoleMole
{
	inline static constexpr unsigned int InteractEntryModeBuddy_TypeDefinitionIndex = 43165;

	class InteractEntryModeBuddy : public ::MoleMole::Config::InteractEntryMode
	{
	public:
		::System::String* PosAttachPoint; // 0x20
		::MoleMole::AniamtorParamsSetting* InteractAniamtorSetting; // 0x28
		::MoleMole::AniamtorParamsSetting* BuddyAniamtorSetting; // 0x30
		::System::Boolean MuteLocalInput; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTENTRYMODEBUDDY__CTOR_OFFSET))(this);
		}

		::Class_1_35D50070BC469EAB* CreateInstance(::MoleMole::Config::InteractEntry* entry)
		{
			return ((::Class_1_35D50070BC469EAB*(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTENTRYMODEBUDDY_CREATEINSTANCE_OFFSET))(this, entry);
		}

		::System::Void CheckActionContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTENTRYMODEBUDDY_CHECKACTIONCONTENT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTENTRYMODEBUDDY_TOSTRING_OFFSET))(this);
		}

		::System::Void __base_CheckActionContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTENTRYMODEBUDDY___BASE_CHECKACTIONCONTENT_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTENTRYMODEBUDDY___BASE_TOSTRING_OFFSET))(this);
		}
	};
}

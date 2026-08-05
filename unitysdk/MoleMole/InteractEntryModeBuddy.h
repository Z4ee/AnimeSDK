#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/InteractEntryMode.h"

class Class_1_816D4E2238E8C24A;
namespace MoleMole { class AniamtorParamsSetting; }
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }

#define MOLEMOLE_INTERACTENTRYMODEBUDDY_CHECKACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0x19B2BD70)
#define MOLEMOLE_INTERACTENTRYMODEBUDDY_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x19B2BCE0)
#define MOLEMOLE_INTERACTENTRYMODEBUDDY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19B2BE10)
#define MOLEMOLE_INTERACTENTRYMODEBUDDY__CTOR_OFFSET UNITYSDK_OFFSET(0x19B2BE90)
#define MOLEMOLE_INTERACTENTRYMODEBUDDY___BASE_CHECKACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0x19B2BEA0)
#define MOLEMOLE_INTERACTENTRYMODEBUDDY___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19B2BF30)

namespace MoleMole
{
	inline static constexpr unsigned int InteractEntryModeBuddy_TypeDefinitionIndex = 85583;

	class InteractEntryModeBuddy : public ::MoleMole::Config::InteractEntryMode
	{
	public:
		::MoleMole::AniamtorParamsSetting* BuddyAniamtorSetting; // 0x20
		::MoleMole::AniamtorParamsSetting* InteractAniamtorSetting; // 0x28
		::System::String* PosAttachPoint; // 0x30
		::System::Boolean MuteLocalInput; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTENTRYMODEBUDDY__CTOR_OFFSET))(this);
		}

		::Class_1_816D4E2238E8C24A* CreateInstance(::MoleMole::Config::InteractEntry* entry)
		{
			return ((::Class_1_816D4E2238E8C24A*(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTENTRYMODEBUDDY_CREATEINSTANCE_OFFSET))(this, entry);
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

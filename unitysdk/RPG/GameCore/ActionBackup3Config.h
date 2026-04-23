#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIONBACKUP3CONFIG_METHOD_4_29613674D4ACE020_OFFSET UNITYSDK_OFFSET(0x185F88F0)
#define RPG_GAMECORE_ACTIONBACKUP3CONFIG_METHOD_4_591CCF7440C03BF9_OFFSET UNITYSDK_OFFSET(0x185F89C0)
#define RPG_GAMECORE_ACTIONBACKUP3CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x185F8970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionBackup3Config_TypeDefinitionIndex = 16146;

	class ActionBackup3Config : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONBACKUP3CONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_29613674D4ACE020(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionBackup3Config*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionBackup3Config*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONBACKUP3CONFIG_METHOD_4_29613674D4ACE020_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_591CCF7440C03BF9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionBackup3Config* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionBackup3Config*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONBACKUP3CONFIG_METHOD_4_591CCF7440C03BF9_OFFSET))(a1, a2);
		}
	};
}

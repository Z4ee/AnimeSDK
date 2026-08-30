#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIONBACKUP3CONFIG_METHOD_4_591CCF7440C03BF9_OFFSET UNITYSDK_OFFSET(0x1CD6EA00)
#define RPG_GAMECORE_ACTIONBACKUP3CONFIG_METHOD_4_EB0773ED9A3075F5_OFFSET UNITYSDK_OFFSET(0x1CD6E9B0)
#define RPG_GAMECORE_ACTIONBACKUP3CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD6E9F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionBackup3Config_TypeDefinitionIndex = 16867;

	class ActionBackup3Config : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONBACKUP3CONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EB0773ED9A3075F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionBackup3Config*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionBackup3Config*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONBACKUP3CONFIG_METHOD_4_EB0773ED9A3075F5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_591CCF7440C03BF9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionBackup3Config* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionBackup3Config*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONBACKUP3CONFIG_METHOD_4_591CCF7440C03BF9_OFFSET))(a1, a2);
		}
	};
}

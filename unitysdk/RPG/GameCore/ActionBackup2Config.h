#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIONBACKUP2CONFIG_METHOD_4_467ACD5E2938ABD6_OFFSET UNITYSDK_OFFSET(0x185F88E0)
#define RPG_GAMECORE_ACTIONBACKUP2CONFIG_METHOD_4_F93BB412376A1DBF_OFFSET UNITYSDK_OFFSET(0x185F8810)
#define RPG_GAMECORE_ACTIONBACKUP2CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x185F8890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionBackup2Config_TypeDefinitionIndex = 16145;

	class ActionBackup2Config : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONBACKUP2CONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F93BB412376A1DBF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionBackup2Config*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionBackup2Config*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONBACKUP2CONFIG_METHOD_4_F93BB412376A1DBF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_467ACD5E2938ABD6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionBackup2Config* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionBackup2Config*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONBACKUP2CONFIG_METHOD_4_467ACD5E2938ABD6_OFFSET))(a1, a2);
		}
	};
}

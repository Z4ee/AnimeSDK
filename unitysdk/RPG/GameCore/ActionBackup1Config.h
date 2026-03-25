#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIONBACKUP1CONFIG_METHOD_4_85FA07360FF24103_OFFSET UNITYSDK_OFFSET(0x16E98220)
#define RPG_GAMECORE_ACTIONBACKUP1CONFIG_METHOD_4_90AC81906159454A_OFFSET UNITYSDK_OFFSET(0x16E98150)
#define RPG_GAMECORE_ACTIONBACKUP1CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E981D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionBackup1Config_TypeDefinitionIndex = 15622;

	class ActionBackup1Config : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONBACKUP1CONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_90AC81906159454A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionBackup1Config*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionBackup1Config*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONBACKUP1CONFIG_METHOD_4_90AC81906159454A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_85FA07360FF24103(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionBackup1Config* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionBackup1Config*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONBACKUP1CONFIG_METHOD_4_85FA07360FF24103_OFFSET))(a1, a2);
		}
	};
}

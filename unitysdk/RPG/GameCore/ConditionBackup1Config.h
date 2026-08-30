#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CONDITIONBACKUP1CONFIG_METHOD_4_7F53D27E2811BC16_OFFSET UNITYSDK_OFFSET(0x1D9AEBC0)
#define RPG_GAMECORE_CONDITIONBACKUP1CONFIG_METHOD_4_EA8AB92C7C8F05BA_OFFSET UNITYSDK_OFFSET(0x1D9AEB70)
#define RPG_GAMECORE_CONDITIONBACKUP1CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9AEBB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConditionBackup1Config_TypeDefinitionIndex = 16868;

	class ConditionBackup1Config : public ::RPG::GameCore::MiConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONBACKUP1CONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EA8AB92C7C8F05BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConditionBackup1Config*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConditionBackup1Config*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONBACKUP1CONFIG_METHOD_4_EA8AB92C7C8F05BA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7F53D27E2811BC16(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConditionBackup1Config* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConditionBackup1Config*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONBACKUP1CONFIG_METHOD_4_7F53D27E2811BC16_OFFSET))(a1, a2);
		}
	};
}

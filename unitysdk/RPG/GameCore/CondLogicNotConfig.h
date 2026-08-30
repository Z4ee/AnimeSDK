#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CONDLOGICNOTCONFIG_METHOD_4_4364FD2A1A5BEF08_OFFSET UNITYSDK_OFFSET(0x1D9AE5F0)
#define RPG_GAMECORE_CONDLOGICNOTCONFIG_METHOD_4_F5B096D259BC953A_OFFSET UNITYSDK_OFFSET(0x1D9AE650)
#define RPG_GAMECORE_CONDLOGICNOTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9AE640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CondLogicNotConfig_TypeDefinitionIndex = 16881;

	class CondLogicNotConfig : public ::RPG::GameCore::MiConditionConfigBase
	{
	public:
		::RPG::GameCore::MiConditionConfigBase* Condition; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDLOGICNOTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4364FD2A1A5BEF08(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CondLogicNotConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CondLogicNotConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDLOGICNOTCONFIG_METHOD_4_4364FD2A1A5BEF08_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F5B096D259BC953A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CondLogicNotConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CondLogicNotConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDLOGICNOTCONFIG_METHOD_4_F5B096D259BC953A_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CONDLOGICNOTCONFIG_METHOD_4_480FDCAFD45CFA83_OFFSET UNITYSDK_OFFSET(0x19671770)
#define RPG_GAMECORE_CONDLOGICNOTCONFIG_METHOD_4_C1EF9C2E91CBECCE_OFFSET UNITYSDK_OFFSET(0x19671630)
#define RPG_GAMECORE_CONDLOGICNOTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x196716F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CondLogicNotConfig_TypeDefinitionIndex = 16209;

	class CondLogicNotConfig : public ::RPG::GameCore::MiConditionConfigBase
	{
	public:
		::RPG::GameCore::MiConditionConfigBase* Condition; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDLOGICNOTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C1EF9C2E91CBECCE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CondLogicNotConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CondLogicNotConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDLOGICNOTCONFIG_METHOD_4_C1EF9C2E91CBECCE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_480FDCAFD45CFA83(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CondLogicNotConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CondLogicNotConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDLOGICNOTCONFIG_METHOD_4_480FDCAFD45CFA83_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define RPG_GAMECORE_CONDRANDOMSUCCCONFIG_METHOD_4_63F02B9B97E84361_OFFSET UNITYSDK_OFFSET(0x188320B0)
#define RPG_GAMECORE_CONDRANDOMSUCCCONFIG_METHOD_4_71265C2E80D80C54_OFFSET UNITYSDK_OFFSET(0x18831F70)
#define RPG_GAMECORE_CONDRANDOMSUCCCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18832030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CondRandomSuccConfig_TypeDefinitionIndex = 16167;

	class CondRandomSuccConfig : public ::RPG::GameCore::MiConditionConfigBase
	{
	public:
		::RPG::GameCore::MiParameterConfigBase* Probability; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDRANDOMSUCCCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_71265C2E80D80C54(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CondRandomSuccConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CondRandomSuccConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDRANDOMSUCCCONFIG_METHOD_4_71265C2E80D80C54_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_63F02B9B97E84361(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CondRandomSuccConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CondRandomSuccConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDRANDOMSUCCCONFIG_METHOD_4_63F02B9B97E84361_OFFSET))(a1, a2);
		}
	};
}

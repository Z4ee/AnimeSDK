#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define RPG_GAMECORE_CONDCOMPARECONFIG_METHOD_4_124A061733564D99_OFFSET UNITYSDK_OFFSET(0x1BC2A0B0)
#define RPG_GAMECORE_CONDCOMPARECONFIG_METHOD_4_3800BD344252F9A7_OFFSET UNITYSDK_OFFSET(0x1BC2A050)
#define RPG_GAMECORE_CONDCOMPARECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC2A0A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CondCompareConfig_TypeDefinitionIndex = 16394;

	class CondCompareConfig : public ::RPG::GameCore::MiConditionConfigBase
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x18
		::RPG::GameCore::MiParameterConfigBase* LeftValue; // 0x20
		::RPG::GameCore::MiParameterConfigBase* RightValue; // 0x28
		::System::Single Epsilon; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDCOMPARECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3800BD344252F9A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CondCompareConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CondCompareConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDCOMPARECONFIG_METHOD_4_3800BD344252F9A7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_124A061733564D99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CondCompareConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CondCompareConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDCOMPARECONFIG_METHOD_4_124A061733564D99_OFFSET))(a1, a2);
		}
	};
}

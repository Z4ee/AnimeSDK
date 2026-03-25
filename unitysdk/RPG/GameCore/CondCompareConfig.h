#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define RPG_GAMECORE_CONDCOMPARECONFIG_METHOD_4_0A19E3E33F9B618D_OFFSET UNITYSDK_OFFSET(0x1712A3D0)
#define RPG_GAMECORE_CONDCOMPARECONFIG_METHOD_4_17813D1BD9475150_OFFSET UNITYSDK_OFFSET(0x1712A530)
#define RPG_GAMECORE_CONDCOMPARECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1712A4A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CondCompareConfig_TypeDefinitionIndex = 15643;

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

		static ::System::Void Method_4_0A19E3E33F9B618D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CondCompareConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CondCompareConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDCOMPARECONFIG_METHOD_4_0A19E3E33F9B618D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_17813D1BD9475150(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CondCompareConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CondCompareConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDCOMPARECONFIG_METHOD_4_17813D1BD9475150_OFFSET))(a1, a2);
		}
	};
}

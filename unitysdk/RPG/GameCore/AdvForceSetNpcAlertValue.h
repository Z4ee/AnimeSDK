#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVFORCESETNPCALERTVALUE_METHOD_3_BB18B5DA110760EF_OFFSET UNITYSDK_OFFSET(0x1D6B8D30)
#define RPG_GAMECORE_ADVFORCESETNPCALERTVALUE_METHOD_3_ED62A903CB0D3B02_OFFSET UNITYSDK_OFFSET(0x1D6B8CF0)
#define RPG_GAMECORE_ADVFORCESETNPCALERTVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B8D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvForceSetNpcAlertValue_TypeDefinitionIndex = 20107;

	class AdvForceSetNpcAlertValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 NpcMonsterID; // 0x1C
		::System::Single Range; // 0x20
		::System::Single AlertValue; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFORCESETNPCALERTVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ED62A903CB0D3B02(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvForceSetNpcAlertValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvForceSetNpcAlertValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFORCESETNPCALERTVALUE_METHOD_3_ED62A903CB0D3B02_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BB18B5DA110760EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvForceSetNpcAlertValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvForceSetNpcAlertValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFORCESETNPCALERTVALUE_METHOD_3_BB18B5DA110760EF_OFFSET))(a1, a2);
		}
	};
}

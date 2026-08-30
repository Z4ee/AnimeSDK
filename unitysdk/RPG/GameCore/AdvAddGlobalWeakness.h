#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVADDGLOBALWEAKNESS_METHOD_3_E64C8BFA101C0EC6_OFFSET UNITYSDK_OFFSET(0x1D6A72A0)
#define RPG_GAMECORE_ADVADDGLOBALWEAKNESS_METHOD_3_FF5353DD98909ABB_OFFSET UNITYSDK_OFFSET(0x1D6A72E0)
#define RPG_GAMECORE_ADVADDGLOBALWEAKNESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A72D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvAddGlobalWeakness_TypeDefinitionIndex = 21563;

	class AdvAddGlobalWeakness : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::AttackDamageType Weakness; // 0x18
		::System::UInt32 MinRank; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVADDGLOBALWEAKNESS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E64C8BFA101C0EC6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvAddGlobalWeakness*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvAddGlobalWeakness*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVADDGLOBALWEAKNESS_METHOD_3_E64C8BFA101C0EC6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FF5353DD98909ABB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvAddGlobalWeakness* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvAddGlobalWeakness*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVADDGLOBALWEAKNESS_METHOD_3_FF5353DD98909ABB_OFFSET))(a1, a2);
		}
	};
}

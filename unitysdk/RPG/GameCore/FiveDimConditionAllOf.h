#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventCondition.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMCONDITIONALLOF_METHOD_3_B2F74180553A92EE_OFFSET UNITYSDK_OFFSET(0x171ECF00)
#define RPG_GAMECORE_FIVEDIMCONDITIONALLOF_METHOD_3_D16F57798A6BC795_OFFSET UNITYSDK_OFFSET(0x171EA9D0)
#define RPG_GAMECORE_FIVEDIMCONDITIONALLOF__CTOR_OFFSET UNITYSDK_OFFSET(0x171EA9C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimConditionAllOf_TypeDefinitionIndex = 17247;

	class FiveDimConditionAllOf : public ::RPG::GameCore::FiveDimBaseEventCondition
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventCondition*>* Conditions; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONDITIONALLOF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B2F74180553A92EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimConditionAllOf*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimConditionAllOf*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONDITIONALLOF_METHOD_3_B2F74180553A92EE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D16F57798A6BC795(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimConditionAllOf* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimConditionAllOf*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONDITIONALLOF_METHOD_3_D16F57798A6BC795_OFFSET))(a1, a2);
		}
	};
}

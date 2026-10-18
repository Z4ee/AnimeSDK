#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventCondition.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMCONDITIONANYOF_METHOD_4_0C1651D326BCD6AF_OFFSET UNITYSDK_OFFSET(0x1D6883F0)
#define RPG_GAMECORE_FIVEDIMCONDITIONANYOF_METHOD_4_9C5799958327ACBC_OFFSET UNITYSDK_OFFSET(0x1D6856B0)
#define RPG_GAMECORE_FIVEDIMCONDITIONANYOF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6856A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimConditionAnyOf_TypeDefinitionIndex = 18795;

	class FiveDimConditionAnyOf : public ::RPG::GameCore::FiveDimBaseEventCondition
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventCondition*>* Conditions; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONDITIONANYOF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0C1651D326BCD6AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimConditionAnyOf*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimConditionAnyOf*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONDITIONANYOF_METHOD_4_0C1651D326BCD6AF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9C5799958327ACBC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimConditionAnyOf* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimConditionAnyOf*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONDITIONANYOF_METHOD_4_9C5799958327ACBC_OFFSET))(a1, a2);
		}
	};
}

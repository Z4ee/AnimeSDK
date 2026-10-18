#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventCondition.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMCONDITIONALLOF_METHOD_4_039B7ED6069C2A81_OFFSET UNITYSDK_OFFSET(0x1D6855B0)
#define RPG_GAMECORE_FIVEDIMCONDITIONALLOF_METHOD_4_D2F4D23C56DC5D82_OFFSET UNITYSDK_OFFSET(0x1D6883C0)
#define RPG_GAMECORE_FIVEDIMCONDITIONALLOF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6855A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimConditionAllOf_TypeDefinitionIndex = 18796;

	class FiveDimConditionAllOf : public ::RPG::GameCore::FiveDimBaseEventCondition
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventCondition*>* Conditions; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONDITIONALLOF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D2F4D23C56DC5D82(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimConditionAllOf*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimConditionAllOf*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONDITIONALLOF_METHOD_4_D2F4D23C56DC5D82_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_039B7ED6069C2A81(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimConditionAllOf* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimConditionAllOf*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONDITIONALLOF_METHOD_4_039B7ED6069C2A81_OFFSET))(a1, a2);
		}
	};
}

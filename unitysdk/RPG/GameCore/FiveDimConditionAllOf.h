#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventCondition.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMCONDITIONALLOF_METHOD_3_1D2A6B2347ACDC40_OFFSET UNITYSDK_OFFSET(0x1D0A4090)
#define RPG_GAMECORE_FIVEDIMCONDITIONALLOF_METHOD_3_DFD074E1E410140B_OFFSET UNITYSDK_OFFSET(0x1D0A6D10)
#define RPG_GAMECORE_FIVEDIMCONDITIONALLOF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0A4080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimConditionAllOf_TypeDefinitionIndex = 18586;

	class FiveDimConditionAllOf : public ::RPG::GameCore::FiveDimBaseEventCondition
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventCondition*>* Conditions; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONDITIONALLOF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DFD074E1E410140B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimConditionAllOf*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimConditionAllOf*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONDITIONALLOF_METHOD_3_DFD074E1E410140B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1D2A6B2347ACDC40(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimConditionAllOf* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimConditionAllOf*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONDITIONALLOF_METHOD_3_1D2A6B2347ACDC40_OFFSET))(a1, a2);
		}
	};
}

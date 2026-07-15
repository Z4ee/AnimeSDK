#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventCondition.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMCONDITIONNONEOF_METHOD_3_45F6F2BCB43B16D4_OFFSET UNITYSDK_OFFSET(0x1BA8E090)
#define RPG_GAMECORE_FIVEDIMCONDITIONNONEOF_METHOD_3_642EF283128D42B7_OFFSET UNITYSDK_OFFSET(0x1BA8B480)
#define RPG_GAMECORE_FIVEDIMCONDITIONNONEOF__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA8B470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimConditionNoneOf_TypeDefinitionIndex = 18063;

	class FiveDimConditionNoneOf : public ::RPG::GameCore::FiveDimBaseEventCondition
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventCondition*>* Conditions; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONDITIONNONEOF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_45F6F2BCB43B16D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimConditionNoneOf*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimConditionNoneOf*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONDITIONNONEOF_METHOD_3_45F6F2BCB43B16D4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_642EF283128D42B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimConditionNoneOf* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimConditionNoneOf*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONDITIONNONEOF_METHOD_3_642EF283128D42B7_OFFSET))(a1, a2);
		}
	};
}

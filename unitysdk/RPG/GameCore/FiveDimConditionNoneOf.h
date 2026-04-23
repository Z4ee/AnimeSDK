#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventCondition.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMCONDITIONNONEOF_METHOD_3_1F05A0ADA36BD421_OFFSET UNITYSDK_OFFSET(0x188FAC50)
#define RPG_GAMECORE_FIVEDIMCONDITIONNONEOF_METHOD_3_ABAE59FE0153CDE2_OFFSET UNITYSDK_OFFSET(0x188F86A0)
#define RPG_GAMECORE_FIVEDIMCONDITIONNONEOF__CTOR_OFFSET UNITYSDK_OFFSET(0x188F8690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimConditionNoneOf_TypeDefinitionIndex = 17856;

	class FiveDimConditionNoneOf : public ::RPG::GameCore::FiveDimBaseEventCondition
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventCondition*>* Conditions; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONDITIONNONEOF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1F05A0ADA36BD421(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimConditionNoneOf*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimConditionNoneOf*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONDITIONNONEOF_METHOD_3_1F05A0ADA36BD421_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ABAE59FE0153CDE2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimConditionNoneOf* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimConditionNoneOf*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONDITIONNONEOF_METHOD_3_ABAE59FE0153CDE2_OFFSET))(a1, a2);
		}
	};
}

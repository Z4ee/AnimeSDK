#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventCondition.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMCONDITIONANYOF_METHOD_3_2711921D735A139B_OFFSET UNITYSDK_OFFSET(0x188FAC20)
#define RPG_GAMECORE_FIVEDIMCONDITIONANYOF_METHOD_3_EA885D87F6AD7A50_OFFSET UNITYSDK_OFFSET(0x188F85A0)
#define RPG_GAMECORE_FIVEDIMCONDITIONANYOF__CTOR_OFFSET UNITYSDK_OFFSET(0x188F8590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimConditionAnyOf_TypeDefinitionIndex = 17854;

	class FiveDimConditionAnyOf : public ::RPG::GameCore::FiveDimBaseEventCondition
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventCondition*>* Conditions; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONDITIONANYOF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2711921D735A139B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimConditionAnyOf*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimConditionAnyOf*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONDITIONANYOF_METHOD_3_2711921D735A139B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EA885D87F6AD7A50(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimConditionAnyOf* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimConditionAnyOf*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONDITIONANYOF_METHOD_3_EA885D87F6AD7A50_OFFSET))(a1, a2);
		}
	};
}

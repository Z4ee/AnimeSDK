#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventCondition.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMCONDITIONANYOF_METHOD_3_348FD106B7E9B43E_OFFSET UNITYSDK_OFFSET(0x1D0A6D40)
#define RPG_GAMECORE_FIVEDIMCONDITIONANYOF_METHOD_3_44AAB1551AE71665_OFFSET UNITYSDK_OFFSET(0x1D0A4190)
#define RPG_GAMECORE_FIVEDIMCONDITIONANYOF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0A4180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimConditionAnyOf_TypeDefinitionIndex = 18585;

	class FiveDimConditionAnyOf : public ::RPG::GameCore::FiveDimBaseEventCondition
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventCondition*>* Conditions; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONDITIONANYOF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_348FD106B7E9B43E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimConditionAnyOf*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimConditionAnyOf*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONDITIONANYOF_METHOD_3_348FD106B7E9B43E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_44AAB1551AE71665(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimConditionAnyOf* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimConditionAnyOf*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONDITIONANYOF_METHOD_3_44AAB1551AE71665_OFFSET))(a1, a2);
		}
	};
}

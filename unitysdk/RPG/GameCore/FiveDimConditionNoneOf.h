#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventCondition.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMCONDITIONNONEOF_METHOD_4_89672584AFBE9849_OFFSET UNITYSDK_OFFSET(0x1D688420)
#define RPG_GAMECORE_FIVEDIMCONDITIONNONEOF_METHOD_4_D62460C184AB22EA_OFFSET UNITYSDK_OFFSET(0x1D6857B0)
#define RPG_GAMECORE_FIVEDIMCONDITIONNONEOF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6857A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimConditionNoneOf_TypeDefinitionIndex = 18797;

	class FiveDimConditionNoneOf : public ::RPG::GameCore::FiveDimBaseEventCondition
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventCondition*>* Conditions; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONDITIONNONEOF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_89672584AFBE9849(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimConditionNoneOf*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimConditionNoneOf*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONDITIONNONEOF_METHOD_4_89672584AFBE9849_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D62460C184AB22EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimConditionNoneOf* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimConditionNoneOf*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONDITIONNONEOF_METHOD_4_D62460C184AB22EA_OFFSET))(a1, a2);
		}
	};
}

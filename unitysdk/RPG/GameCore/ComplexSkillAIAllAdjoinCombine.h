#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIListCombineType.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAIALLADJOINCOMBINE_METHOD_3_2F06D0C02706C6A7_OFFSET UNITYSDK_OFFSET(0x1BC23640)
#define RPG_GAMECORE_COMPLEXSKILLAIALLADJOINCOMBINE_METHOD_3_3E5CFCD750EA9DE9_OFFSET UNITYSDK_OFFSET(0x1BC235E0)
#define RPG_GAMECORE_COMPLEXSKILLAIALLADJOINCOMBINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC23630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIAllAdjoinCombine_TypeDefinitionIndex = 14935;

	class ComplexSkillAIAllAdjoinCombine : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Int32 AdjoinCount; // 0x10
		::RPG::GameCore::ComplexSkillAISource* Evaluator; // 0x18
		::RPG::GameCore::ComplexSkillAIListCombineType ListCombineType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIALLADJOINCOMBINE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3E5CFCD750EA9DE9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIAllAdjoinCombine*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIAllAdjoinCombine*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIALLADJOINCOMBINE_METHOD_3_3E5CFCD750EA9DE9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2F06D0C02706C6A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIAllAdjoinCombine* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIAllAdjoinCombine*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIALLADJOINCOMBINE_METHOD_3_2F06D0C02706C6A7_OFFSET))(a1, a2);
		}
	};
}

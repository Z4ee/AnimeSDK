#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleCompare.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MARBLEBYCOMPARESKILLROUND_METHOD_4_95ABFE52173764BF_OFFSET UNITYSDK_OFFSET(0x1D8391F0)
#define RPG_GAMECORE_MARBLEBYCOMPARESKILLROUND_METHOD_4_B04319FDA56F829A_OFFSET UNITYSDK_OFFSET(0x1D839190)
#define RPG_GAMECORE_MARBLEBYCOMPARESKILLROUND__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8391E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByCompareSkillRound_TypeDefinitionIndex = 16885;

	class MarbleByCompareSkillRound : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::RPG::GameCore::MarbleCompare CompareType; // 0x28
		::System::Int32 Value; // 0x2C
		::System::String* ValueDynamic; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCOMPARESKILLROUND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B04319FDA56F829A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByCompareSkillRound*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByCompareSkillRound*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCOMPARESKILLROUND_METHOD_4_B04319FDA56F829A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_95ABFE52173764BF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByCompareSkillRound* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByCompareSkillRound*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCOMPARESKILLROUND_METHOD_4_95ABFE52173764BF_OFFSET))(a1, a2);
		}
	};
}

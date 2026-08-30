#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAILINEARITEM_METHOD_2_05405AD3DDA01CBF_OFFSET UNITYSDK_OFFSET(0x1CFF2800)
#define RPG_GAMECORE_COMPLEXSKILLAILINEARITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF2A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAILinearItem_TypeDefinitionIndex = 15385;

	class ComplexSkillAILinearItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint xmin; // 0x10
		::RPG::GameCore::FixPoint ymin; // 0x18
		::RPG::GameCore::FixPoint xmax; // 0x20
		::RPG::GameCore::FixPoint ymax; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAILINEARITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_05405AD3DDA01CBF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAILinearItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAILinearItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAILINEARITEM_METHOD_2_05405AD3DDA01CBF_OFFSET))(a1, a2);
		}
	};
}

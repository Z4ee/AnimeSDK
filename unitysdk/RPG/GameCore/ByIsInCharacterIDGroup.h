#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_BYISINCHARACTERIDGROUP_METHOD_4_8D921F136B18F253_OFFSET UNITYSDK_OFFSET(0x1702F100)
#define RPG_GAMECORE_BYISINCHARACTERIDGROUP_METHOD_4_F15D30BEF0753F17_OFFSET UNITYSDK_OFFSET(0x1702F1D0)
#define RPG_GAMECORE_BYISINCHARACTERIDGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1702F180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsInCharacterIDGroup_TypeDefinitionIndex = 21597;

	class ByIsInCharacterIDGroup : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* Group; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINCHARACTERIDGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8D921F136B18F253(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInCharacterIDGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInCharacterIDGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINCHARACTERIDGROUP_METHOD_4_8D921F136B18F253_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F15D30BEF0753F17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInCharacterIDGroup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInCharacterIDGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINCHARACTERIDGROUP_METHOD_4_F15D30BEF0753F17_OFFSET))(a1, a2);
		}
	};
}

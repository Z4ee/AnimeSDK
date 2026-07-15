#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYISINCHARACTERIDGROUP_METHOD_4_279830467368037B_OFFSET UNITYSDK_OFFSET(0x1B29A720)
#define RPG_GAMECORE_BYISINCHARACTERIDGROUP_METHOD_4_2B6AABEE98D63BAE_OFFSET UNITYSDK_OFFSET(0x1B29A520)
#define RPG_GAMECORE_BYISINCHARACTERIDGROUP_METHOD_4_3A93C01E5CCC3DDD_OFFSET UNITYSDK_OFFSET(0x1B29A750)
#define RPG_GAMECORE_BYISINCHARACTERIDGROUP_METHOD_4_F15D30BEF0753F17_OFFSET UNITYSDK_OFFSET(0x1B29A560)
#define RPG_GAMECORE_BYISINCHARACTERIDGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B29A550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsInCharacterIDGroup_TypeDefinitionIndex = 22530;

	class ByIsInCharacterIDGroup : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* Group; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINCHARACTERIDGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2B6AABEE98D63BAE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInCharacterIDGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInCharacterIDGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINCHARACTERIDGROUP_METHOD_4_2B6AABEE98D63BAE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F15D30BEF0753F17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInCharacterIDGroup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInCharacterIDGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINCHARACTERIDGROUP_METHOD_4_F15D30BEF0753F17_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_279830467368037B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInCharacterIDGroup*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInCharacterIDGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINCHARACTERIDGROUP_METHOD_4_279830467368037B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3A93C01E5CCC3DDD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInCharacterIDGroup* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInCharacterIDGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINCHARACTERIDGROUP_METHOD_4_3A93C01E5CCC3DDD_OFFSET))(a1, a2);
		}
	};
}

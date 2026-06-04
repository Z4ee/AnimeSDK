#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPRESHOWREDSTANCEBREAK_METHOD_4_33C3689204CF831A_OFFSET UNITYSDK_OFFSET(0x1957AAD0)
#define RPG_GAMECORE_BYPRESHOWREDSTANCEBREAK_METHOD_4_3E96508C9E938521_OFFSET UNITYSDK_OFFSET(0x1957A890)
#define RPG_GAMECORE_BYPRESHOWREDSTANCEBREAK_METHOD_4_8D2F77338456F54D_OFFSET UNITYSDK_OFFSET(0x1957A7C0)
#define RPG_GAMECORE_BYPRESHOWREDSTANCEBREAK_METHOD_4_DE12704C0B0A8E9D_OFFSET UNITYSDK_OFFSET(0x1957AA50)
#define RPG_GAMECORE_BYPRESHOWREDSTANCEBREAK__CTOR_OFFSET UNITYSDK_OFFSET(0x1957A840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPreShowRedStanceBreak_TypeDefinitionIndex = 22256;

	class ByPreShowRedStanceBreak : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SkillCaster; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPRESHOWREDSTANCEBREAK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8D2F77338456F54D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPreShowRedStanceBreak*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPreShowRedStanceBreak*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPRESHOWREDSTANCEBREAK_METHOD_4_8D2F77338456F54D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3E96508C9E938521(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPreShowRedStanceBreak* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPreShowRedStanceBreak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPRESHOWREDSTANCEBREAK_METHOD_4_3E96508C9E938521_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DE12704C0B0A8E9D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPreShowRedStanceBreak*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPreShowRedStanceBreak*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPRESHOWREDSTANCEBREAK_METHOD_4_DE12704C0B0A8E9D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_33C3689204CF831A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPreShowRedStanceBreak* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPreShowRedStanceBreak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPRESHOWREDSTANCEBREAK_METHOD_4_33C3689204CF831A_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYPRESHOWREDSTANCEBREAK_METHOD_4_3E96508C9E938521_OFFSET UNITYSDK_OFFSET(0x1875DA50)
#define RPG_GAMECORE_BYPRESHOWREDSTANCEBREAK_METHOD_4_8D2F77338456F54D_OFFSET UNITYSDK_OFFSET(0x1875D980)
#define RPG_GAMECORE_BYPRESHOWREDSTANCEBREAK__CTOR_OFFSET UNITYSDK_OFFSET(0x1875DA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPreShowRedStanceBreak_TypeDefinitionIndex = 22508;

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
	};
}

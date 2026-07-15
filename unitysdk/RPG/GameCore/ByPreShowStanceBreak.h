#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PreShowStanceCheckType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPRESHOWSTANCEBREAK_METHOD_4_759BF57859F8CB08_OFFSET UNITYSDK_OFFSET(0x1B2B4FE0)
#define RPG_GAMECORE_BYPRESHOWSTANCEBREAK_METHOD_4_903B50C97A240748_OFFSET UNITYSDK_OFFSET(0x1B2B4D60)
#define RPG_GAMECORE_BYPRESHOWSTANCEBREAK_METHOD_4_CE49D4037350A5D5_OFFSET UNITYSDK_OFFSET(0x1B2B4DA0)
#define RPG_GAMECORE_BYPRESHOWSTANCEBREAK_METHOD_4_FECBC4EB7A46E32E_OFFSET UNITYSDK_OFFSET(0x1B2B4FB0)
#define RPG_GAMECORE_BYPRESHOWSTANCEBREAK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2B4D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPreShowStanceBreak_TypeDefinitionIndex = 22696;

	class ByPreShowStanceBreak : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SkillCaster; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::RPG::GameCore::PreShowStanceCheckType CheckType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPRESHOWSTANCEBREAK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_903B50C97A240748(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPreShowStanceBreak*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPreShowStanceBreak*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPRESHOWSTANCEBREAK_METHOD_4_903B50C97A240748_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CE49D4037350A5D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPreShowStanceBreak* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPreShowStanceBreak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPRESHOWSTANCEBREAK_METHOD_4_CE49D4037350A5D5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FECBC4EB7A46E32E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPreShowStanceBreak*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPreShowStanceBreak*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPRESHOWSTANCEBREAK_METHOD_4_FECBC4EB7A46E32E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_759BF57859F8CB08(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPreShowStanceBreak* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPreShowStanceBreak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPRESHOWSTANCEBREAK_METHOD_4_759BF57859F8CB08_OFFSET))(a1, a2);
		}
	};
}

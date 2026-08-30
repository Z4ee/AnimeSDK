#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PreShowStanceCheckType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPRESHOWSTANCEBREAK_METHOD_4_759BF57859F8CB08_OFFSET UNITYSDK_OFFSET(0x1CF58A70)
#define RPG_GAMECORE_BYPRESHOWSTANCEBREAK_METHOD_4_D25B0E286E212A0C_OFFSET UNITYSDK_OFFSET(0x1CF58800)
#define RPG_GAMECORE_BYPRESHOWSTANCEBREAK_METHOD_4_E30756A6F520D271_OFFSET UNITYSDK_OFFSET(0x1CF587C0)
#define RPG_GAMECORE_BYPRESHOWSTANCEBREAK_METHOD_4_FECBC4EB7A46E32E_OFFSET UNITYSDK_OFFSET(0x1CF58A40)
#define RPG_GAMECORE_BYPRESHOWSTANCEBREAK__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF587F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPreShowStanceBreak_TypeDefinitionIndex = 23273;

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

		static ::System::Void Method_4_E30756A6F520D271(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPreShowStanceBreak*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPreShowStanceBreak*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPRESHOWSTANCEBREAK_METHOD_4_E30756A6F520D271_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D25B0E286E212A0C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPreShowStanceBreak* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPreShowStanceBreak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPRESHOWSTANCEBREAK_METHOD_4_D25B0E286E212A0C_OFFSET))(a1, a2);
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

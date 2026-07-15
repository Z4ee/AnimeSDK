#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPRESHOWREDSTANCEBREAK_METHOD_4_3E96508C9E938521_OFFSET UNITYSDK_OFFSET(0x1B2B46C0)
#define RPG_GAMECORE_BYPRESHOWREDSTANCEBREAK_METHOD_4_600014668428C9E1_OFFSET UNITYSDK_OFFSET(0x1B2B4880)
#define RPG_GAMECORE_BYPRESHOWREDSTANCEBREAK_METHOD_4_86320E4EEA492137_OFFSET UNITYSDK_OFFSET(0x1B2B48B0)
#define RPG_GAMECORE_BYPRESHOWREDSTANCEBREAK_METHOD_4_C0A3AE4FEB12438C_OFFSET UNITYSDK_OFFSET(0x1B2B4680)
#define RPG_GAMECORE_BYPRESHOWREDSTANCEBREAK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2B46B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPreShowRedStanceBreak_TypeDefinitionIndex = 22697;

	class ByPreShowRedStanceBreak : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SkillCaster; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPRESHOWREDSTANCEBREAK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C0A3AE4FEB12438C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPreShowRedStanceBreak*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPreShowRedStanceBreak*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPRESHOWREDSTANCEBREAK_METHOD_4_C0A3AE4FEB12438C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3E96508C9E938521(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPreShowRedStanceBreak* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPreShowRedStanceBreak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPRESHOWREDSTANCEBREAK_METHOD_4_3E96508C9E938521_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_600014668428C9E1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPreShowRedStanceBreak*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPreShowRedStanceBreak*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPRESHOWREDSTANCEBREAK_METHOD_4_600014668428C9E1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_86320E4EEA492137(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPreShowRedStanceBreak* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPreShowRedStanceBreak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPRESHOWREDSTANCEBREAK_METHOD_4_86320E4EEA492137_OFFSET))(a1, a2);
		}
	};
}

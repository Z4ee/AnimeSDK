#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PreShowStanceCheckType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPRESHOWSTANCEBREAK_METHOD_4_40568CB23386BD75_OFFSET UNITYSDK_OFFSET(0x1957B190)
#define RPG_GAMECORE_BYPRESHOWSTANCEBREAK_METHOD_4_52F4210AE8E55735_OFFSET UNITYSDK_OFFSET(0x1957AE30)
#define RPG_GAMECORE_BYPRESHOWSTANCEBREAK_METHOD_4_CE49D4037350A5D5_OFFSET UNITYSDK_OFFSET(0x1957AF00)
#define RPG_GAMECORE_BYPRESHOWSTANCEBREAK_METHOD_4_F890D78AB73D5FC6_OFFSET UNITYSDK_OFFSET(0x1957B110)
#define RPG_GAMECORE_BYPRESHOWSTANCEBREAK__CTOR_OFFSET UNITYSDK_OFFSET(0x1957AEB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPreShowStanceBreak_TypeDefinitionIndex = 22255;

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

		static ::System::Void Method_4_52F4210AE8E55735(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPreShowStanceBreak*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPreShowStanceBreak*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPRESHOWSTANCEBREAK_METHOD_4_52F4210AE8E55735_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CE49D4037350A5D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPreShowStanceBreak* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPreShowStanceBreak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPRESHOWSTANCEBREAK_METHOD_4_CE49D4037350A5D5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F890D78AB73D5FC6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPreShowStanceBreak*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPreShowStanceBreak*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPRESHOWSTANCEBREAK_METHOD_4_F890D78AB73D5FC6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_40568CB23386BD75(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPreShowStanceBreak* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPreShowStanceBreak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPRESHOWSTANCEBREAK_METHOD_4_40568CB23386BD75_OFFSET))(a1, a2);
		}
	};
}
